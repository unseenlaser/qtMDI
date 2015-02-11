/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Sun Feb  1 12:40:12 2015. */

#ifndef PB_TYPES_NPB_H_INCLUDED
#define PB_TYPES_NPB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _pb_ValueType {
    pb_ValueType_HAL_BIT = 1,
    pb_ValueType_HAL_FLOAT = 2,
    pb_ValueType_HAL_S32 = 3,
    pb_ValueType_HAL_U32 = 4,
    pb_ValueType_STRING = 5,
    pb_ValueType_BYTES = 6,
    pb_ValueType_INT32 = 20,
    pb_ValueType_UINT32 = 30,
    pb_ValueType_INT64 = 40,
    pb_ValueType_UINT64 = 50,
    pb_ValueType_DOUBLE = 60,
    pb_ValueType_BOOL = 80,
    pb_ValueType_CARTESIAN = 100,
    pb_ValueType_LEGACY_CARTESIAN = 110,
    pb_ValueType_POSE = 120,
    pb_ValueType_LEGACY_POSE = 130
} pb_ValueType;

typedef enum _pb_HalPinDirection {
    pb_HalPinDirection_HAL_IN = 16,
    pb_HalPinDirection_HAL_OUT = 32,
    pb_HalPinDirection_HAL_IO = 48
} pb_HalPinDirection;

typedef enum _pb_HalParamDirection {
    pb_HalParamDirection_HAL_RO = 64,
    pb_HalParamDirection_HAL_RW = 192
} pb_HalParamDirection;

typedef enum _pb_ObjectType {
    pb_ObjectType_HAL_PIN = 1,
    pb_ObjectType_HAL_SIGNAL = 2,
    pb_ObjectType_HAL_PARAM = 3,
    pb_ObjectType_HAL_THREAD = 4,
    pb_ObjectType_HAL_FUNCT = 5,
    pb_ObjectType_HAL_ALIAS = 6,
    pb_ObjectType_HAL_COMP_RT = 7,
    pb_ObjectType_HAL_COMP_USER = 8,
    pb_ObjectType_HAL_COMP_REMOTE = 9,
    pb_ObjectType_HAL_RING = 10,
    pb_ObjectType_HAL_GROUP = 11,
    pb_ObjectType_HAL_MEMBER_SIGNAL = 12,
    pb_ObjectType_HAL_MEMBER_GROUP = 13,
    pb_ObjectType_HAL_MEMBER_PIN = 14,
    pb_ObjectType_HAL_MEMBER_PARAM = 15,
    pb_ObjectType_RING_RECORD = 16,
    pb_ObjectType_RING_STREAM = 17,
    pb_ObjectType_VALUE = 20,
    pb_ObjectType_INSTANCE = 21,
    pb_ObjectType_ORIGINATOR = 22,
    pb_ObjectType_NAMED_VALUE = 25,
    pb_ObjectType_OT_ERROR = 30
} pb_ObjectType;

typedef enum _pb_RCS_STATUS {
    pb_RCS_STATUS_UNINITIALIZED_STATUS = -1,
    pb_RCS_STATUS_RCS_DONE = 1,
    pb_RCS_STATUS_RCS_EXEC = 2,
    pb_RCS_STATUS_RCS_ERROR = 3,
    pb_RCS_STATUS_RCS_RECEIVED = 4
} pb_RCS_STATUS;

typedef enum _pb_MsgOrigin {
    pb_MsgOrigin_MSG_KERNEL = 0,
    pb_MsgOrigin_MSG_RTUSER = 1,
    pb_MsgOrigin_MSG_ULAPI = 2
} pb_MsgOrigin;

typedef enum _pb_MsgLevel {
    pb_MsgLevel_RTAPI_MSG_NONE = 0,
    pb_MsgLevel_RTAPI_MSG_ERR = 1,
    pb_MsgLevel_RTAPI_MSG_WARN = 2,
    pb_MsgLevel_RTAPI_MSG_INFO = 3,
    pb_MsgLevel_RTAPI_MSG_DBG = 4,
    pb_MsgLevel_RTAPI_MSG_ALL = 5
} pb_MsgLevel;

typedef enum _pb_OriginDetail {
    pb_OriginDetail_UNIX_SIGNAL = 10,
    pb_OriginDetail_INSTANCE_SHUTDOWN = 20,
    pb_OriginDetail_ZMQ_SOCKET = 70,
    pb_OriginDetail_NML_LAYER = 80,
    pb_OriginDetail_RCS_LAYER = 90,
    pb_OriginDetail_CMS_LAYER = 100,
    pb_OriginDetail_IP_LAYER = 110,
    pb_OriginDetail_TCP_LAYER = 120,
    pb_OriginDetail_PGM_LAYER = 130
} pb_OriginDetail;

typedef enum _pb_OriginType {
    pb_OriginType_PROCESS = 10,
    pb_OriginType_USER_THREAD = 20,
    pb_OriginType_RT_THREAD = 30,
    pb_OriginType_COMPONENT = 40,
    pb_OriginType_THREAD_FUNCTION = 50,
    pb_OriginType_COMPONENT_INIT = 60,
    pb_OriginType_COMPONENT_EXIT = 70,
    pb_OriginType_GROUP = 80,
    pb_OriginType_PIN = 90,
    pb_OriginType_SIGNAL = 100
} pb_OriginType;

typedef enum _pb_Severity {
    pb_Severity_S_INFORMATIONAL = 1,
    pb_Severity_S_WARNING = 2,
    pb_Severity_S_FAIL = 4
} pb_Severity;

typedef enum _pb_StatusType {
    pb_StatusType_ENQUEUED = 1,
    pb_StatusType_PROCESSING = 2,
    pb_StatusType_COMPLETE = 3,
    pb_StatusType_FAILED = 4
} pb_StatusType;

typedef enum _pb_ReplyType {
    pb_ReplyType_NONE = 0,
    pb_ReplyType_ON_RECEPTION = 1,
    pb_ReplyType_ON_QUEUED = 2,
    pb_ReplyType_ON_COMPLETION = 4,
    pb_ReplyType_ALL_STEPS = 255
} pb_ReplyType;

typedef enum _pb_ServiceType {
    pb_ServiceType_ST_LOGGING = 1,
    pb_ServiceType_ST_CONFIG = 2,
    pb_ServiceType_ST_REDIS = 3,
    pb_ServiceType_ST_HTTP = 4,
    pb_ServiceType_ST_HTTPS = 5,
    pb_ServiceType_ST_WEBSOCKET = 6,
    pb_ServiceType_ST_WEBSOCKETS = 7,
    pb_ServiceType_ST_RTAPI_COMMAND = 8,
    pb_ServiceType_ST_STP_HALGROUP = 9,
    pb_ServiceType_ST_STP_HALRCOMP = 10,
    pb_ServiceType_ST_STP_INTERP = 11,
    pb_ServiceType_ST_STP_TASK = 12,
    pb_ServiceType_ST_HAL_RCOMMAND = 13,
    pb_ServiceType_ST_TASK_COMMAND = 14,
    pb_ServiceType_ST_INTERP_COMMAND = 15,
    pb_ServiceType_ST_MESSAGEBUS_COMMAND = 16,
    pb_ServiceType_ST_MESSAGEBUS_RESPONSE = 17
} pb_ServiceType;

typedef enum _pb_ServiceAPI {
    pb_ServiceAPI_SA_ZMQ_PROTOBUF = 1,
    pb_ServiceAPI_SA_WS_JSON = 2
} pb_ServiceAPI;

typedef enum _pb_ContainerType {
    pb_ContainerType_MT_RTMESSAGE = 2,
    pb_ContainerType_MT_MOTCMD = 3,
    pb_ContainerType_MT_MOTSTATUS = 4,
    pb_ContainerType_MT_LEGACY_MOTCMD = 5,
    pb_ContainerType_MT_LEGACY_MOTSTATUS = 6,
    pb_ContainerType_MT_WOU = 7,
    pb_ContainerType_MT_HALUPDATE = 8,
    pb_ContainerType_MT_RTAPI_MESSAGE = 9,
    pb_ContainerType_MT_LOG_MESSAGE = 10,
    pb_ContainerType_MT_PREVIEW = 11,
    pb_ContainerType_MT_PROGRESS = 12,
    pb_ContainerType_MT_INTERP_STAT = 13,
    pb_ContainerType_MT_SYSLOG = 18,
    pb_ContainerType_MT_LEGACY_NML = 19,
    pb_ContainerType_MT_LEGACY_MOTCONFIG = 20,
    pb_ContainerType_MT_STP_UPDATE_FULL = 26,
    pb_ContainerType_MT_STP_UPDATE = 28,
    pb_ContainerType_MT_STP_NOGROUP = 27,
    pb_ContainerType_MT_RTMESSAGE0 = 30,
    pb_ContainerType_MT_RTMESSAGE1 = 31,
    pb_ContainerType_MT_RTMESSAGE2 = 32,
    pb_ContainerType_MT_RTMESSAGE3 = 33,
    pb_ContainerType_MT_RTMESSAGE4 = 34,
    pb_ContainerType_MT_ASCII = 100,
    pb_ContainerType_MT_UNICODE = 101,
    pb_ContainerType_MT_GCODE = 102,
    pb_ContainerType_MT_PYTHON = 103,
    pb_ContainerType_MT_PICKLE = 104,
    pb_ContainerType_MT_TCL = 105,
    pb_ContainerType_MT_XML = 106,
    pb_ContainerType_MT_JSON = 107,
    pb_ContainerType_MT_JPEG = 108,
    pb_ContainerType_MT_PNG = 109,
    pb_ContainerType_MT_TIFF = 110,
    pb_ContainerType_MT_POSTSCRIPT = 111,
    pb_ContainerType_MT_SVG = 112,
    pb_ContainerType_MT_ZMQ_SUBSCRIBE = 150,
    pb_ContainerType_MT_ZMQ_UNSUBSCRIBE = 151,
    pb_ContainerType_MT_PING = 210,
    pb_ContainerType_MT_PING_ACKNOWLEDGE = 215,
    pb_ContainerType_MT_REJECT = 220,
    pb_ContainerType_MT_DONE = 240,
    pb_ContainerType_MT_SERVICE_REQUEST = 250,
    pb_ContainerType_MT_SERVICE_ANNOUNCEMENT = 251,
    pb_ContainerType_MT_SERVICE_PROBE = 252,
    pb_ContainerType_MT_MESSAGEBUS_NO_DESTINATION = 255,
    pb_ContainerType_MT_HALRCOMP_BIND = 256,
    pb_ContainerType_MT_HALRCOMP_BIND_CONFIRM = 257,
    pb_ContainerType_MT_HALRCOMP_BIND_REJECT = 258,
    pb_ContainerType_MT_HALRCOMP_SET = 259,
    pb_ContainerType_MT_HALRCOMP_SET_REJECT = 260,
    pb_ContainerType_MT_HALRCOMP_ACK = 263,
    pb_ContainerType_MT_HALRCOMMAND_SET = 265,
    pb_ContainerType_MT_HALRCOMMAND_SET_REJECT = 266,
    pb_ContainerType_MT_HALRCOMMAND_GET = 267,
    pb_ContainerType_MT_HALRCOMMAND_GET_REJECT = 268,
    pb_ContainerType_MT_HALRCOMMAND_CREATE = 269,
    pb_ContainerType_MT_HALRCOMMAND_CREATE_REJECT = 270,
    pb_ContainerType_MT_HALRCOMMAND_DELETE = 271,
    pb_ContainerType_MT_HALRCOMMAND_DELETE_REJECT = 272,
    pb_ContainerType_MT_HALRCOMMAND_ACK = 273,
    pb_ContainerType_MT_HALRCOMMAND_ERROR = 274,
    pb_ContainerType_MT_HALRCOMMAND_DESCRIBE = 276,
    pb_ContainerType_MT_HALRCOMMAND_DESCRIPTION = 277,
    pb_ContainerType_MT_HALRCOMP_FULL_UPDATE = 288,
    pb_ContainerType_MT_HALRCOMP_INCREMENTAL_UPDATE = 289,
    pb_ContainerType_MT_HALRCOMP_ERROR = 290,
    pb_ContainerType_MT_HALGROUP_BIND = 294,
    pb_ContainerType_MT_HALGROUP_BIND_CONFIRM = 295,
    pb_ContainerType_MT_HALGROUP_BIND_REJECT = 296,
    pb_ContainerType_MT_HALGROUP_FULL_UPDATE = 297,
    pb_ContainerType_MT_HALGROUP_INCREMENTAL_UPDATE = 298,
    pb_ContainerType_MT_HALGROUP_ERROR = 299,
    pb_ContainerType_MT_RTAPI_APP_EXIT = 300,
    pb_ContainerType_MT_RTAPI_APP_PING = 301,
    pb_ContainerType_MT_RTAPI_APP_LOADRT = 302,
    pb_ContainerType_MT_RTAPI_APP_LOG = 303,
    pb_ContainerType_MT_RTAPI_APP_UNLOADRT = 305,
    pb_ContainerType_MT_RTAPI_APP_NEWINST = 306,
    pb_ContainerType_MT_RTAPI_APP_NEWTHREAD = 307,
    pb_ContainerType_MT_RTAPI_APP_DELTHREAD = 308,
    pb_ContainerType_MT_RTAPI_APP_CALLFUNC = 309,
    pb_ContainerType_MT_RTAPI_APP_REPLY = 310,
    pb_ContainerType_MT_LIST_APPLICATIONS = 350,
    pb_ContainerType_MT_DESCRIBE_APPLICATION = 351,
    pb_ContainerType_MT_RETRIEVE_APPLICATION = 352,
    pb_ContainerType_MT_APPLICATION_DETAIL = 353,
    pb_ContainerType_MT_ERROR = 360,
    pb_ContainerType_MT_TASK_REPLY = 400,
    pb_ContainerType_MT_TICKET_UPDATE = 401,
    pb_ContainerType_MT_CREDIT_UPDATE = 450,
    pb_ContainerType_MT_EMCMOT_LOWER = 1000,
    pb_ContainerType_MT_EMCMOT_UPPER = 1100,
    pb_ContainerType_MT_EMCMOT_ABORT = 1001,
    pb_ContainerType_MT_EMCMOT_AXIS_ABORT = 1002,
    pb_ContainerType_MT_EMCMOT_ENABLE = 1003,
    pb_ContainerType_MT_EMCMOT_DISABLE = 1004,
    pb_ContainerType_MT_EMCMOT_ENABLE_AMPLIFIER = 1005,
    pb_ContainerType_MT_EMCMOT_DISABLE_AMPLIFIER = 1006,
    pb_ContainerType_MT_EMCMOT_ENABLE_WATCHDOG = 1007,
    pb_ContainerType_MT_EMCMOT_DISABLE_WATCHDOG = 1008,
    pb_ContainerType_MT_EMCMOT_ACTIVATE_JOINT = 1009,
    pb_ContainerType_MT_EMCMOT_DEACTIVATE_JOINT = 1010,
    pb_ContainerType_MT_EMCMOT_PAUSE = 1011,
    pb_ContainerType_MT_EMCMOT_RESUME = 1012,
    pb_ContainerType_MT_EMCMOT_STEP = 1013,
    pb_ContainerType_MT_EMCMOT_FREE = 1014,
    pb_ContainerType_MT_EMCMOT_COORD = 1015,
    pb_ContainerType_MT_EMCMOT_TELEOP = 1016,
    pb_ContainerType_MT_EMCMOT_SPINDLE_SCALE = 1017,
    pb_ContainerType_MT_EMCMOT_SS_ENABLE = 1018,
    pb_ContainerType_MT_EMCMOT_FEED_SCALE = 1019,
    pb_ContainerType_MT_EMCMOT_FS_ENABLE = 1020,
    pb_ContainerType_MT_EMCMOT_FH_ENABLE = 1021,
    pb_ContainerType_MT_EMCMOT_AF_ENABLE = 1022,
    pb_ContainerType_MT_EMCMOT_OVERRIDE_LIMITS = 1023,
    pb_ContainerType_MT_EMCMOT_HOME = 1024,
    pb_ContainerType_MT_EMCMOT_UNHOME = 1025,
    pb_ContainerType_MT_EMCMOT_JOG_CONT = 1026,
    pb_ContainerType_MT_EMCMOT_JOG_INCR = 1027,
    pb_ContainerType_MT_EMCMOT_JOG_ABS = 1028,
    pb_ContainerType_MT_EMCMOT_SET_LINE = 1029,
    pb_ContainerType_MT_EMCMOT_SET_CIRCLE = 1030,
    pb_ContainerType_MT_EMCMOT_SET_TELEOP_VECTOR = 1031,
    pb_ContainerType_MT_EMCMOT_CLEAR_PROBE_FLAGS = 1032,
    pb_ContainerType_MT_EMCMOT_PROBE = 1033,
    pb_ContainerType_MT_EMCMOT_RIGID_TAP = 1034,
    pb_ContainerType_MT_EMCMOT_SET_POSITION_LIMITS = 1035,
    pb_ContainerType_MT_EMCMOT_SET_BACKLASH = 1036,
    pb_ContainerType_MT_EMCMOT_SET_MIN_FERROR = 1037,
    pb_ContainerType_MT_EMCMOT_SET_MAX_FERROR = 1038,
    pb_ContainerType_MT_EMCMOT_SET_VEL = 1039,
    pb_ContainerType_MT_EMCMOT_SET_VEL_LIMIT = 1040,
    pb_ContainerType_MT_EMCMOT_SET_JOINT_VEL_LIMIT = 1041,
    pb_ContainerType_MT_EMCMOT_SET_JOINT_ACC_LIMIT = 1042,
    pb_ContainerType_MT_EMCMOT_SET_ACC = 1043,
    pb_ContainerType_MT_EMCMOT_SET_TERM_COND = 1044,
    pb_ContainerType_MT_EMCMOT_SET_NUM_AXES = 1045,
    pb_ContainerType_MT_EMCMOT_SET_WORLD_HOME = 1046,
    pb_ContainerType_MT_EMCMOT_SET_HOMING_PARAMS = 1047,
    pb_ContainerType_MT_EMCMOT_SET_DEBUG = 1048,
    pb_ContainerType_MT_EMCMOT_SET_DOUT = 1049,
    pb_ContainerType_MT_EMCMOT_SET_AOUT = 1050,
    pb_ContainerType_MT_EMCMOT_SET_SPINDLESYNC = 1051,
    pb_ContainerType_MT_EMCMOT_SPINDLE_ON = 1052,
    pb_ContainerType_MT_EMCMOT_SPINDLE_OFF = 1053,
    pb_ContainerType_MT_EMCMOT_SPINDLE_INCREASE = 1054,
    pb_ContainerType_MT_EMCMOT_SPINDLE_DECREASE = 1055,
    pb_ContainerType_MT_EMCMOT_SPINDLE_BRAKE_ENGAGE = 1056,
    pb_ContainerType_MT_EMCMOT_SPINDLE_BRAKE_RELEASE = 1057,
    pb_ContainerType_MT_EMCMOT_SET_MOTOR_OFFSET = 1058,
    pb_ContainerType_MT_EMCMOT_SET_JOINT_COMP = 1059,
    pb_ContainerType_MT_EMCMOT_SET_OFFSET = 1060,
    pb_ContainerType_MT_EMCMOT_COMMAND_OK = 1061,
    pb_ContainerType_MT_EMCMOT_COMMAND_UNKNOWN_COMMAND = 1062,
    pb_ContainerType_MT_EMCMOT_COMMAND_INVALID_COMMAND = 1063,
    pb_ContainerType_MT_EMCMOT_COMMAND_INVALID_PARAMS = 1064,
    pb_ContainerType_MT_EMCMOT_COMMAND_BAD_EXEC = 1065,
    pb_ContainerType_MT_EMCMOT_MOTION_DISABLED = 1066,
    pb_ContainerType_MT_EMCMOT_MOTION_FREE = 1067,
    pb_ContainerType_MT_EMCMOT_MOTION_TELEOP = 1068,
    pb_ContainerType_MT_EMCMOT_MOTION_COORD = 1069,
    pb_ContainerType_MT_EMCMOT_JOINT_FLAG = 1070,
    pb_ContainerType_MT_EMCMOT_MOTION_FLAG = 1071,
    pb_ContainerType_MT_PRU_FIRMWARE = 2048,
    pb_ContainerType_MT_MESA_5I20_FIRMWARE = 3000,
    pb_ContainerType_MT_BLOB = 4000,
    pb_ContainerType_MT_TEST1 = 5001,
    pb_ContainerType_MT_TEST2 = 5002,
    pb_ContainerType_MT_TEST3 = 5003,
    pb_ContainerType_MT_EMC_NML_LOWER = 10000,
    pb_ContainerType_MT_EMC_NML_UPPER = 13000,
    pb_ContainerType_MT_EMC_OPERATOR_ERROR = 10011,
    pb_ContainerType_MT_EMC_OPERATOR_TEXT = 10012,
    pb_ContainerType_MT_EMC_OPERATOR_DISPLAY = 10013,
    pb_ContainerType_MT_EMC_NULL = 10021,
    pb_ContainerType_MT_EMC_SET_DEBUG = 10022,
    pb_ContainerType_MT_EMC_SYSTEM_CMD = 10030,
    pb_ContainerType_MT_EMC_AXIS_SET_AXIS = 10101,
    pb_ContainerType_MT_EMC_AXIS_SET_UNITS = 10102,
    pb_ContainerType_MT_EMC_AXIS_SET_MIN_POSITION_LIMIT = 10107,
    pb_ContainerType_MT_EMC_AXIS_SET_MAX_POSITION_LIMIT = 10108,
    pb_ContainerType_MT_EMC_TOOL_START_CHANGE = 1110,
    pb_ContainerType_MT_EMC_EXEC_PLUGIN_CALL = 1112,
    pb_ContainerType_MT_EMC_IO_PLUGIN_CALL = 1113,
    pb_ContainerType_MT_EMC_AXIS_SET_FERROR = 10111,
    pb_ContainerType_MT_EMC_AXIS_SET_HOMING_PARAMS = 10112,
    pb_ContainerType_MT_EMC_AXIS_SET_MIN_FERROR = 10115,
    pb_ContainerType_MT_EMC_AXIS_SET_MAX_VELOCITY = 10116,
    pb_ContainerType_MT_EMC_AXIS_INIT = 10118,
    pb_ContainerType_MT_EMC_AXIS_HALT = 10119,
    pb_ContainerType_MT_EMC_AXIS_ABORT = 10120,
    pb_ContainerType_MT_EMC_AXIS_ENABLE = 10121,
    pb_ContainerType_MT_EMC_AXIS_DISABLE = 10122,
    pb_ContainerType_MT_EMC_AXIS_HOME = 10123,
    pb_ContainerType_MT_EMC_AXIS_UNHOME = 10135,
    pb_ContainerType_MT_EMC_AXIS_JOG = 10124,
    pb_ContainerType_MT_EMC_AXIS_INCR_JOG = 10125,
    pb_ContainerType_MT_EMC_AXIS_ABS_JOG = 10126,
    pb_ContainerType_MT_EMC_AXIS_ACTIVATE = 10127,
    pb_ContainerType_MT_EMC_AXIS_DEACTIVATE = 10128,
    pb_ContainerType_MT_EMC_AXIS_OVERRIDE_LIMITS = 10129,
    pb_ContainerType_MT_EMC_AXIS_LOAD_COMP = 10131,
    pb_ContainerType_MT_EMC_AXIS_SET_BACKLASH = 10134,
    pb_ContainerType_MT_EMC_AXIS_STAT = 10199,
    pb_ContainerType_MT_EMC_TRAJ_SET_AXES = 10201,
    pb_ContainerType_MT_EMC_TRAJ_SET_UNITS = 10202,
    pb_ContainerType_MT_EMC_TRAJ_SET_CYCLE_TIME = 10203,
    pb_ContainerType_MT_EMC_TRAJ_SET_MODE = 10204,
    pb_ContainerType_MT_EMC_TRAJ_SET_VELOCITY = 10205,
    pb_ContainerType_MT_EMC_TRAJ_SET_ACCELERATION = 10206,
    pb_ContainerType_MT_EMC_TRAJ_SET_MAX_VELOCITY = 10207,
    pb_ContainerType_MT_EMC_TRAJ_SET_MAX_ACCELERATION = 10208,
    pb_ContainerType_MT_EMC_TRAJ_SET_SCALE = 10209,
    pb_ContainerType_MT_EMC_TRAJ_SET_MOTION_ID = 10210,
    pb_ContainerType_MT_EMC_TRAJ_INIT = 10211,
    pb_ContainerType_MT_EMC_TRAJ_HALT = 10212,
    pb_ContainerType_MT_EMC_TRAJ_ENABLE = 10213,
    pb_ContainerType_MT_EMC_TRAJ_DISABLE = 10214,
    pb_ContainerType_MT_EMC_TRAJ_ABORT = 10215,
    pb_ContainerType_MT_EMC_TRAJ_PAUSE = 10216,
    pb_ContainerType_MT_EMC_TRAJ_STEP = 10217,
    pb_ContainerType_MT_EMC_TRAJ_RESUME = 10218,
    pb_ContainerType_MT_EMC_TRAJ_DELAY = 10219,
    pb_ContainerType_MT_EMC_TRAJ_LINEAR_MOVE = 10220,
    pb_ContainerType_MT_EMC_TRAJ_CIRCULAR_MOVE = 10221,
    pb_ContainerType_MT_EMC_TRAJ_SET_TERM_COND = 10222,
    pb_ContainerType_MT_EMC_TRAJ_SET_OFFSET = 10223,
    pb_ContainerType_MT_EMC_TRAJ_SET_G5X = 10224,
    pb_ContainerType_MT_EMC_TRAJ_SET_HOME = 10225,
    pb_ContainerType_MT_EMC_TRAJ_SET_ROTATION = 10226,
    pb_ContainerType_MT_EMC_TRAJ_SET_G92 = 10227,
    pb_ContainerType_MT_EMC_TRAJ_CLEAR_PROBE_TRIPPED_FLAG = 10228,
    pb_ContainerType_MT_EMC_TRAJ_PROBE = 10229,
    pb_ContainerType_MT_EMC_TRAJ_SET_TELEOP_ENABLE = 10230,
    pb_ContainerType_MT_EMC_TRAJ_SET_TELEOP_VECTOR = 10231,
    pb_ContainerType_MT_EMC_TRAJ_SET_SPINDLESYNC = 10232,
    pb_ContainerType_MT_EMC_TRAJ_SET_SPINDLE_SCALE = 10233,
    pb_ContainerType_MT_EMC_TRAJ_SET_FO_ENABLE = 10234,
    pb_ContainerType_MT_EMC_TRAJ_SET_SO_ENABLE = 10235,
    pb_ContainerType_MT_EMC_TRAJ_SET_FH_ENABLE = 10236,
    pb_ContainerType_MT_EMC_TRAJ_RIGID_TAP = 10237,
    pb_ContainerType_MT_EMC_TRAJ_STAT = 10299,
    pb_ContainerType_MT_EMC_MOTION_INIT = 10301,
    pb_ContainerType_MT_EMC_MOTION_HALT = 10302,
    pb_ContainerType_MT_EMC_MOTION_ABORT = 10303,
    pb_ContainerType_MT_EMC_MOTION_SET_AOUT = 10304,
    pb_ContainerType_MT_EMC_MOTION_SET_DOUT = 10305,
    pb_ContainerType_MT_EMC_MOTION_ADAPTIVE = 10306,
    pb_ContainerType_MT_EMC_SPINDLE_ORIENT = 10317,
    pb_ContainerType_MT_EMC_SPINDLE_WAIT_ORIENT_COMPLETE = 10318,
    pb_ContainerType_MT_EMC_MOTION_STAT = 10399,
    pb_ContainerType_MT_EMC_TASK_INIT = 10501,
    pb_ContainerType_MT_EMC_TASK_HALT = 10502,
    pb_ContainerType_MT_EMC_TASK_ABORT = 10503,
    pb_ContainerType_MT_EMC_TASK_SET_MODE = 10504,
    pb_ContainerType_MT_EMC_TASK_SET_STATE = 10505,
    pb_ContainerType_MT_EMC_TASK_PLAN_OPEN = 10506,
    pb_ContainerType_MT_EMC_TASK_PLAN_RUN = 10507,
    pb_ContainerType_MT_EMC_TASK_PLAN_READ = 10508,
    pb_ContainerType_MT_EMC_TASK_PLAN_EXECUTE = 10509,
    pb_ContainerType_MT_EMC_TASK_PLAN_PAUSE = 10510,
    pb_ContainerType_MT_EMC_TASK_PLAN_STEP = 10511,
    pb_ContainerType_MT_EMC_TASK_PLAN_RESUME = 10512,
    pb_ContainerType_MT_EMC_TASK_PLAN_END = 10513,
    pb_ContainerType_MT_EMC_TASK_PLAN_CLOSE = 10514,
    pb_ContainerType_MT_EMC_TASK_PLAN_INIT = 10515,
    pb_ContainerType_MT_EMC_TASK_PLAN_SYNCH = 10516,
    pb_ContainerType_MT_EMC_TASK_PLAN_SET_OPTIONAL_STOP = 10517,
    pb_ContainerType_MT_EMC_TASK_PLAN_SET_BLOCK_DELETE = 10518,
    pb_ContainerType_MT_EMC_TASK_PLAN_OPTIONAL_STOP = 10519,
    pb_ContainerType_MT_EMC_TASK_PLAN_RESET = 10520,
    pb_ContainerType_MT_EMC_TASK_PLAN_REPLY = 10530,
    pb_ContainerType_MT_EMC_TASK_STAT = 10599,
    pb_ContainerType_MT_EMC_TOOL_INIT = 11101,
    pb_ContainerType_MT_EMC_TOOL_HALT = 11102,
    pb_ContainerType_MT_EMC_TOOL_ABORT = 11103,
    pb_ContainerType_MT_EMC_TOOL_PREPARE = 11104,
    pb_ContainerType_MT_EMC_TOOL_LOAD = 11105,
    pb_ContainerType_MT_EMC_TOOL_UNLOAD = 11106,
    pb_ContainerType_MT_EMC_TOOL_LOAD_TOOL_TABLE = 11107,
    pb_ContainerType_MT_EMC_TOOL_SET_OFFSET = 11108,
    pb_ContainerType_MT_EMC_TOOL_SET_NUMBER = 11109,
    pb_ContainerType_MT_EMC_TOOL_STAT = 11199,
    pb_ContainerType_MT_EMC_AUX_ESTOP_ON = 11206,
    pb_ContainerType_MT_EMC_AUX_ESTOP_OFF = 11207,
    pb_ContainerType_MT_EMC_AUX_ESTOP_RESET = 11208,
    pb_ContainerType_MT_EMC_AUX_INPUT_WAIT = 11209,
    pb_ContainerType_MT_EMC_AUX_STAT = 11299,
    pb_ContainerType_MT_EMC_SPINDLE_ON = 11304,
    pb_ContainerType_MT_EMC_SPINDLE_OFF = 11305,
    pb_ContainerType_MT_EMC_SPINDLE_INCREASE = 11309,
    pb_ContainerType_MT_EMC_SPINDLE_DECREASE = 11310,
    pb_ContainerType_MT_EMC_SPINDLE_CONSTANT = 11311,
    pb_ContainerType_MT_EMC_SPINDLE_BRAKE_RELEASE = 11312,
    pb_ContainerType_MT_EMC_SPINDLE_BRAKE_ENGAGE = 11313,
    pb_ContainerType_MT_EMC_SPINDLE_SPEED = 11316,
    pb_ContainerType_MT_EMC_SPINDLE_STAT = 11399,
    pb_ContainerType_MT_EMC_COOLANT_MIST_ON = 11404,
    pb_ContainerType_MT_EMC_COOLANT_MIST_OFF = 11405,
    pb_ContainerType_MT_EMC_COOLANT_FLOOD_ON = 11406,
    pb_ContainerType_MT_EMC_COOLANT_FLOOD_OFF = 11407,
    pb_ContainerType_MT_EMC_COOLANT_STAT = 11499,
    pb_ContainerType_MT_EMC_LUBE_ON = 11504,
    pb_ContainerType_MT_EMC_LUBE_OFF = 11505,
    pb_ContainerType_MT_EMC_LUBE_STAT = 11599,
    pb_ContainerType_MT_EMC_IO_INIT = 11601,
    pb_ContainerType_MT_EMC_IO_HALT = 11602,
    pb_ContainerType_MT_EMC_IO_ABORT = 11603,
    pb_ContainerType_MT_EMC_IO_SET_CYCLE_TIME = 11604,
    pb_ContainerType_MT_EMC_IO_STAT = 11699,
    pb_ContainerType_MT_EMC_INIT = 11901,
    pb_ContainerType_MT_EMC_HALT = 11902,
    pb_ContainerType_MT_EMC_ABORT = 11903,
    pb_ContainerType_MT_EMC_STAT = 11999,
    pb_ContainerType_MT_EMCSTAT_FULL_UPDATE = 12500,
    pb_ContainerType_MT_EMCSTAT_INCREMENTAL_UPDATE = 12501,
    pb_ContainerType_MT_EMC_NML_ERROR = 12510,
    pb_ContainerType_MT_EMC_NML_TEXT = 12511,
    pb_ContainerType_MT_EMC_NML_DISPLAY = 12512
} pb_ContainerType;

