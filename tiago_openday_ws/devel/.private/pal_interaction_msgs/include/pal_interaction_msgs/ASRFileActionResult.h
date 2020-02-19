// Generated by gencpp from file pal_interaction_msgs/ASRFileActionResult.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_ASRFILEACTIONRESULT_H
#define PAL_INTERACTION_MSGS_MESSAGE_ASRFILEACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <pal_interaction_msgs/ASRFileResult.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct ASRFileActionResult_
{
  typedef ASRFileActionResult_<ContainerAllocator> Type;

  ASRFileActionResult_()
    : header()
    , status()
    , result()  {
    }
  ASRFileActionResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , result(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::pal_interaction_msgs::ASRFileResult_<ContainerAllocator>  _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct ASRFileActionResult_

typedef ::pal_interaction_msgs::ASRFileActionResult_<std::allocator<void> > ASRFileActionResult;

typedef boost::shared_ptr< ::pal_interaction_msgs::ASRFileActionResult > ASRFileActionResultPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::ASRFileActionResult const> ASRFileActionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'pal_interaction_msgs': ['/home/lewis/tiago_openday_ws/src/pal_msgs/pal_interaction_msgs/msg', '/home/lewis/tiago_openday_ws/devel/.private/pal_interaction_msgs/share/pal_interaction_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d81072169f81a7734640dee69c1517f5";
  }

  static const char* value(const ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd81072169f81a773ULL;
  static const uint64_t static_value2 = 0x4640dee69c1517f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/ASRFileActionResult";
  }

  static const char* value(const ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"ASRFileResult result\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/ASRFileResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##result definition\n"
"# same path as specified in goal variable file\n"
"string file\n"
"# error/warning messages \n"
"string msg\n"
"# vector of results\n"
"asrresult[] recognised_utterances\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/asrresult\n"
"## Message that containes the recognized utterance.\n"
"## Confidence values\n"
"int8 CONFIDENCE_UNDEFINED = -1\n"
"int8 CONFIDENCE_POOR = 1\n"
"int8 CONFIDENCE_LOW  = 2\n"
"int8 CONFIDENCE_GOOD = 3\n"
"int8 CONFIDENCE_MAX  = 4\n"
"\n"
"# ASR result messages used by RosRecognizerServer\n"
"\n"
"# text recognized\n"
"string text\n"
"\n"
"# confidence with values from POOR to MAX\n"
"int8 confidence\n"
"\n"
"# start and end of the recognizer uterance.\n"
"time start\n"
"time end\n"
"\n"
"# list of recognized tags\n"
"# key value pairs of strings extracted from the text\n"
"# given the action tags placed in the grammar.\n"
"actiontag[] tags\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/actiontag\n"
"# Action tag contaings the key/value information genertated by parsing the recognised text with a JSGF grammar \n"
"\n"
"string key\n"
"string value\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ASRFileActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::ASRFileActionResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "result: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::ASRFileResult_<ContainerAllocator> >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_ASRFILEACTIONRESULT_H
