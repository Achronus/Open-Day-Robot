// Generated by gencpp from file dynamic_introspection/BoolParameter.msg
// DO NOT EDIT!


#ifndef DYNAMIC_INTROSPECTION_MESSAGE_BOOLPARAMETER_H
#define DYNAMIC_INTROSPECTION_MESSAGE_BOOLPARAMETER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamic_introspection
{
template <class ContainerAllocator>
struct BoolParameter_
{
  typedef BoolParameter_<ContainerAllocator> Type;

  BoolParameter_()
    : name()
    , value(false)  {
    }
  BoolParameter_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::dynamic_introspection::BoolParameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_introspection::BoolParameter_<ContainerAllocator> const> ConstPtr;

}; // struct BoolParameter_

typedef ::dynamic_introspection::BoolParameter_<std::allocator<void> > BoolParameter;

typedef boost::shared_ptr< ::dynamic_introspection::BoolParameter > BoolParameterPtr;
typedef boost::shared_ptr< ::dynamic_introspection::BoolParameter const> BoolParameterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_introspection::BoolParameter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamic_introspection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'dynamic_introspection': ['/home/lewis/tiago_openday_ws/src/dynamic_introspection/msg'], 'visualization_msgs': ['/opt/ros/melodic/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_introspection::BoolParameter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_introspection::BoolParameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_introspection::BoolParameter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23f05028c1a699fb83e22401228c3a9e";
  }

  static const char* value(const ::dynamic_introspection::BoolParameter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23f05028c1a699fbULL;
  static const uint64_t static_value2 = 0x83e22401228c3a9eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_introspection/BoolParameter";
  }

  static const char* value(const ::dynamic_introspection::BoolParameter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"bool value\n"
;
  }

  static const char* value(const ::dynamic_introspection::BoolParameter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoolParameter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_introspection::BoolParameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_introspection::BoolParameter_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_INTROSPECTION_MESSAGE_BOOLPARAMETER_H
