; Auto-generated. Do not edit!


(cl:in-package pal_visual_localization_msgs-msg)


;//! \htmlinclude VisualLocAddPlaceFeedback.msg.html

(cl:defclass <VisualLocAddPlaceFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass VisualLocAddPlaceFeedback (<VisualLocAddPlaceFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VisualLocAddPlaceFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VisualLocAddPlaceFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pal_visual_localization_msgs-msg:<VisualLocAddPlaceFeedback> is deprecated: use pal_visual_localization_msgs-msg:VisualLocAddPlaceFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VisualLocAddPlaceFeedback>) ostream)
  "Serializes a message object of type '<VisualLocAddPlaceFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VisualLocAddPlaceFeedback>) istream)
  "Deserializes a message object of type '<VisualLocAddPlaceFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VisualLocAddPlaceFeedback>)))
  "Returns string type for a message object of type '<VisualLocAddPlaceFeedback>"
  "pal_visual_localization_msgs/VisualLocAddPlaceFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VisualLocAddPlaceFeedback)))
  "Returns string type for a message object of type 'VisualLocAddPlaceFeedback"
  "pal_visual_localization_msgs/VisualLocAddPlaceFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VisualLocAddPlaceFeedback>)))
  "Returns md5sum for a message object of type '<VisualLocAddPlaceFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VisualLocAddPlaceFeedback)))
  "Returns md5sum for a message object of type 'VisualLocAddPlaceFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VisualLocAddPlaceFeedback>)))
  "Returns full string definition for message of type '<VisualLocAddPlaceFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VisualLocAddPlaceFeedback)))
  "Returns full string definition for message of type 'VisualLocAddPlaceFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VisualLocAddPlaceFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VisualLocAddPlaceFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'VisualLocAddPlaceFeedback
))
