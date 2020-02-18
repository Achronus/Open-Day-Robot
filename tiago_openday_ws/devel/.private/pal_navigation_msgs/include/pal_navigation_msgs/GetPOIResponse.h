// Generated by gencpp from file pal_navigation_msgs/GetPOIResponse.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_GETPOIRESPONSE_H
#define PAL_NAVIGATION_MSGS_MESSAGE_GETPOIRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_navigation_msgs/POI.h>

namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct GetPOIResponse_
{
  typedef GetPOIResponse_<ContainerAllocator> Type;

  GetPOIResponse_()
    : poi()  {
    }
  GetPOIResponse_(const ContainerAllocator& _alloc)
    : poi(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_navigation_msgs::POI_<ContainerAllocator>  _poi_type;
  _poi_type poi;





  typedef boost::shared_ptr< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPOIResponse_

typedef ::pal_navigation_msgs::GetPOIResponse_<std::allocator<void> > GetPOIResponse;

typedef boost::shared_ptr< ::pal_navigation_msgs::GetPOIResponse > GetPOIResponsePtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::GetPOIResponse const> GetPOIResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'pal_navigation_msgs': ['/home/lewis/tiago_openday_ws/devel/.private/pal_navigation_msgs/share/pal_navigation_msgs/msg', '/home/lewis/tiago_openday_ws/src/pal_msgs/pal_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f0a8811f1068c7b1269d9e58c608681f";
  }

  static const char* value(const ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf0a8811f1068c7b1ULL;
  static const uint64_t static_value2 = 0x269d9e58c608681fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/GetPOIResponse";
  }

  static const char* value(const ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"pal_navigation_msgs/POI   poi\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_navigation_msgs/POI\n"
"# Poi (Point of interest)\n"
"\n"
"sensor_msgs/PointCloud points\n"
"\n"
"std_msgs/String[]      ids\n"
"\n"
"std_msgs/String        map_id\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointCloud\n"
"# This message holds a collection of 3d points, plus optional additional\n"
"# information about each point.\n"
"\n"
"# Time of sensor data acquisition, coordinate frame ID.\n"
"Header header\n"
"\n"
"# Array of 3d points. Each Point32 should be interpreted as a 3d point\n"
"# in the frame given in the header.\n"
"geometry_msgs/Point32[] points\n"
"\n"
"# Each channel should have the same number of elements as points array,\n"
"# and the data in each channel should correspond 1:1 with each point.\n"
"# Channel names in common practice are listed in ChannelFloat32.msg.\n"
"ChannelFloat32[] channels\n"
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
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: sensor_msgs/ChannelFloat32\n"
"# This message is used by the PointCloud message to hold optional data\n"
"# associated with each point in the cloud. The length of the values\n"
"# array should be the same as the length of the points array in the\n"
"# PointCloud, and each value should be associated with the corresponding\n"
"# point.\n"
"\n"
"# Channel names in existing practice include:\n"
"#   \"u\", \"v\" - row and column (respectively) in the left stereo image.\n"
"#              This is opposite to usual conventions but remains for\n"
"#              historical reasons. The newer PointCloud2 message has no\n"
"#              such problem.\n"
"#   \"rgb\" - For point clouds produced by color stereo cameras. uint8\n"
"#           (R,G,B) values packed into the least significant 24 bits,\n"
"#           in order.\n"
"#   \"intensity\" - laser or pixel intensity.\n"
"#   \"distance\"\n"
"\n"
"# The channel name should give semantics of the channel (e.g.\n"
"# \"intensity\" instead of \"value\").\n"
"string name\n"
"\n"
"# The values array should be 1-1 with the elements of the associated\n"
"# PointCloud.\n"
"float32[] values\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPOIResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::GetPOIResponse_<ContainerAllocator>& v)
  {
    s << indent << "poi: ";
    s << std::endl;
    Printer< ::pal_navigation_msgs::POI_<ContainerAllocator> >::stream(s, indent + "  ", v.poi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_GETPOIRESPONSE_H
