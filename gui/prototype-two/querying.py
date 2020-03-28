#-----------------------------------------------------------------------
# File Title: Querying Class
# File Description: Handles all user query functionality.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from database import Database
import fuzzywuzzy
from fuzzywuzzy import process

#-----------------------------------------------------------------------
# Class Title: Querying()
#-----------------------------------------------------------------------
class Querying():
  """
  Used to manage users queries to the GUI by calculating the right output 
  and return it to the user. Takes a query as input.\n
  Functions: (7) __init__(), query_timeout(), filter_query(), 
  set_query_dict(), query_frequency(), popular_queries(), 
  calculated_likelihood()
  """
  #-----------------------------------------------------------------------
  # Function Title: __init__()
  #-----------------------------------------------------------------------
  def __init__(self):
    self.db = Database()
    self.query_dict = {}

    # Set query_dict values
    self.set_query_dict()

  #-----------------------------------------------------------------------
  # Function Title: query_timeout()
  #-----------------------------------------------------------------------
  def query_timeout(self, query):
    """
    Used for timing out a query that cannot be found within the database
    or for when the user has walked away from the robot.\n
    Parameters: (2) user query
    """
    all_questions = self.db.get_all_questions()

    # If query cannot be found
    if query not in all_questions:
      # Check query isn't in bad words list
      if not self.filter_query(query) and len(query) > 15:
        # Add new question to database
        self.db.add_new_question(query)
      else:
        return False
    else:
      # Check query isn't in bad words list
      if not self.filter_query(query):
        self.query_frequency(query) # Recalculate query popularity
      else:
        return False
  
  #-----------------------------------------------------------------------
  # Function Title: filter_query()
  #-----------------------------------------------------------------------
  def filter_query(self, query):
    """
    Used to filter out irrelevant questions asked by users.\n
    Parameters: (1) user query
    """
    query_split = list(query.split(' '))

    # Check if bad words are in the query
    if any(word in self.db.get_bad_words() for word in query_split):
      return True

  #-----------------------------------------------------------------------
  # Function Title: set_query_dict()
  #-----------------------------------------------------------------------
  def set_query_dict(self):
    """
    Used to initalise all database questions into the query dictionary.
    """
    # Initialise query_dict values
    if len(self.query_dict) == 0:
      # Get all questions
      question_list = self.db.get_all_questions()

      # Put them into query dict
      for question in question_list:
        self.query_dict[question] = 0

  #-----------------------------------------------------------------------
  # Function Title: query_frequency()
  #-----------------------------------------------------------------------
  def query_frequency(self, query):
    """
    Used to calculate query frequency selected by user. Creates a dictionary
    of all database queries with a tally based on frequency.\n
    Parameters: (1) user query
    """
    # If query is in query_dict
    if query in self.query_dict.keys():
      # Add one to query value in query_dict
      self.query_dict[query] += 1

  #-----------------------------------------------------------------------
  # Function Title: popular_queries()
  #-----------------------------------------------------------------------
  def popular_queries(self):
    """
    Provides a list of questions from the database that are most commonly
    asked by users. Uses a dictionary with the question count and brings
    the questions with the highest count to the top of the list.\n
    """
    popular_list = []
  	# Sort highest to lowest
    self.query_dict = {k: v for k, v in sorted(self.query_dict.items(), key=lambda item: item[1], reverse=True)}

    # Get top queries with highest value
    for query in self.query_dict.keys():
      # Add top queries to popular list
      if len(popular_list) < 6:
        popular_list.append(query)
    
    return popular_list

  #-----------------------------------------------------------------------
  # Function Title: calculated_likelihood()
  #-----------------------------------------------------------------------
  def calculated_likelihood(self, query, percentage=80):
    """
    Used to calculate the likelihood of a query matching a question within
    the database. Uses Levenshtein Distance from the fuzzywuzzy package.\n
    Parameters: (2) user query, likelihood percentage
    """
    all_questions = self.db.get_all_questions()

    # Get 6 closest matches
    matches = fuzzywuzzy.process.extract(query, all_questions, limit=6, scorer=fuzzywuzzy.fuzz.token_sort_ratio)

    # Only get matches if ratio is higher than percentage
    closest_matches = [items[0] for items in matches if items[1] >= percentage]

    # Change return value depending on closest
    return closest_matches