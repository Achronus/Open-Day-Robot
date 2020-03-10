#-----------------------------------------------------------------------
# File Title: Querying Class
# File Description: Handles all user query functionality.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from database import Database

#-----------------------------------------------------------------------
# Class Title: Querying()
#-----------------------------------------------------------------------
class Querying():
  """
  Used to manage users queries to the GUI by calculating the right output 
  and return it to the user. Takes a query as input.\n
  Functions: (5) query_timeout(), filter_query(), query_frequency(), 
  popular_queries(), calculated_likelihood()
  """
  #-----------------------------------------------------------------------
  # Function Title: __init__()
  #-----------------------------------------------------------------------
  def __init__(self, query, bad_words_list, query_dict):
    self.query = query
    self.bad_words_list = bad_words_list
    self.query_dict = query_dict
    self.db = Database()

  #-----------------------------------------------------------------------
  # Function Title: query_timeout()
  #-----------------------------------------------------------------------
  def query_timeout(self):
    """
    Used for timing out a query that cannot be found within the database
    or for when the user has walked away from the robot.\n
    """
    # If query cannot be found
    if self.query not in self.db.find_answer(self.query):
      # Display error page
      # page.error()
      print("error page")

    # If user walks out of range
    if user not in robot.range:
      # Stop searching and display error
      # page.error()
      print("error page")

  #-----------------------------------------------------------------------
  # Function Title: filter_query()
  #-----------------------------------------------------------------------
  def filter_query(self):
    """
    Used to filter out irrelevant questions asked by users.\n
    """
    query_split = list(self.query.split(' '))

    # Check if bad words are in the query
    if any(word in self.bad_words_list for word in query_split):
      return True

  #-----------------------------------------------------------------------
  # Function Title: query_frequency()
  #-----------------------------------------------------------------------
  def query_frequency(self):
    """
    Used to calculate query frequency selected by user. Creates a dictionary
    of all database queries with a tally based on frequency.\n
    """
    # If query is in bad words
    if not self.filter_query():
      # If query in query_dict
      if self.query_dict.get(self.query):
        # Add one to query value in query_dict
        self.query_dict[self.query] += 1
      else:
        # Add found query to query_dict
        self.query_dict[self.query] = 1
    else:
      # Display error page
      # error.page()
      print("error page")

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
    # sort in highest to lowest
    sorted(self.query_dict, key=self.query_dict.get, reverse=True) 
    
    # Get top 8 queries with highest value
    for query in self.query_dict.keys():
      # Add top queries to popular list
      if len(popular_list) <= 8:
        popular_list.append(query)

    # Display top queries on GUI
    for query in popular_list:
      print(query)

  #-----------------------------------------------------------------------
  # Function Title: calculated_likelihood()
  #-----------------------------------------------------------------------
  def calculated_likelihood(self, percentage=0.7):
    """
    Used to calculate the likelihood of a query matching a question within
    the database.\n
    Parameters: (1) likelihood percentage
    """
    pass
    # If likelihood < percentage
      # Display error page
    # Else
      # Output query
      # Run query_frequency