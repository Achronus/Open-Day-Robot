#-----------------------------------------------------------------------
# File Title: Main function
# File Description: Used to run the program.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from querying import Querying
import pandas as pd
import os

#-----------------------------------------------------------------------
# Function Title: main()
#-----------------------------------------------------------------------
def main():
  """
  Consists of the main functionality of the script.
  """
  # Get the query
  query = "No bad words here!"

  # Get bad words from file as a list
  bw_file = os.getcwd() + "\\bad-words.txt"
  df = pd.read_csv(bw_file)
  bad_words_list = list(df.iloc[:, 0])

  # Create query class
  q = Querying(query, bad_words_list, {})

  # If word from file is in query
  q.filter_query()

  # Add queries to dictonary count
  q.query_frequency()

  # Output popular queries
  q.popular_queries()

# Run main function
if __name__ == "__main__": main()