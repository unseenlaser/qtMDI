/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Sun Feb  1 12:40:11 2015. */

#ifndef PB_EMCCLASS_NPB_H_INCLUDED
#define PB_EMCCLASS_NPB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _pb_PmCartesian {
    bool has_x;
    double x;
    bool has_y;
    double y;
    bool has_z;
    double z;
} pb_PmCartesian;

typedef struct _pb_EmcPose {
    pb_PmCartesian tran;
    bool has_a;
    double a;
    bool has_b;
    double b;
    bool has_c;
    double c;
    bool has_u;
    double u;
    bool has_v;
    double v;
    bool has_w;
    double w;
} pb_EmcPose;

/* Default values for struct fields */

/* Initializer values for message structs */
#define pb_PmCartesian_init_default              {false, 0, false, 0, false, 0}
#define pb_EmcPose_init_default                  {pb_PmCartesian_init_default, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define pb_PmCartesian_init_zero                 {false, 0, false, 0, false, 0}
#define pb_EmcPose_init_zero                     {pb_PmCartesian_init_zero, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define pb_PmCartesian_x_tag                     10
#define pb_PmCartesian_y_tag                     20
#define pb_PmCartesian_z_tag                     30
#define pb_EmcPose_tran_tag                      10
#define pb_EmcPose_a_tag                         20
#define pb_EmcPose_b_tag                         30
#define pb_EmcPose_c_tag                         40
#define pb_EmcPose_u_tag                         50
#define pb_EmcPose_v_tag                         60
#define pb_EmcPose_w_tag                         70

/* Struct field encoding specification for nanopb */
extern const pb_field_t pb_PmCartesian_fields[4];
extern const pb_field_t pb_EmcPose_fields[8];

/* Maximum encoded size of messages (where known) */
#define pb_PmCartesian_size                      29
#define pb_EmcPose_size                          91

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
