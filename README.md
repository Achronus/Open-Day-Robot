# Open Day Robot

## Project Details
This project utilizies C++, Python and SQL to create a prototype Open Day Robot (ODR) for the University of Lincoln (UoL). It focuses on the TIAGo robot from PAL Robotics and uses the Robot Operating System (ROS). With the combined power of machine learning, speech recognition, facial recognition, person detection and a pathfinding algorithm we created the ability to use a graphical user interface (GUI) to answer questions from prospecting students.

The robot locks onto the closest person and approaches them, upon the person facing the robot it will identify the persons facial features and display the GUI providing them with the option to ask a query. The robot will listen to the query, search through its database and output relevant information to the screen. Queries are filtered, ignoring curse words and inappropriate questions. New queries are added to the database and prospecting students are directed to an academic if the query is unknown. Users that walk away from the robot or are finished using it are stored as an ID within local memory to avoid approaching them again within the next hour. In emergency situations such as a fire alarm the robot will move to the nearest designated wall (carefully) and shutdown, avoiding the risk of blocking emergency exits.

- TIAGo robot components used: torso touchscreen, thermal camera and navigation laser.
- Full specifications and all usable components can be found [here](http://pal-robotics.com/robots/tiago/#tiago-configurator).

Details and progress of the full project can be found on our [Trello](https://trello.com/b/PngEcR5d) board.

**PLEASE NOTE**: this project currently only handles queries that are for Computer Science students and that are native English speakers. Future functionality will allow for additional courses and languages to be processed.

### Documentation
_Coming soon!_

### Collaborators
Ryan Partridge, Lewis Mcgillion, Joshua Wise, Michael Cable, Dominika Prochacka, Callum Godfrey, Shyam Pancholi.