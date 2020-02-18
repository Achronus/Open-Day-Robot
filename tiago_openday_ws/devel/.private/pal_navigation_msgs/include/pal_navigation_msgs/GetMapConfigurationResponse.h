// Generated by gencpp from file pal_navigation_msgs/GetMapConfigurationResponse.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_GETMAPCONFIGURATIONRESPONSE_H
#define PAL_NAVIGATION_MSGS_MESSAGE_GETMAPCONFIGURATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_navigation_msgs/MapConfiguration.h>

namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct GetMapConfigurationResponse_
{
  typedef GetMapConfigurationResponse_<ContainerAllocator> Type;

  GetMapConfigurationResponse_()
    : map_config()  {
    }
  GetMapConfigurationResponse_(const ContainerAllocator& _alloc)
    : map_config(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_navigation_msgs::MapConfiguration_<ContainerAllocator>  _map_config_type;
  _map_config_type map_config;





  typedef boost::shared_ptr< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapConfigurationResponse_

typedef ::pal_navigation_msgs::GetMapConfigurationResponse_<std::allocator<void> > GetMapConfigurationResponse;

typedef boost::shared_ptr< ::pal_navigation_msgs::GetMapConfigurationResponse > GetMapConfigurationResponsePtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::GetMapConfigurationResponse const> GetMapConfigurationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03fc2970c7709c1aa00a0077b9478e6f";
  }

  static const char* value(const ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03fc2970c7709c1aULL;
  static const uint64_t static_value2 = 0xa00a0077b9478e6fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/GetMapConfigurationResponse";
  }

  static const char* value(const ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/MapConfiguration   map_config\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pal_navigation_msgs/MapConfiguration\n"
"#Configuration of a map\n"
"int32 numberOfSubMaps\n"
"\n"
"#Points of interest of the map\n"
"pal_navigation_msgs/POI pois\n"
"\n"
"#Virtual obstacles of the map\n"
"pal_navigation_msgs/POI vo\n"
"\n"
"\n"
"#Zones of interest of the map\n"
"pal_navigation_msgs/POI zoi\n"
"\n"
"pal_navigation_msgs/VisualLocDB visualLocDb\n"
"\n"
"#Real (ugly) map \n"
"nav_msgs/OccupancyGrid navigation_map\n"
"\n"
"#Pretty map\n"
"sensor_msgs/Image user_map\n"
"\n"
"# Deprecated, now the user_map must be transformed to match the scale/\n"
"# orientation of the navigation_map\n"
"#Transformation between ugly and pretty map\n"
"pal_navigation_msgs/NiceMapTransformation transform\n"
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
"\n"
"================================================================================\n"
"MSG: pal_navigation_msgs/VisualLocDB\n"
"#Contents of the 3 binary files that contain the visual localization DB\n"
"\n"
"uint8[] documents\n"
"uint8[] tree\n"
"uint8[] weights\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/OccupancyGrid\n"
"# This represents a 2-D grid map, in which each cell represents the probability of\n"
"# occupancy.\n"
"\n"
"Header header \n"
"\n"
"#MetaData for the map\n"
"MapMetaData info\n"
"\n"
"# The map data, in row-major order, starting with (0,0).  Occupancy\n"
"# probabilities are in the range [0,100].  Unknown is -1.\n"
"int8[] data\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/MapMetaData\n"
"# This hold basic information about the characterists of the OccupancyGrid\n"
"\n"
"# The time at which the map was loaded\n"
"time map_load_time\n"
"# The map resolution [m/cell]\n"
"float32 resolution\n"
"# Map width [cells]\n"
"uint32 width\n"
"# Map height [cells]\n"
"uint32 height\n"
"# The origin of the map [m, m, rad].  This is the real-world pose of the\n"
"# cell (0,0) in the map.\n"
"geometry_msgs/Pose origin\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: pal_navigation_msgs/NiceMapTransformation\n"
"float64 x \n"
"float64 y\n"
"float64 rotYawRad # Yaw rotation in rads\n"
"float64 scale\n"
"\n"
;
  }

  static const char* value(const ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map_config);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapConfigurationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::GetMapConfigurationResponse_<ContainerAllocator>& v)
  {
    s << indent << "map_config: ";
    s << std::endl;
    Printer< ::pal_navigation_msgs::MapConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.map_config);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_GETMAPCONFIGURATIONRESPONSE_H
