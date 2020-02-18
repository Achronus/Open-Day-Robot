// Generated by gencpp from file pal_walking_msgs/ContactState.msg
// DO NOT EDIT!


#ifndef PAL_WALKING_MSGS_MESSAGE_CONTACTSTATE_H
#define PAL_WALKING_MSGS_MESSAGE_CONTACTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_walking_msgs
{
template <class ContainerAllocator>
struct ContactState_
{
  typedef ContactState_<ContainerAllocator> Type;

  ContactState_()
    : type(0)  {
    }
  ContactState_(const ContainerAllocator& _alloc)
    : type(0)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;



  enum {
    TYPE_DS = 0u,
    TYPE_LSS = 1u,
    TYPE_RSS = 2u,
  };


  typedef boost::shared_ptr< ::pal_walking_msgs::ContactState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_walking_msgs::ContactState_<ContainerAllocator> const> ConstPtr;

}; // struct ContactState_

typedef ::pal_walking_msgs::ContactState_<std::allocator<void> > ContactState;

typedef boost::shared_ptr< ::pal_walking_msgs::ContactState > ContactStatePtr;
typedef boost::shared_ptr< ::pal_walking_msgs::ContactState const> ContactStateConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_walking_msgs::ContactState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_walking_msgs::ContactState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_walking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'pal_walking_msgs': ['/home/lewis/tiago_openday_ws/src/pal_msgs/pal_walking_msgs/msg'], 'humanoid_nav_msgs': ['/home/lewis/tiago_openday_ws/src/humanoid_msgs/humanoid_nav_msgs/msg', '/home/lewis/tiago_openday_ws/devel/.private/humanoid_nav_msgs/share/humanoid_nav_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::ContactState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::ContactState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::ContactState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "62c8194a0947d63a7094b91a2e31813f";
  }

  static const char* value(const ::pal_walking_msgs::ContactState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x62c8194a0947d63aULL;
  static const uint64_t static_value2 = 0x7094b91a2e31813fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_walking_msgs/ContactState";
  }

  static const char* value(const ::pal_walking_msgs::ContactState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 TYPE_DS=0\n"
"uint8 TYPE_LSS=1\n"
"uint8 TYPE_RSS=2\n"
"uint8 type\n"
;
  }

  static const char* value(const ::pal_walking_msgs::ContactState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContactState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_walking_msgs::ContactState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_walking_msgs::ContactState_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WALKING_MSGS_MESSAGE_CONTACTSTATE_H
