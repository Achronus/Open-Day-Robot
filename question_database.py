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

    def find_answer(self, question):
        """Finds the answer to the given question."""
        sql = "SELECT answer FROM questions WHERE question='{}'".format(question)
        for response in self._cursor.execute(sql):
            return response