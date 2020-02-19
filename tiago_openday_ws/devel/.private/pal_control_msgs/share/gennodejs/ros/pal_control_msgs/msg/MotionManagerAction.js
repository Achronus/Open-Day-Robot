// Auto-generated. Do not edit!

// (in-package pal_control_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let MotionManagerActionGoal = require('./MotionManagerActionGoal.js');
let MotionManagerActionResult = require('./MotionManagerActionResult.js');
let MotionManagerActionFeedback = require('./MotionManagerActionFeedback.js');

//-----------------------------------------------------------

class MotionManagerAction {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action_goal = null;
      this.action_result = null;
      this.action_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('action_goal')) {
        this.action_goal = initObj.action_goal
      }
      else {
        this.action_goal = new MotionManagerActionGoal();
      }
      if (initObj.hasOwnProperty('action_result')) {
        this.action_result = initObj.action_result
      }
      else {
        this.action_result = new MotionManagerActionResult();
      }
      if (initObj.hasOwnProperty('action_feedback')) {
        this.action_feedback = initObj.action_feedback
      }
      else {
        this.action_feedback = new MotionManagerActionFeedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotionManagerAction
    // Serialize message field [action_goal]
    bufferOffset = MotionManagerActionGoal.serialize(obj.action_goal, buffer, bufferOffset);
    // Serialize message field [action_result]
    bufferOffset = MotionManagerActionResult.serialize(obj.action_result, buffer, bufferOffset);
    // Serialize message field [action_feedback]
    bufferOffset = MotionManagerActionFeedback.serialize(obj.action_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotionManagerAction
    let len;
    let data = new MotionManagerAction(null);
    // Deserialize message field [action_goal]
    data.action_goal = MotionManagerActionGoal.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_result]
    data.action_result = MotionManagerActionResult.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_feedback]
    data.action_feedback = MotionManagerActionFeedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += MotionManagerActionGoal.getMessageSize(object.action_goal);
    length += MotionManagerActionResult.getMessageSize(object.action_result);
    length += MotionManagerActionFeedback.getMessageSize(object.action_feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'pal_control_msgs/MotionManagerAction';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '42689d3bf9c1135e4da2202787f92626';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    MotionManagerActionGoal action_goal
    MotionManagerActionResult action_result
    MotionManagerActionFeedback action_feedback
    
    ================================================================================
    MSG: pal_control_msgs/MotionManagerActionGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    MotionManagerGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: pal_control_msgs/MotionManagerGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Path to XML file containing motions for the robot
    string filename
    
    # True if a collision-free approach motion and trajectory validation are to be performed.
    # If set to true but an approach motion is not required, it will not be computed.
    bool plan
    
    #True if safety around the robot must be checked using sensors such as the sonars and lasers
    bool checkSafety
    
    #True if the motion must be repeated until a new goal has been received
    bool repeat
    
    #priority of the motion, 0 is no priority, 100 is max priority
    uint8 priority
    
    #Specifies how long in miliseconds should the goal wait before forcing an execution. If a movement is being executed when the goal is received, it will wait the specified time or until the movement finishes to execute it.
    # -1 Means wait forever until the previous movement has finished
    int32 queueTimeout 
    
    
    ================================================================================
    MSG: pal_control_msgs/MotionManagerActionResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    MotionManagerResult result
    
    ================================================================================
    MSG: actionlib_msgs/GoalStatus
    GoalID goal_id
    uint8 status
    uint8 PENDING         = 0   # The goal has yet to be processed by the action server
    uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
    uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                                #   and has since completed its execution (Terminal State)
    uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
    uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                                #    to some failure (Terminal State)
    uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                                #    because the goal was unattainable or invalid (Terminal State)
    uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                                #    and has not yet completed execution
    uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                                #    but the action server has not yet confirmed that the goal is canceled
    uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                                #    and was successfully cancelled (Terminal State)
    uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                                #    sent over the wire by an action server
    
    #Allow for the user to associate a string with GoalStatus for debugging
    string text
    
    
    ================================================================================
    MSG: pal_control_msgs/MotionManagerResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #Message in result, can contain information if goal failed
    string message
    
    ================================================================================
    MSG: pal_control_msgs/MotionManagerActionFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    MotionManagerFeedback feedback
    
    ================================================================================
    MSG: pal_control_msgs/MotionManagerFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # feedback message
    # no feedback for the moment. could be progress, or final position
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MotionManagerAction(null);
    if (msg.action_goal !== undefined) {
      resolved.action_goal = MotionManagerActionGoal.Resolve(msg.action_goal)
    }
    else {
      resolved.action_goal = new MotionManagerActionGoal()
    }

    if (msg.action_result !== undefined) {
      resolved.action_result = MotionManagerActionResult.Resolve(msg.action_result)
    }
    else {
      resolved.action_result = new MotionManagerActionResult()
    }

    if (msg.action_feedback !== undefined) {
      resolved.action_feedback = MotionManagerActionFeedback.Resolve(msg.action_feedback)
    }
    else {
      resolved.action_feedback = new MotionManagerActionFeedback()
    }

    return resolved;
    }
};

module.exports = MotionManagerAction;
