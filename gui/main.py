#-----------------------------------------------------------------------
# File Title: Flask Route Functions
# File Description: Handles all basic page functionality.
# Author: Michael Cable
#-----------------------------------------------------------------------
from flask import Flask, render_template

app = Flask(__name__)

@app.route("/")
def home():
	return render_template("home-p1.html")
    
@app.route("/home-p2")
def homeP2():
	return render_template("home-p2.html")

@app.route("/home-p3")
def homeP3():
	return render_template("home-p3.html")

@app.route("/error-page")
def errorPage():
	return render_template("error-page.html")

@app.route("/questions-p1")
def questions():
	return render_template("questions-p1.html")

@app.route("/results-page")
def results():
	return render_template("results-page.html")
    
if __name__ == "__main__":
	app.run(debug=True)