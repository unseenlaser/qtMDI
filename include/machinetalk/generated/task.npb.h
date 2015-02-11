/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Sun Feb  1 12:40:12 2015. */

#ifndef PB_TASK_NPB_H_INCLUDED
#define PB_TASK_NPB_H_INCLUDED
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
typedef struct _pb_TaskPlanBlockDelete {
    bool state;
} pb_TaskPlanBlockDelete;

typedef struct _pb_TaskPlanExecute {
    pb_callback_t command;
    bool has_line;
    int32_t line;
} pb_TaskPlanExecute;

typedef struct _pb_TaskPlanOpen {
    pb_callback_t filename;
} pb_TaskPlanOpen;

typedef struct _pb_TaskPlanOptionalStop {
    bool state;
} pb_TaskPlanOptionalStop;

typedef struct _pb_TaskPlanReply {
    pb_ContainerType cmd;
    pb_callback_t errormsg;
} pb_TaskPlanReply;

typedef struct _pb_TaskReply {
    uint32_t ticket;
} pb_TaskReply;

typedef struct _pb_TicketUpdate {
    uint32_t cticket;
    pb_RCS_STATUS status;
    pb_callback_t text;
} pb_TicketUpdate;

/* Default values for struct fields */

/* Initializer values for message structs */
#define pb_TaskPlanExecute_init_default          {{{NULL}, NULL}, false, 0}
#define pb_TaskPlanBlockDelete_init_default      {0}
#define pb_TaskPlanOptionalStop_init_default     {0}
#define pb_TaskPlanOpen_init_default             {{{NULL}, NULL}}
#define pb_TaskPlanReply_init_default            {(pb_ContainerType)0, {{NULL}, NULL}}
#define pb_TaskReply_init_default                {0}
#define pb_TicketUpdate_init_default             {0, (pb_RCS_STATUS)0, {{NULL}, NULL}}
#define pb_TaskPlanExecute_init_zero             {{{NULL}, NULL}, false, 0}
#define pb_TaskPlanBlockDelete_init_zero         {0}
#define pb_TaskPlanOptionalStop_init_zero        {0}
#define pb_TaskPlanOpen_init_zero                {{{NULL}, NULL}}
#define pb_TaskPlanReply_init_zero               {(pb_ContainerType)0, {{NULL}, NULL}}
#define pb_TaskReply_init_zero                   {0}
#define pb_TicketUpdate_init_zero                {0, (pb_RCS_STATUS)0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define pb_TaskPlanBlockDelete_state_tag         10
#define pb_TaskPlanExecute_command_tag           10
#define pb_TaskPlanExecute_line_tag              30
#define pb_TaskPlanOpen_filename_tag             10
#define pb_TaskPlanOptionalStop_state_tag        10
#define pb_TaskPlanReply_cmd_tag                 10
#define pb_TaskPlanReply_errormsg_tag            20
#define pb_TaskReply_ticket_tag                  10
#define pb_TicketUpdate_cticket_tag              10
#define pb_TicketUpdate_status_tag               20
#define pb_TicketUpdate_text_tag                 30

/* Struct field encoding specification for nanopb */
extern const pb_field_t pb_TaskPlanExecute_fields[3];
extern const pb_field_t pb_TaskPlanBlockDelete_fields[2];
extern const pb_field_t pb_TaskPlanOptionalStop_fields[2];
extern const pb_field_t pb_TaskPlanOpen_fields[2];
extern const pb_field_t pb_TaskPlanReply_fields[3];
extern const pb_field_t pb_TaskReply_fields[2];
extern const pb_field_t pb_TicketUpdate_fields[4];

/* Maximum encoded size of messages (where known) */
#define pb_TaskPlanBlockDelete_size              2
#define pb_TaskPlanOptionalStop_size             2
#define pb_TaskReply_size                        5

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif