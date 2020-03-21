#-----------------------------------------------------------------------
# File Title: Flask Route Functions
# File Description: Handles the creation of each pages functionality.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from flask import Flask, render_template, redirect, request, url_for, session, jsonify
from database import Database
from querying import Querying

# Set core variables
app = Flask(__name__)
app.secret_key = b'dGxW25@#AQ9Zk0Q%WZzj1Xd9P0LeXv' # Needed for storing sessions

# Create class instances
db = Database()
q = Querying()

#-----------------------------------------------------------------------
# Home Page Link
#-----------------------------------------------------------------------
@app.route("/", methods=["POST", "GET"])
def home():
	if request.method == "POST":
		# Get category and redirect to results page
		if 'question' in request.form:
			query = request.form['question']
			# Length of query is too small
			if len(query) <= 15:
				return redirect(url_for("error"))
			# Exacty query
			elif q.query_timeout(query):
				session['query'] = query
				return redirect(url_for("results"))
			# Likely queries
			else:
				session['likely_queries'] = q.calculated_likelihood(query, percentage=40)
				return redirect(url_for("likely_questions"))

		# If popular query selected, get the query and go to results
		elif 'popular_query' in request.form:
			popular_query = request.form['popular_query']
			session['query'] = popular_query

			# Recalulate popularity order
			q.query_frequency(popular_query)

			# Move to results page
			return redirect(url_for("results"))

	else:
		# Go to home page
		return render_template("home.html", popular_queries=q.popular_queries())

#-----------------------------------------------------------------------
# Error Page Link
#-----------------------------------------------------------------------
@app.route("/error")
def error():
	return render_template("error.html")

#-----------------------------------------------------------------------
# Likely Questions Page Link
#-----------------------------------------------------------------------
@app.route("/likely-questions", methods=["POST", "GET"])
def likely_questions():
	if request.method == "POST":
		# Get query and pass it to results
		query = request.form['query']
		session['query'] = query
		return redirect(url_for("results"))
	else:
		# Go to questions page
		return render_template("likely-questions.html")

#-----------------------------------------------------------------------
# Results Page Link
#-----------------------------------------------------------------------
@app.route("/results")
def results():
	# Get questions and set answer session
	query = session.get('query')
	answer = db.find_answer(query)
	session['answer'] = answer

	# Go to results page
	return render_template("results.html")

# Run application
if __name__ == "__main__":
	app.run(debug=True)