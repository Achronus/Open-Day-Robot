"""
The database connector for getting answers to questions about courses.
"""


import sqlite3


class QuestionDatabase:
    """The connector class for the question database."""

    def __init__(self):
        self._database = sqlite3.connect("database.db")
        self._cursor = self._database.cursor()

    def close(self):
        """Close the connection to the database."""
        self._cursor.close()
        self._database.close()

    def get_category_question_list(self, category):
        """Returns a list of strings containing each question in the database."""
        question_list = []
        question_list_sql = "SELECT question FROM questions WHERE category='{}'".format(category)
        for question in self._cursor.execute(question_list_sql):
            question_list.append(question[0])
        return question_list

    def find_answer(self, question):
        """Finds the answer to the given question."""
        sql = "SELECT answer FROM questions WHERE question='{}'".format(question)
        for response in self._cursor.execute(sql):
            return response[0]

    def add_new_question(self, new_question):
        """Adds a new question to the ToBeAnswered table."""
        # Start by checking if the question is already in the ToBeAnswered table.
        search_sql = "SELECT unanswered_question FROM ToBeAnswered WHERE unanswered_question='{}'".format(new_question)
        for response in self._cursor.execute(search_sql):
            if not response[0]:
                # If the question is not in the ToBeAnswered table add it to the table.
                add_sql = "INSERT INTO ToBeAnswered (unanswered_question) VALUES('{}')".format(new_question)
                self._cursor.execute(add_sql)
