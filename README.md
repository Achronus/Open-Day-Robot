# Open-Day-Robot
Brief Overview 

Robotics functionality:   

Move around the atrium at a set path.  

Infrared camera to detect if the person is human/move towards ‘the hot thing that moves’ (humans).  

Speak to say ‘Hi there! What course are you interested in?’ to greet new people.  

  

Visual display and speech recognition backend:  

Uses an FAQ database to cross reference spoken human questions. 

Provide a prompt to speak to a specific staff member/go to another location if the answer doesn’t exist. 

Filters out irrelevant questions and stores ones that could be useful for future use. 

 

 

Core Artefact Functionality 

A full breakdown of the artefact is outlined below: 

Robot functionality that achieves the following (C++ or Python – C++ might be better): 

Detects people in the room using infra-red camera. - SHYAM 

Approaches the closest person using motion sensor detectors - LEWIS 

Greets closest person smiles on the touch screen interface mounted to the robot and provides them with information relevant to their request. - CALLUM 

Face 

Database connection  

Once closest individual has finished interacting with the robot, it will begin moving around the room again and find another person to approach - MICHAEL 

Visual display and speech recognition backend (SQL queries and data parsing – Python recommended): 

Uses an FAQ database to cross reference spoken human questions 

Speech/linguistic recognition - RYAN 

FAQ database gathering - JOSH 

Filters out irrelevant questions and stores ones that haven’t been answered yet that could be useful for future use. - NIKKI 

Provides a prompt to speak to a relevant staff member, or directing to another location, if the answer doesn’t exist - JOSH 

Prompts suggestion questions related to the students request. Also, provides common student asked questions - RYAN 

 

ROBOT RISK: If it is in the way of a door when the fire alarm goes off, robot backs up to nearest wall and shuts down automatically, avoiding colliding with humans. 
