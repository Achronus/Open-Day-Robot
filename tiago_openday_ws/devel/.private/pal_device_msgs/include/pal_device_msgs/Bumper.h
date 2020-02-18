// Generated by gencpp from file pal_device_msgs/Bumper.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_BUMPER_H
#define PAL_DEVICE_MSGS_MESSAGE_BUMPER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pal_device_msgs
{
template <class ContainerAllocator>
struct Bumper_
{
  typedef Bumper_<ContainerAllocator> Type;

  Bumper_()
    : header()
    , is_pressed(false)  {
    }
  Bumper_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , is_pressed(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _is_pressed_type;
  _is_pressed_type is_pressed;





  typedef boost::shared_ptr< ::pal_device_msgs::Bumper_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::Bumper_<ContainerAllocator> const> ConstPtr;

}; // struct Bumper_

typedef ::pal_device_msgs::Bumper_<std::allocator<void> > Bumper;

typedef boost::shared_ptr< ::pal_device_msgs::Bumper > BumperPtr;
typedef boost::shared_ptr< ::pal_device_msgs::Bumper const> BumperConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::Bumper_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::Bumper_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'pal_device_msgs': ['/home/lewis/tiago_openday_ws/src/pal_msgs/pal_device_msgs/msg', '/home/lewis/tiago_openday_ws/devel/.private/pal_device_msgs/share/pal_device_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::Bumper_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::Bumper_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::Bumper_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::Bumper_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::Bumper_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::Bumper_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::Bumper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7feed261fab09e5d0ce6318f9f9ed4b9";
  }

  static const char* value(const ::pal_device_msgs::Bumper_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7feed261fab09e5dULL;
  static const uint64_t static_value2 = 0x0ce6318f9f9ed4b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::Bumper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/Bumper";
  }

  static const char* value(const ::pal_device_msgs::Bumper_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::Bumper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#ROS header\n"
"Header header\n"
"\n"
"#Whether the bumper is being pressed\n"
"bool is_pressed\n"
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
;
  }

  static const char* value(const ::pal_device_msgs::Bumper_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::Bumper_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.is_pressed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Bumper_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::Bumper_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::Bumper_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "is_pressed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_pressed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_BUMPER_H
