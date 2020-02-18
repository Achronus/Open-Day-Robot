// Generated by gencpp from file pal_behaviour_msgs/BehaviourTaskGoal.msg
// DO NOT EDIT!


#ifndef PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURTASKGOAL_H
#define PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURTASKGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_behaviour_msgs/BehaviourArgument.h>

namespace pal_behaviour_msgs
{
template <class ContainerAllocator>
struct BehaviourTaskGoal_
{
  typedef BehaviourTaskGoal_<ContainerAllocator> Type;

  BehaviourTaskGoal_()
    : taskName()
    , arguments()  {
    }
  BehaviourTaskGoal_(const ContainerAllocator& _alloc)
    : taskName(_alloc)
    , arguments(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _taskName_type;
  _taskName_type taskName;

   typedef std::vector< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >::other >  _arguments_type;
  _arguments_type arguments;





  typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> const> ConstPtr;

}; // struct BehaviourTaskGoal_

typedef ::pal_behaviour_msgs::BehaviourTaskGoal_<std::allocator<void> > BehaviourTaskGoal;

typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskGoal > BehaviourTaskGoalPtr;
typedef boost::shared_ptr< ::pal_behaviour_msgs::BehaviourTaskGoal const> BehaviourTaskGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_behaviour_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pal_behaviour_msgs': ['/home/lewis/tiago_openday_ws/devel/.private/pal_behaviour_msgs/share/pal_behaviour_msgs/msg', '/home/lewis/tiago_openday_ws/src/pal_msgs/pal_behaviour_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f29a8a8019064c8a1f3f3dbe3effeb54";
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf29a8a8019064c8aULL;
  static const uint64_t static_value2 = 0x1f3f3dbe3effeb54ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_behaviour_msgs/BehaviourTaskGoal";
  }

  static const char* value(const ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
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

  static const char* value(const ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.taskName);
      stream.next(m.arguments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BehaviourTaskGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_behaviour_msgs::BehaviourTaskGoal_<ContainerAllocator>& v)
  {
    s << indent << "taskName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.taskName);
    s << indent << "arguments[]" << std::endl;
    for (size_t i = 0; i < v.arguments.size(); ++i)
    {
      s << indent << "  arguments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pal_behaviour_msgs::BehaviourArgument_<ContainerAllocator> >::stream(s, indent + "    ", v.arguments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_BEHAVIOUR_MSGS_MESSAGE_BEHAVIOURTASKGOAL_H