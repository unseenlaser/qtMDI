/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Sun Feb  1 12:40:11 2015. */

#ifndef PB_LOG_NPB_H_INCLUDED
#define PB_LOG_NPB_H_INCLUDED
#include <pb.h>

#include <machinetalk/generated/types.npb.h>
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _pb_LogMessage {
    pb_MsgOrigin origin;
    int32_t pid;
    pb_MsgLevel level;
    pb_callback_t tag;
    pb_callback_t text;
} pb_LogMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define pb_LogMessage_init_default               {(pb_MsgOrigin)0, 0, (pb_MsgLevel)0, {{NULL}, NULL}, {{NULL}, NULL}}
#define pb_LogMessage_init_zero                  {(pb_MsgOrigin)0, 0, (pb_MsgLevel)0, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define pb_LogMessage_origin_tag                 10
#define pb_LogMessage_pid_tag                    20
#define pb_LogMessage_level_tag                  30
#define pb_LogMessage_tag_tag                    40
#define pb_LogMessage_text_tag                   50

/* Struct field encoding specification for nanopb */
extern const pb_field_t pb_LogMessage_fields[6];

/* Maximum encoded size of messages (where known) */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
