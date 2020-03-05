// Generated by gencpp from file people_msgs/Person.msg
// DO NOT EDIT!


#ifndef PEOPLE_MSGS_MESSAGE_PERSON_H
#define PEOPLE_MSGS_MESSAGE_PERSON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace people_msgs
{
template <class ContainerAllocator>
struct Person_
{
  typedef Person_<ContainerAllocator> Type;

  Person_()
    : name()
    , position()
    , velocity()
    , reliability(0.0)
    , tagnames()
    , tags()  {
    }
  Person_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , position(_alloc)
    , velocity(_alloc)
    , reliability(0.0)
    , tagnames(_alloc)
    , tags(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef double _reliability_type;
  _reliability_type reliability;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _tagnames_type;
  _tagnames_type tagnames;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _tags_type;
  _tags_type tags;





  typedef boost::shared_ptr< ::people_msgs::Person_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::people_msgs::Person_<ContainerAllocator> const> ConstPtr;

}; // struct Person_

typedef ::people_msgs::Person_<std::allocator<void> > Person;

typedef boost::shared_ptr< ::people_msgs::Person > PersonPtr;
typedef boost::shared_ptr< ::people_msgs::Person const> PersonConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::people_msgs::Person_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::people_msgs::Person_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace people_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'people_msgs': ['/home/lewis/tiago_openday_ws/src/people/people_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::Person_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::Person_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::Person_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::Person_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::Person_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::Person_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::people_msgs::Person_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b7c0818b76476f3863bd13f4d59f8df";
  }

  static const char* value(const ::people_msgs::Person_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b7c0818b76476f3ULL;
  static const uint64_t static_value2 = 0x863bd13f4d59f8dfULL;
};

template<class ContainerAllocator>
struct DataType< ::people_msgs::Person_<ContainerAllocator> >
{
  static const char* value()
  {
    return "people_msgs/Person";
  }

  static const char* value(const ::people_msgs::Person_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::people_msgs::Person_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string              name\n"
"geometry_msgs/Point position\n"
"geometry_msgs/Point velocity\n"
"float64             reliability\n"
"string[]            tagnames\n"
"string[]            tags\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::people_msgs::Person_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::people_msgs::Person_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.reliability);
      stream.next(m.tagnames);
      stream.next(m.tags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Person_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::people_msgs::Person_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::people_msgs::Person_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "reliability: ";
    Printer<double>::stream(s, indent + "  ", v.reliability);
    s << indent << "tagnames[]" << std::endl;
    for (size_t i = 0; i < v.tagnames.size(); ++i)
    {
      s << indent << "  tagnames[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tagnames[i]);
    }
    s << indent << "tags[]" << std::endl;
    for (size_t i = 0; i < v.tags.size(); ++i)
    {
      s << indent << "  tags[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tags[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEOPLE_MSGS_MESSAGE_PERSON_H