query string
query_dict dictionary
bad_words list

calculated_likelihood -> query, percentage=0.7
// If likelihood < percentage
   // Display 'error' page
// Else
   // Output query
   // Run query_frequency

query_timeout -> query
// If query cannot be found
   // Direct to 'error' page
// If user walks out of range
   // Stop searching
   // Display sad face

filter_query -> query, word_list
// Check for 'curse words' from file
// If word from file is in query
   // Direct to 'error' page
// Else
   // Check if query in database (Run calculated_likelihood)

query_frequency -> query
// If query not in query_dict
   // Add found query to query_dict
// Add one to query value in query_dict

popular_queries -> none
// Get top 10 queries with highest value
// Display top queries on GUI