#-----------------------------------------------------------------------
# File Title: Flask Route Functions
# File Description: Handles the creation of each pages functionality.
# Author: Michael Cable & Ryan Partridge
#-----------------------------------------------------------------------
from flask import Flask, render_template, redirect, request, url_for, session
from database import Database

# Set core variables
app = Flask(__name__)
app.secret_key = b'dGxW25@#AQ9Zk0Q%WZzj1Xd9P0LeXv' # Needed for storing sessions
db = Database()

#-----------------------------------------------------------------------
# Home Page Link
#-----------------------------------------------------------------------
@app.route("/", methods=["POST", "GET"])
def home():
	if request.method == "POST":
		# Get category and redirect to questions page
		category = request.form['category']
		selected_questions = db.get_category_questions(category)
		session['queries'] = selected_questions
		return redirect(url_for("questions", category=category))
	else:
		# Go to home page
		return render_template("home.html")

#-----------------------------------------------------------------------
# Error Page Link
#-----------------------------------------------------------------------
@app.route("/error")
def error():
	return render_template("error.html")

#-----------------------------------------------------------------------
# Questions Page Link
#-----------------------------------------------------------------------
@app.route("/questions/<category>", methods=["POST", "GET"])
def questions(category):
	if request.method == "POST":
		# Get query and pass it to results
		query = request.form['query']
		session['query'] = query
		return redirect(url_for("results"))
	else:
		# Go to questions page
		return render_template("questions.html")

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