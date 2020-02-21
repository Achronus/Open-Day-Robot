//-----------------------------------------------------------------------
// File Description:
// Handles management of accessing the database and retrieving details.
//-----------------------------------------------------------------------
config object
sql_hostname string
sql_username string
sql_port int
sql_password string
sql_database string
use_ssh bool
ssh_host string
ssh_user string
ssh_port int
ssh_pkey string

close -> none
// Close all database connections

get_category_questions -> category
// Get questions related to selected category
// Return associated list of questions

find_answer -> question
// Get answer of given question
// Return location

add_new_questions -> new_question
// Store new question to database