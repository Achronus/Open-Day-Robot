// Generated by gencpp from file pal_interaction_msgs/ASRStatus.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_ASRSTATUS_H
#define PAL_INTERACTION_MSGS_MESSAGE_ASRSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_interaction_msgs/AudioDeviceDescription.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct ASRStatus_
{
  typedef ASRStatus_<ContainerAllocator> Type;

  ASRStatus_()
    : active(false)
    , language()
    , enabled_grammar()
    , acoustic_env()
    , device()  {
    }
  ASRStatus_(const ContainerAllocator& _alloc)
    : active(false)
    , language(_alloc)
    , enabled_grammar(_alloc)
    , acoustic_env(_alloc)
    , device(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _active_type;
  _active_type active;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _language_type;
  _language_type language;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _enabled_grammar_type;
  _enabled_grammar_type enabled_grammar;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _acoustic_env_type;
  _acoustic_env_type acoustic_env;

   typedef  ::pal_interaction_msgs::AudioDeviceDescription_<ContainerAllocator>  _device_type;
  _device_type device;





  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ASRStatus_

typedef ::pal_interaction_msgs::ASRStatus_<std::allocator<void> > ASRStatus;

typedef boost::shared_ptr< ::pal_interaction_msgs::ASRStatus > ASRStatusPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::ASRStatus const> ASRStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'pal_interaction_msgs': ['/home/lewis/tiago_openday_ws/src/pal_msgs/pal_interaction_msgs/msg', '/home/lewis/tiago_openday_ws/devel/.private/pal_interaction_msgs/share/pal_interaction_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b05e32d6465a052804ec3f6d853dbe61";
  }

  static const char* value(const ::pal_interaction_msgs::ASRStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb05e32d6465a0528ULL;
  static const uint64_t static_value2 = 0x04ec3f6d853dbe61ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/ASRStatus";
  }

  static const char* value(const ::pal_interaction_msgs::ASRStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The status of the ASR\n"
"# if it is active then active=true\n"
"bool active\n"
"\n"
"# the current language \n"
"string language\n"
"\n"
"# the current enabled grammar\n"
"string enabled_grammar\n"
"\n"
"# the current acoustic models\n"
"string acoustic_env\n"
"\n"
"# A description of the audio device the \n"
"# recognizer is taking audio from.\n"
"AudioDeviceDescription device\n"
"\n"
"================================================================================\n"
"MSG: pal_interaction_msgs/AudioDeviceDescription\n"
"# Description of an audio device.\n"
"\n"
"int8 SIGNED = 0\n"
"int8 UNSIGNED = 1\n"
"\n"
"\n"
"# name of the device (usually a portaudio name)\n"
"string device_name\n"
"\n"
"# sample rate of the acquired audio signal\n"
"uint32 sample_rate\n"
"\n"
"# sample size in bits\n"
"int8 sample_size\n"
"\n"
"# format can be SIGNED or UNSIGNED\n"
"int8 format\n"
"\n"
"# buffer size used to acquire data.\n"
"uint16 buffer_size\n"
"\n"
"# number of recorded channels\n"
"int8 number_of_channels\n"
;
  }

  static const char* value(const ::pal_interaction_msgs::ASRStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.active);
      stream.next(m.language);
      stream.next(m.enabled_grammar);
      stream.next(m.acoustic_env);
      stream.next(m.device);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ASRStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::ASRStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::ASRStatus_<ContainerAllocator>& v)
  {
    s << indent << "active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active);
    s << indent << "language: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.language);
    s << indent << "enabled_grammar: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.enabled_grammar);
    s << indent << "acoustic_env: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.acoustic_env);
    s << indent << "device: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::AudioDeviceDescription_<ContainerAllocator> >::stream(s, indent + "  ", v.device);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_ASRSTATUS_H
