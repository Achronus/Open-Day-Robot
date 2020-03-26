#-----------------------------------------------------------------------
# File Title: Initialize App
# File Description: Sets the app settings.
# Author: Ryan Partridge
#-----------------------------------------------------------------------
from flask import Flask
import os, secrets

from routes.main import main

#-----------------------------------------------------------------------
# Function name: create_app()
#-----------------------------------------------------------------------
def create_app(config_file=None):
  '''
  Create and configure the app.\n
  Parameters: (1) optional config file
  '''
  app = Flask(__name__)
  app.config['SECRET_KEY'] = secrets.token_urlsafe() # Needed for storing sessions

  if config_file is None:
    # Load the instance config, if it exists, when not testing
    app.config.from_pyfile('config.py', silent=True)
  else:
    # Load the test config if available
    app.config.from_pyfile(config_file)
  
  # Check that the instance folder exists
  try:
    os.makedirs(app.instance_path)
  except OSError:
    pass

  # Import pages blueprint
  app.register_blueprint(main)

  return app