typedef enum _pb_OriginIndex {
    pb_OriginIndex_ORIGIN_G54 = 1,
    pb_OriginIndex_ORIGIN_G55 = 2,
    pb_OriginIndex_ORIGIN_G56 = 3,
    pb_OriginIndex_ORIGIN_G57 = 4,
    pb_OriginIndex_ORIGIN_G58 = 5,
    pb_OriginIndex_ORIGIN_G59 = 6,
    pb_OriginIndex_ORIGIN_G59_1 = 7,
    pb_OriginIndex_ORIGIN_G59_2 = 8,
    pb_OriginIndex_ORIGIN_G59_3 = 9
} pb_OriginIndex;

typedef enum _pb_TermConditionType {
    pb_TermConditionType__EMC_TRAJ_TERM_COND_STOP = 1,
    pb_TermConditionType__EMC_TRAJ_TERM_COND_BLEND = 2
} pb_TermConditionType;

typedef enum _pb_CanonDirection {
    pb_CanonDirection__CANON_STOPPED = 1,
    pb_CanonDirection__CANON_CLOCKWISE = 2,
    pb_CanonDirection__CANON_COUNTERCLOCKWISE = 3
} pb_CanonDirection;

typedef enum _pb_InputType {
    pb_InputType__ANALOG_INPUT = 0,
    pb_InputType__DIGITAL_INPUT = 1
} pb_InputType;

typedef enum _pb_WaitType {
    pb_WaitType_IMMEDIATE = 0,
    pb_WaitType_RISE = 1,
    pb_WaitType_FALL = 2,
    pb_WaitType_BE_HIGH = 3,
    pb_WaitType_BE_LOW = 4
} pb_WaitType;

typedef enum _pb_InterpreterStateType {
    pb_InterpreterStateType_INTERP_IDLE = 1,
    pb_InterpreterStateType_INTERP_RUNNING = 2,
    pb_InterpreterStateType_INTERP_SYNC_WAIT = 3,
    pb_InterpreterStateType_INTERP_PAUSED = 4,
    pb_InterpreterStateType_INTERP_QEUEUE_WAIT = 5,
    pb_InterpreterStateType_INTERP_ABORT_WAIT = 6,
    pb_InterpreterStateType_INTERP_STATE_UNSET = 99
} pb_InterpreterStateType;

/* Struct definitions */
/* Default values for struct fields */

/* Initializer values for message structs */

/* Field tags (for use in manual encoding/decoding) */

/* Struct field encoding specification for nanopb */

/* Maximum encoded size of messages (where known) */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif