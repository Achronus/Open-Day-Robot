"""
Connector for cloud database for answers about questions.
"""

import configparser
import paramiko
import pymysql
import sshtunnel
import time


class Database:
    """Connector class for mysql connection."""
    def __init__(self):
        """Create connection to remote mysql database."""
        config = configparser.ConfigParser()  # Information to create connection here
        config.read("database.config")
        if "SSH" in config.sections() and "MySQL" in config.sections():
            # MySQL Settings
            sql_hostname = config['MySQL']['MySqlHost']
            sql_username = config['MySQL']['MySqlUser']
            sql_port = int(config['MySQL']['MySqlPort'])
            sql_password = config['MySQL']['MySqlPassword']
            sql_database = config['MySQL']['MySqlDatabase']

            use_ssh = config['SSH']['UseSsh']  # Determine if need to use SSH
            if use_ssh.lower() == "true":  # If using SSH get SSH settings
                ssh_host = config['SSH']['Host']
                ssh_user = config['SSH']['User']
                ssh_port = int(config['SSH']['Port'])
                ssh_pkey = paramiko.RSAKey.from_private_key_file(config['SSH']['PKeyFile'],
                                                                 password=config['SSH']['Password'])
                self._tunnel = sshtunnel.SSHTunnelForwarder((ssh_host, ssh_port), ssh_username=ssh_user,
                                                            ssh_pkey=ssh_pkey, remote_bind_address=(sql_hostname, sql_port))
                self._tunnel.start()
                time.sleep(1)
                self._connection = pymysql.connect(host="127.0.0.1", user=sql_username, passwd=sql_password,
                                                   db=sql_database, port=self._tunnel.local_bind_port)
                self._cursor = self._connection.cursor()
            else:  # If not using SSH to connect to the database
                self._connection = pymysql.connect(host=sql_hostname, user=sql_username, passwd=sql_password,
                                                   db=sql_database, port=sql_port)
                self._cursor = self._connection.cursor()
        else:
            print("Missing config file sections")

    def close(self):
        self._cursor.close()
        self._connection.close()
        self._tunnel.close()

    def get_category_questions(self, category):
        """Returns a list of all questions that are in a particular category"""
        question_list = []
        question_list_sql = "SELECT question FROM questions WHERE category='{}'".format(category)
        self._cursor.execute(question_list_sql)
        for question in self._cursor.fetchall():
            question_list.append(question[0])
        return question_list

    def find_answer(self, question):
        """Finds the answer to the given question"""
        answer_sql = "SELECT description FROM questions WHERE question='{}'".format(question)
        self._cursor.execute(answer_sql)
        return self._cursor.fetchone()[0]

    def add_new_question(self, new_question):
        """Adds a new question to the new_questions table"""
        import datetime
        # Check if the question is already in the new_questions table
        search_sql = "SELECT question FROM new_questions WHERE question='{}'".format(new_question)
        self._cursor.execute(search_sql)
        response = self._cursor.fetchone()
        if response is None:  # If the question is not already in the new_questions table
            count_sql = "SELECT COUNT(*) FROM new_questions"  # Find the next id to add the question to the database
            self._cursor.execute(count_sql)
            question_id = self._cursor.fetchone()[0]
            created_at = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
            add_sql = "INSERT INTO new_questions (id, question, created_at) VALUES({}, '{}', '{}')".format(question_id, new_question, created_at)
            self._cursor.execute(add_sql)
            self._connection.commit()  # Save changes
