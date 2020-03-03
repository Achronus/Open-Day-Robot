//-----------------------------------------------------------------------
// File Description:
// Handles all the robot functionality.
//-----------------------------------------------------------------------
positionX int
positionY int 
positionZ int
personIdList vector<int>

void moveToCoords -> x, y, z
// Run navigationNode
// Moves to closest person (call detectPerson)
// Greet them, wait for them to turn and face them
  // If facing them
    // Display GUI
    // Run storePerson
  // Else
    // Display sad face
    // Look for new person to approach
// If obstacles, move around them (wait for people to pass if needed)

void detectPerson -> none
// Run detectPersonNode
// Check if person is a person
// Call detectFace

int detectFace -> none
// Run facialFeaturesNode
// Check if front facial features are displayed
// Return personId

void storePerson -> personId
// Add personsId to personsIdList
// Wait 1 hour
  // Remove 'oldest' stored person from list
// If personsIdList > 30
  // Remove 'oldest' stored person to store new one

void resumeMovement -> none
// If 'targeted' person has moved out of range of sensors
  // Wait 1 minute before finding new target

void alarmAction -> none
// If consistant loud noise is heard for more than 1 minute
  // Move robot to nearest wall and shutdown
