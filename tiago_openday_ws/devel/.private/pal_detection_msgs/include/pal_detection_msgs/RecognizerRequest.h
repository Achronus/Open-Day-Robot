// Generated by gencpp from file pal_detection_msgs/RecognizerRequest.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_RECOGNIZERREQUEST_H
#define PAL_DETECTION_MSGS_MESSAGE_RECOGNIZERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct RecognizerRequest_
{
  typedef RecognizerRequest_<ContainerAllocator> Type;

  RecognizerRequest_()
    : enabled(false)
    , minConfidence(0.0)  {
    }
  RecognizerRequest_(const ContainerAllocator& _alloc)
    : enabled(false)
    , minConfidence(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _enabled_type;
  _enabled_type enabled;

   typedef float _minConfidence_type;
  _minConfidence_type minConfidence;





  typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizerRequest_

typedef ::pal_detection_msgs::RecognizerRequest_<std::allocator<void> > RecognizerRequest;

typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerRequest > RecognizerRequestPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::RecognizerRequest const> RecognizerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'pal_detection_msgs': ['/home/lewis/tiago_openday_ws/src/pal_msgs/pal_detection_msgs/msg', '/home/lewis/tiago_openday_ws/devel/.private/pal_detection_msgs/share/pal_detection_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1988e71091b2db6d28fdeea96cff5fb1";
  }

  static const char* value(const ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1988e71091b2db6dULL;
  static const uint64_t static_value2 = 0x28fdeea96cff5fb1ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/RecognizerRequest";
  }

  static const char* value(const ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enabled\n"
"float32 minConfidence\n"
;
  }

  static const char* value(const ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enabled);
      stream.next(m.minConfidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::RecognizerRequest_<ContainerAllocator>& v)
  {
    s << indent << "enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enabled);
    s << indent << "minConfidence: ";
    Printer<float>::stream(s, indent + "  ", v.minConfidence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_RECOGNIZERREQUEST_H
