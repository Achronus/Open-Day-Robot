# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_motion_model_msgs/GetMotionMapRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetMotionMapRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "pal_motion_model_msgs/GetMotionMapRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetMotionMapRequest, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_motion_model_msgs/GetMotionMapResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import nav_msgs.msg
import genpy
import pal_motion_model_msgs.msg
import std_msgs.msg

class GetMotionMapResponse(genpy.Message):
  _md5sum = "ff508f86b1d484eed7ca1c596036d1bf"
  _type = "pal_motion_model_msgs/GetMotionMapResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """pal_motion_model_msgs/MotionModelMap map


================================================================================
MSG: pal_motion_model_msgs/MotionModelMap
#This represents a 2-D motion model map, in which each cell has the probabilistic motion models for the robot.

Header header 

#MetaData for the map
nav_msgs/MapMetaData info

# The map data, in row-major order, starting with (0,0). A list of  models is stored for every cell. 
MotionModelList[] data


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: nav_msgs/MapMetaData
# This hold basic information about the characterists of the OccupancyGrid

# The time at which the map was loaded
time map_load_time
# The map resolution [m/cell]
float32 resolution
# Map width [cells]
uint32 width
# Map height [cells]
uint32 height
# The origin of the map [m, m, rad].  This is the real-world pose of the
# cell (0,0) in the map.
geometry_msgs/Pose origin
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: pal_motion_model_msgs/MotionModelList
#list of motion models learnt in a specific place

MotionModel[] models




================================================================================
MSG: pal_motion_model_msgs/MotionModel
## Contains the 2D motion model of a robot at a specific location

#Heading direction is represented through a gaussian pdf.
float32  heading_mean
float32  heading_std_dev

#For statistics we store a pdf over the robot speeds
float32  linear_speed_mean
float32  linear_speed_std_dev
float32  angular_speed_mean
float32  angular_speed_std_dev

"""
  __slots__ = ['map']
  _slot_types = ['pal_motion_model_msgs/MotionModelMap']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       map

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetMotionMapResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.map is None:
        self.map = pal_motion_model_msgs.msg.MotionModelMap()
    else:
      self.map = pal_motion_model_msgs.msg.MotionModelMap()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs))
      _x = self.map.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2If2I7d().pack(_x.map.info.map_load_time.secs, _x.map.info.map_load_time.nsecs, _x.map.info.resolution, _x.map.info.width, _x.map.info.height, _x.map.info.origin.position.x, _x.map.info.origin.position.y, _x.map.info.origin.position.z, _x.map.info.origin.orientation.x, _x.map.info.origin.orientation.y, _x.map.info.origin.orientation.z, _x.map.info.origin.orientation.w))
      length = len(self.map.data)
      buff.write(_struct_I.pack(length))
      for val1 in self.map.data:
        length = len(val1.models)
        buff.write(_struct_I.pack(length))
        for val2 in val1.models:
          _x = val2
          buff.write(_get_struct_6f().pack(_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.map is None:
        self.map = pal_motion_model_msgs.msg.MotionModelMap()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.map.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.map.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 76
      (_x.map.info.map_load_time.secs, _x.map.info.map_load_time.nsecs, _x.map.info.resolution, _x.map.info.width, _x.map.info.height, _x.map.info.origin.position.x, _x.map.info.origin.position.y, _x.map.info.origin.position.z, _x.map.info.origin.orientation.x, _x.map.info.origin.orientation.y, _x.map.info.origin.orientation.z, _x.map.info.origin.orientation.w,) = _get_struct_2If2I7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.map.data = []
      for i in range(0, length):
        val1 = pal_motion_model_msgs.msg.MotionModelList()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.models = []
        for i in range(0, length):
          val2 = pal_motion_model_msgs.msg.MotionModel()
          _x = val2
          start = end
          end += 24
          (_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev,) = _get_struct_6f().unpack(str[start:end])
          val1.models.append(val2)
        self.map.data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs))
      _x = self.map.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2If2I7d().pack(_x.map.info.map_load_time.secs, _x.map.info.map_load_time.nsecs, _x.map.info.resolution, _x.map.info.width, _x.map.info.height, _x.map.info.origin.position.x, _x.map.info.origin.position.y, _x.map.info.origin.position.z, _x.map.info.origin.orientation.x, _x.map.info.origin.orientation.y, _x.map.info.origin.orientation.z, _x.map.info.origin.orientation.w))
      length = len(self.map.data)
      buff.write(_struct_I.pack(length))
      for val1 in self.map.data:
        length = len(val1.models)
        buff.write(_struct_I.pack(length))
        for val2 in val1.models:
          _x = val2
          buff.write(_get_struct_6f().pack(_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.map is None:
        self.map = pal_motion_model_msgs.msg.MotionModelMap()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.map.header.seq, _x.map.header.stamp.secs, _x.map.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.map.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.map.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 76
      (_x.map.info.map_load_time.secs, _x.map.info.map_load_time.nsecs, _x.map.info.resolution, _x.map.info.width, _x.map.info.height, _x.map.info.origin.position.x, _x.map.info.origin.position.y, _x.map.info.origin.position.z, _x.map.info.origin.orientation.x, _x.map.info.origin.orientation.y, _x.map.info.origin.orientation.z, _x.map.info.origin.orientation.w,) = _get_struct_2If2I7d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.map.data = []
      for i in range(0, length):
        val1 = pal_motion_model_msgs.msg.MotionModelList()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.models = []
        for i in range(0, length):
          val2 = pal_motion_model_msgs.msg.MotionModel()
          _x = val2
          start = end
          end += 24
          (_x.heading_mean, _x.heading_std_dev, _x.linear_speed_mean, _x.linear_speed_std_dev, _x.angular_speed_mean, _x.angular_speed_std_dev,) = _get_struct_6f().unpack(str[start:end])
          val1.models.append(val2)
        self.map.data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_6f = None
def _get_struct_6f():
    global _struct_6f
    if _struct_6f is None:
        _struct_6f = struct.Struct("<6f")
    return _struct_6f
_struct_2If2I7d = None
def _get_struct_2If2I7d():
    global _struct_2If2I7d
    if _struct_2If2I7d is None:
        _struct_2If2I7d = struct.Struct("<2If2I7d")
    return _struct_2If2I7d
class GetMotionMap(object):
  _type          = 'pal_motion_model_msgs/GetMotionMap'
  _md5sum = 'ff508f86b1d484eed7ca1c596036d1bf'
  _request_class  = GetMotionMapRequest
  _response_class = GetMotionMapResponse
