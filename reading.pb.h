/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Wed Sep 21 12:27:57 2016. */

#ifndef PB_READING_PB_H_INCLUDED
#define PB_READING_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _ReadingMessage {
    bool has_sensor;
    int32_t sensor;
    bool has_value;
    double value;
    bool has_average_over_seconds;
    int64_t average_over_seconds;
    bool has_longitude;
    double longitude;
    bool has_latitude;
    double latitude;
    bool has_unit;
    int32_t unit;
    bool has_time;
    int64_t time;
/* @@protoc_insertion_point(struct:ReadingMessage) */
} ReadingMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define ReadingMessage_init_default              {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define ReadingMessage_init_zero                 {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define ReadingMessage_sensor_tag                1
#define ReadingMessage_value_tag                 2
#define ReadingMessage_average_over_seconds_tag  3
#define ReadingMessage_longitude_tag             4
#define ReadingMessage_latitude_tag              5
#define ReadingMessage_unit_tag                  6
#define ReadingMessage_time_tag                  7

/* Struct field encoding specification for nanopb */
extern const pb_field_t ReadingMessage_fields[8];

/* Maximum encoded size of messages (where known) */
#define ReadingMessage_size                      71

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define READING_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif