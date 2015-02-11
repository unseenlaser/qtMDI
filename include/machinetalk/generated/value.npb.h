/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Sun Feb  1 12:40:12 2015. */

#ifndef PB_VALUE_NPB_H_INCLUDED
#define PB_VALUE_NPB_H_INCLUDED
#include <pb.h>

#include <machinetalk/generated/emcclass.npb.h>
#include <machinetalk/generated/types.npb.h>
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _pb_Value {
    pb_ValueType type;
    bool has_halbit;
    bool halbit;
    bool has_halfloat;
    double halfloat;
    bool has_hals32;
    int32_t hals32;
    bool has_halu32;
    uint32_t halu32;
    pb_callback_t v_bytes;
    bool has_v_int32;
    int32_t v_int32;
    bool has_v_int64;
    int64_t v_int64;
    bool has_v_uint32;
    uint32_t v_uint32;
    bool has_v_uint64;
    uint64_t v_uint64;
    bool has_v_double;
    double v_double;
    bool has_v_string;
    char v_string[41];
    bool has_v_bool;
    bool v_bool;
    bool has_carte;
    pb_PmCartesian carte;
    bool has_pose;
    pb_EmcPose pose;
} pb_Value;

/* Default values for struct fields */

/* Initializer values for message structs */
#define pb_Value_init_default                    {(pb_ValueType)0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}, false, 0, false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, pb_PmCartesian_init_default, false, pb_EmcPose_init_default}
#define pb_Value_init_zero                       {(pb_ValueType)0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}, false, 0, false, 0, false, 0, false, 0, false, 0, false, "", false, 0, false, pb_PmCartesian_init_zero, false, pb_EmcPose_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define pb_Value_type_tag                        10
#define pb_Value_halbit_tag                      100
#define pb_Value_halfloat_tag                    101
#define pb_Value_hals32_tag                      102
#define pb_Value_halu32_tag                      103
#define pb_Value_v_bytes_tag                     120
#define pb_Value_v_int32_tag                     130
#define pb_Value_v_int64_tag                     140
#define pb_Value_v_uint32_tag                    150
#define pb_Value_v_uint64_tag                    160
#define pb_Value_v_double_tag                    170
#define pb_Value_v_string_tag                    180
#define pb_Value_v_bool_tag                      190
#define pb_Value_carte_tag                       200
#define pb_Value_pose_tag                        220

/* Struct field encoding specification for nanopb */
extern const pb_field_t pb_Value_fields[16];

/* Maximum encoded size of messages (where known) */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
