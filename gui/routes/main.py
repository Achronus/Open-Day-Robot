#-----------------------------------------------------------------------
# File Title: Flask Route Functions
# File Description: Handles the creation of each pages functionality.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from flask import (
	Blueprint, render_template, redirect, request, url_for, session
)
from database import Database
from querying import Querying

# Set core variables
main = Blueprint('main', __name__)

# Create class instances
db = Database()
q = Querying()

#-----------------------------------------------------------------------
# Home Page Link
#-----------------------------------------------------------------------
@main.route("/", methods=["POST", "GET"])
def index():
	if request.method == "POST":
		# Get category and redirect to results page
		if 'question' in request.form:
			query = request.form['question'].lower().capitalize()
			new_query, error = q.query_checker(query) # Check if new query is a string

			# Length of query is too small
			if (len(new_query) <= 15) or (error):
				return redirect(url_for("main.error"))
			# Run query timeout and set the session query
			elif q.query_timeout(new_query):
				q.query_timeout(new_query)
				session['query'] = new_query
				return redirect(url_for("main.results")) # Move to results page
			# Get matches for calculated likelihood
			else:
				result = q.calculated_likelihood(query, percentage=40)
				# Check calculated likelihood isn't lower than 35%
				if result != False:
					session['likely_queries'] = result
					return redirect(url_for("main.likely_questions"))
				else:
					return redirect(url_for("main.error")) # Return error page

		# If popular query selected, get the query and go to results
		elif 'popular_query' in request.form:
			popular_query = request.form['popular_query']
			session['query'] = popular_query

			# Recalulate popularity order
			q.query_frequency(popular_query)

			# Move to results page
			return redirect(url_for("main.results"))

	else:
		# Go to home page
		return render_template("index.html", popular_queries=q.popular_queries())

#-----------------------------------------------------------------------
# Error Page Link
#-----------------------------------------------------------------------
@main.route("/error")
def error():
	return render_template("error.html")

#-----------------------------------------------------------------------
# Likely Questions Page Link
#-----------------------------------------------------------------------
@main.route("/likely-questions", methods=["POST", "GET"])
def likely_questions():
	if request.method == "POST":
		# Get query and pass it to results
		query = request.form['query']
		session['query'] = query

		# Recalulate popularity order
		q.query_frequency(query)

		# Move to results page
		return redirect(url_for("main.results"))
	else:
		# Go to questions page
		return render_template("likely-questions.html")

#-----------------------------------------------------------------------
# Results Page Link
#-----------------------------------------------------------------------
@main.route("/results")
def results():
	# Get questions and set answer session
	query = session.get('query')
	answer = db.find_answer(query)
	session['answer'] = answer

	# Go to results page
	return render_template("results.html")