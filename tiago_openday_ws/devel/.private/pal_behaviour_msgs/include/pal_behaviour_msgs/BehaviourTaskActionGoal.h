// Generated by gencpp from file pal_behaviour_msgs/BehaviourTaskActionGoal.msg
// DO NOT EDIT!


#ifndef PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURTASKACTIONGOAL_H
#define PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURTASKACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <pal_behaviour_msgs/BehaviourTaskGoal.h>

namespace pal_behaviour_msgs
{
template <class ContainerAllocator>
struct BehaviourTaskActionGoal_
{
  typedef BehaviourTaskActionGoal_<ContainerAllocator> Type;

  BehaviourTaskActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  BehaviourTaskActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviourTaskActionGoal_

typedef ::pal_behaviour_msgs::BehaviourTaskActionGoal_<std::allocator<void> > BehaviourTaskActionGoal;

typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskActionGoal > BehaviourTaskActionGoalPtr;
typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskActionGoal const> BehaviourTaskActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_behaviour_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pal_behaviour_msgs': ['/home/lewis/tiago_openday_ws/devel/.private/pal_behaviour_msgs/share/pal_behaviour_msgs/msg', '/home/lewis/tiago_openday_ws/src/pal_msgs/pal_behaviour_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9133f67f0b62bc067b5b8c68d3981686";
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9133f67f0b62bc06ULL;
  static const uint64_t static_value2 = 0x7b5b8c68d3981686ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_behaviour_msgs/BehaviourTaskActionGoal";
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"BehaviourTaskGoal goal\n"
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
"MSG: pal_behaviour_msgs/BehaviourTaskGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Example usage in axclient:\n"
"#   taskName: 'presentation'\n"
"#   arguments: [{key: 'path', \n"
"#   value: 'interaction/touchscreen/presentations/autoPresentation.presentation'}]\n"
"#\n"
"string taskName\n"
"pal_behaviour_msgs/BehaviourArgument[] arguments\n"
"\n"
"================================================================================\n"
"MSG: pal_behaviour_msgs/BehaviourArgument\n"
"## SMC event\n"
"\n"
"#Header header\n"
"\n"
"string           key\n"
"string           value\n"
"\n"
;
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviourTaskActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_behaviour_msgs::BehaviourTaskActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURTASKACTIONGOAL_H
