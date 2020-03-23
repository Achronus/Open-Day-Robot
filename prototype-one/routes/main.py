#-----------------------------------------------------------------------
# File Title: Flask Route Functions
# File Description: Handles the creation of each pages functionality.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from flask import (
	Blueprint, render_template, redirect, request, url_for, session
)
from gui.database import Database

# Set page as blueprint
main = Blueprint('main', __name__)
db = Database()

#-----------------------------------------------------------------------
# Home Page Link
#-----------------------------------------------------------------------
@main.route("/", methods=["POST", "GET"])
def index():
	if request.method == "POST":
		# Get category and redirect to questions page
		category = request.form['category']
		selected_questions = db.get_category_questions(category)
		session['queries'] = selected_questions
		return redirect(url_for("main.questions", category=category))
	else:
		# Go to home page
		return render_template("index.html")

#-----------------------------------------------------------------------
# Questions Page Link
#-----------------------------------------------------------------------
@main.route("/questions/<category>", methods=["POST", "GET"])
def questions(category):
	if request.method == "POST":
		# Get query and pass it to results
		query = request.form['query']
		session['query'] = query
		return redirect(url_for("main.results"))
	else:
		# Go to questions page
		return render_template("questions.html")

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