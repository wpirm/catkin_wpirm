// Auto-generated. Do not edit!

// (in-package yolov2_ros.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let sensor_msgs = _finder('sensor_msgs');

//-----------------------------------------------------------

let vision_msgs = _finder('vision_msgs');

//-----------------------------------------------------------

class YoloDetectRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.image = null;
    }
    else {
      if (initObj.hasOwnProperty('image')) {
        this.image = initObj.image
      }
      else {
        this.image = new sensor_msgs.msg.Image();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type YoloDetectRequest
    // Serialize message field [image]
    bufferOffset = sensor_msgs.msg.Image.serialize(obj.image, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type YoloDetectRequest
    let len;
    let data = new YoloDetectRequest(null);
    // Deserialize message field [image]
    data.image = sensor_msgs.msg.Image.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += sensor_msgs.msg.Image.getMessageSize(object.image);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'yolov2_ros/YoloDetectRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b13d2865c5af2a64e6e30ab1b56e1dd5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    sensor_msgs/Image image
    
    ================================================================================
    MSG: sensor_msgs/Image
    # This message contains an uncompressed image
    # (0, 0) is at top-left corner of image
    #
    
    Header header        # Header timestamp should be acquisition time of image
                         # Header frame_id should be optical frame of camera
                         # origin of frame should be optical center of cameara
                         # +x should point to the right in the image
                         # +y should point down in the image
                         # +z should point into to plane of the image
                         # If the frame_id here and the frame_id of the CameraInfo
                         # message associated with the image conflict
                         # the behavior is undefined
    
    uint32 height         # image height, that is, number of rows
    uint32 width          # image width, that is, number of columns
    
    # The legal values for encoding are in file src/image_encodings.cpp
    # If you want to standardize a new string format, join
    # ros-users@lists.sourceforge.net and send an email proposing a new encoding.
    
    string encoding       # Encoding of pixels -- channel meaning, ordering, size
                          # taken from the list of strings in include/sensor_msgs/image_encodings.h
    
    uint8 is_bigendian    # is this data bigendian?
    uint32 step           # Full row length in bytes
    uint8[] data          # actual matrix data, size is (step * rows)
    
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
    # 0: no frame
    # 1: global frame
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new YoloDetectRequest(null);
    if (msg.image !== undefined) {
      resolved.image = sensor_msgs.msg.Image.Resolve(msg.image)
    }
    else {
      resolved.image = new sensor_msgs.msg.Image()
    }

    return resolved;
    }
};

class YoloDetectResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.detection = null;
    }
    else {
      if (initObj.hasOwnProperty('detection')) {
        this.detection = initObj.detection
      }
      else {
        this.detection = new vision_msgs.msg.Detection2DArray();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type YoloDetectResponse
    // Serialize message field [detection]
    bufferOffset = vision_msgs.msg.Detection2DArray.serialize(obj.detection, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type YoloDetectResponse
    let len;
    let data = new YoloDetectResponse(null);
    // Deserialize message field [detection]
    data.detection = vision_msgs.msg.Detection2DArray.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += vision_msgs.msg.Detection2DArray.getMessageSize(object.detection);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'yolov2_ros/YoloDetectResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '63a2d9433b72458acbe38ed3a7c6e45a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    vision_msgs/Detection2DArray detection
    
    ================================================================================
    MSG: vision_msgs/Detection2DArray
    # A list of 2D detections, for a multi-object 2D detector.
    
    Header header
    
    # A list of the detected proposals. A multi-proposal detector might generate
    #   this list with many candidate detections generated from a single input.
    Detection2D[] detections
    
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
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: vision_msgs/Detection2D
    # Defines a 2D detection result.
    #
    # This is similar to a 2D classification, but includes position information,
    #   allowing a classification result for a specific crop or image point to
    #   to be located in the larger image.
    
    Header header
    
    # Class probabilities
    ObjectHypothesisWithPose[] results
    
    # 2D bounding box surrounding the object.
    BoundingBox2D bbox
    
    # The 2D data that generated these results (i.e. region proposal cropped out of
    #   the image). Not required for all use cases, so it may be empty.
    sensor_msgs/Image source_img
    
    ================================================================================
    MSG: vision_msgs/ObjectHypothesisWithPose
    # An object hypothesis that contains position information.
    
    # The unique numeric ID of object detected. To get additional information about
    #   this ID, such as its human-readable name, listeners should perform a lookup
    #   in a metadata database. See vision_msgs/VisionInfo.msg for more detail.
    int64 id
    
    # The probability or confidence value of the detected object. By convention,
    #   this value should lie in the range [0-1].
    float64 score
    
    # The 6D pose of the object hypothesis. This pose should be
    #   defined as the pose of some fixed reference point on the object, such a
    #   the geometric center of the bounding box or the center of mass of the
    #   object.
    # Note that this pose is not stamped; frame information can be defined by
    #   parent messages.
    # Also note that different classes predicted for the same input data may have
    #   different predicted 6D poses.
    geometry_msgs/PoseWithCovariance pose
    ================================================================================
    MSG: geometry_msgs/PoseWithCovariance
    # This represents a pose in free space with uncertainty.
    
    Pose pose
    
    # Row-major representation of the 6x6 covariance matrix
    # The orientation parameters use a fixed-axis representation.
    # In order, the parameters are:
    # (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
    float64[36] covariance
    
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
    MSG: vision_msgs/BoundingBox2D
    # A 2D bounding box that can be rotated about its center.
    # All dimensions are in pixels, but represented using floating-point
    #   values to allow sub-pixel precision. If an exact pixel crop is required
    #   for a rotated bounding box, it can be calculated using Bresenham's line
    #   algorithm.
    
    # The 2D position (in pixels) and orientation of the bounding box center.
    geometry_msgs/Pose2D center
    
    # The size (in pixels) of the bounding box surrounding the object relative
    #   to the pose of its center.
    float64 size_x
    float64 size_y
    
    ================================================================================
    MSG: geometry_msgs/Pose2D
    # This expresses a position and orientation on a 2D manifold.
    
    float64 x
    float64 y
    float64 theta
    ================================================================================
    MSG: sensor_msgs/Image
    # This message contains an uncompressed image
    # (0, 0) is at top-left corner of image
    #
    
    Header header        # Header timestamp should be acquisition time of image
                         # Header frame_id should be optical frame of camera
                         # origin of frame should be optical center of cameara
                         # +x should point to the right in the image
                         # +y should point down in the image
                         # +z should point into to plane of the image
                         # If the frame_id here and the frame_id of the CameraInfo
                         # message associated with the image conflict
                         # the behavior is undefined
    
    uint32 height         # image height, that is, number of rows
    uint32 width          # image width, that is, number of columns
    
    # The legal values for encoding are in file src/image_encodings.cpp
    # If you want to standardize a new string format, join
    # ros-users@lists.sourceforge.net and send an email proposing a new encoding.
    
    string encoding       # Encoding of pixels -- channel meaning, ordering, size
                          # taken from the list of strings in include/sensor_msgs/image_encodings.h
    
    uint8 is_bigendian    # is this data bigendian?
    uint32 step           # Full row length in bytes
    uint8[] data          # actual matrix data, size is (step * rows)
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new YoloDetectResponse(null);
    if (msg.detection !== undefined) {
      resolved.detection = vision_msgs.msg.Detection2DArray.Resolve(msg.detection)
    }
    else {
      resolved.detection = new vision_msgs.msg.Detection2DArray()
    }

    return resolved;
    }
};

module.exports = {
  Request: YoloDetectRequest,
  Response: YoloDetectResponse,
  md5sum() { return '0c98907c2772621acd431740725bdb9a'; },
  datatype() { return 'yolov2_ros/YoloDetect'; }
};
