// Generated by gencpp from file pal_visual_localization_msgs/VisualLocRecognizeFeedback.msg
// DO NOT EDIT!


#ifndef PAL_VISUAL_LOCALIZATION_MSGS_MESSAGE_VISUALLOCRECOGNIZEFEEDBACK_H
#define PAL_VISUAL_LOCALIZATION_MSGS_MESSAGE_VISUALLOCRECOGNIZEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_visual_localization_msgs
{
template <class ContainerAllocator>
struct VisualLocRecognizeFeedback_
{
  typedef VisualLocRecognizeFeedback_<ContainerAllocator> Type;

  VisualLocRecognizeFeedback_()
    {
    }
  VisualLocRecognizeFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct VisualLocRecognizeFeedback_

typedef ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<std::allocator<void> > VisualLocRecognizeFeedback;

typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback > VisualLocRecognizeFeedbackPtr;
typedef boost::shared_ptr< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback const> VisualLocRecognizeFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_visual_localization_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'pal_visual_localization_msgs': ['/home/lewis/tiago_openday_ws/devel/.private/pal_visual_localization_msgs/share/pal_visual_localization_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_visual_localization_msgs/VisualLocRecognizeFeedback";
  }

  static const char* value(const ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"\n"
"\n"
"\n"
;
  }

  static const char* value(const ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VisualLocRecognizeFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_visual_localization_msgs::VisualLocRecognizeFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISUAL_LOCALIZATION_MSGS_MESSAGE_VISUALLOCRECOGNIZEFEEDBACK_H
