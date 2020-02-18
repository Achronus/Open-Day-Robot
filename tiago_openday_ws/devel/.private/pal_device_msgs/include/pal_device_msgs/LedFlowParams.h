// Generated by gencpp from file pal_device_msgs/LedFlowParams.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_LEDFLOWPARAMS_H
#define PAL_DEVICE_MSGS_MESSAGE_LEDFLOWPARAMS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace pal_device_msgs
{
template <class ContainerAllocator>
struct LedFlowParams_
{
  typedef LedFlowParams_<ContainerAllocator> Type;

  LedFlowParams_()
    : first_color()
    , second_color()
    , percentage(0.0)
    , velocity(0.0)  {
    }
  LedFlowParams_(const ContainerAllocator& _alloc)
    : first_color(_alloc)
    , second_color(_alloc)
    , percentage(0.0)
    , velocity(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _first_color_type;
  _first_color_type first_color;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _second_color_type;
  _second_color_type second_color;

   typedef float _percentage_type;
  _percentage_type percentage;

   typedef float _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> const> ConstPtr;

}; // struct LedFlowParams_

typedef ::pal_device_msgs::LedFlowParams_<std::allocator<void> > LedFlowParams;

typedef boost::shared_ptr< ::pal_device_msgs::LedFlowParams > LedFlowParamsPtr;
typedef boost::shared_ptr< ::pal_device_msgs::LedFlowParams const> LedFlowParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::LedFlowParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'pal_device_msgs': ['/home/lewis/tiago_openday_ws/src/pal_msgs/pal_device_msgs/msg', '/home/lewis/tiago_openday_ws/devel/.private/pal_device_msgs/share/pal_device_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21979ceeb94ec6f60e9114651282150e";
  }

  static const char* value(const ::pal_device_msgs::LedFlowParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21979ceeb94ec6f6ULL;
  static const uint64_t static_value2 = 0x0e9114651282150eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/LedFlowParams";
  }

  static const char* value(const ::pal_device_msgs::LedFlowParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RGBA of color, alpha will be used as intensity if supported by the led\n"
"std_msgs/ColorRGBA first_color\n"
"std_msgs/ColorRGBA second_color\n"
"\n"
"# Percentage of pixels painted with the first color\n"
"float32 percentage\n"
"# Flow velocity\n"
"float32 velocity\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::pal_device_msgs::LedFlowParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.first_color);
      stream.next(m.second_color);
      stream.next(m.percentage);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LedFlowParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::LedFlowParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::LedFlowParams_<ContainerAllocator>& v)
  {
    s << indent << "first_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.first_color);
    s << indent << "second_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.second_color);
    s << indent << "percentage: ";
    Printer<float>::stream(s, indent + "  ", v.percentage);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_LEDFLOWPARAMS_H
