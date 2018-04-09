// Generated by gencpp from file yolov2_ros/YoloDetectResponse.msg
// DO NOT EDIT!


#ifndef YOLOV2_ROS_MESSAGE_YOLODETECTRESPONSE_H
#define YOLOV2_ROS_MESSAGE_YOLODETECTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <vision_msgs/Detection2DArray.h>

namespace yolov2_ros
{
template <class ContainerAllocator>
struct YoloDetectResponse_
{
  typedef YoloDetectResponse_<ContainerAllocator> Type;

  YoloDetectResponse_()
    : detection()  {
    }
  YoloDetectResponse_(const ContainerAllocator& _alloc)
    : detection(_alloc)  {
  (void)_alloc;
    }



   typedef  ::vision_msgs::Detection2DArray_<ContainerAllocator>  _detection_type;
  _detection_type detection;





  typedef boost::shared_ptr< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> const> ConstPtr;

}; // struct YoloDetectResponse_

typedef ::yolov2_ros::YoloDetectResponse_<std::allocator<void> > YoloDetectResponse;

typedef boost::shared_ptr< ::yolov2_ros::YoloDetectResponse > YoloDetectResponsePtr;
typedef boost::shared_ptr< ::yolov2_ros::YoloDetectResponse const> YoloDetectResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yolov2_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'vision_msgs': ['/home/diggerdata/catkin_wpirm/src/vision_msgs/msg'], 'yolov2_ros': ['/home/diggerdata/catkin_wpirm/src/yolov2_ros/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "63a2d9433b72458acbe38ed3a7c6e45a";
  }

  static const char* value(const ::yolov2_ros::YoloDetectResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x63a2d9433b72458aULL;
  static const uint64_t static_value2 = 0xcbe38ed3a7c6e45aULL;
};

template<class ContainerAllocator>
struct DataType< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yolov2_ros/YoloDetectResponse";
  }

  static const char* value(const ::yolov2_ros::YoloDetectResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_msgs/Detection2DArray detection\n\
\n\
================================================================================\n\
MSG: vision_msgs/Detection2DArray\n\
# A list of 2D detections, for a multi-object 2D detector.\n\
\n\
Header header\n\
\n\
# A list of the detected proposals. A multi-proposal detector might generate\n\
#   this list with many candidate detections generated from a single input.\n\
Detection2D[] detections\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: vision_msgs/Detection2D\n\
# Defines a 2D detection result.\n\
#\n\
# This is similar to a 2D classification, but includes position information,\n\
#   allowing a classification result for a specific crop or image point to\n\
#   to be located in the larger image.\n\
\n\
Header header\n\
\n\
# Class probabilities\n\
ObjectHypothesisWithPose[] results\n\
\n\
# 2D bounding box surrounding the object.\n\
BoundingBox2D bbox\n\
\n\
# The 2D data that generated these results (i.e. region proposal cropped out of\n\
#   the image). Not required for all use cases, so it may be empty.\n\
sensor_msgs/Image source_img\n\
\n\
================================================================================\n\
MSG: vision_msgs/ObjectHypothesisWithPose\n\
# An object hypothesis that contains position information.\n\
\n\
# The unique numeric ID of object detected. To get additional information about\n\
#   this ID, such as its human-readable name, listeners should perform a lookup\n\
#   in a metadata database. See vision_msgs/VisionInfo.msg for more detail.\n\
int64 id\n\
\n\
# The probability or confidence value of the detected object. By convention,\n\
#   this value should lie in the range [0-1].\n\
float64 score\n\
\n\
# The 6D pose of the object hypothesis. This pose should be\n\
#   defined as the pose of some fixed reference point on the object, such a\n\
#   the geometric center of the bounding box or the center of mass of the\n\
#   object.\n\
# Note that this pose is not stamped; frame information can be defined by\n\
#   parent messages.\n\
# Also note that different classes predicted for the same input data may have\n\
#   different predicted 6D poses.\n\
geometry_msgs/PoseWithCovariance pose\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: vision_msgs/BoundingBox2D\n\
# A 2D bounding box that can be rotated about its center.\n\
# All dimensions are in pixels, but represented using floating-point\n\
#   values to allow sub-pixel precision. If an exact pixel crop is required\n\
#   for a rotated bounding box, it can be calculated using Bresenham's line\n\
#   algorithm.\n\
\n\
# The 2D position (in pixels) and orientation of the bounding box center.\n\
geometry_msgs/Pose2D center\n\
\n\
# The size (in pixels) of the bounding box surrounding the object relative\n\
#   to the pose of its center.\n\
float64 size_x\n\
float64 size_y\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
";
  }

  static const char* value(const ::yolov2_ros::YoloDetectResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct YoloDetectResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yolov2_ros::YoloDetectResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yolov2_ros::YoloDetectResponse_<ContainerAllocator>& v)
  {
    s << indent << "detection: ";
    s << std::endl;
    Printer< ::vision_msgs::Detection2DArray_<ContainerAllocator> >::stream(s, indent + "  ", v.detection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOLOV2_ROS_MESSAGE_YOLODETECTRESPONSE_H
