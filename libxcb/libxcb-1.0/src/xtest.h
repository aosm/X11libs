/*
 * This file generated automatically from xtest.xml by c-client.xsl using XSLT.
 * Edit at your peril.
 */

/**
 * @defgroup XCB_Test_API XCB Test API
 * @brief Test XCB Protocol Implementation.
 * @{
 **/

#ifndef __XTEST_H
#define __XTEST_H

#include "xcb.h"
#include "xproto.h"

#define XCB_TEST_MAJOR_VERSION 2
#define XCB_TEST_MINOR_VERSION 1
  
extern xcb_extension_t xcb_test_id;

/**
 * @brief xcb_test_get_version_cookie_t
 **/
typedef struct xcb_test_get_version_cookie_t {
    unsigned int sequence; /**<  */
} xcb_test_get_version_cookie_t;

/** Opcode for xcb_test_get_version. */
#define XCB_TEST_GET_VERSION 0

/**
 * @brief xcb_test_get_version_request_t
 **/
typedef struct xcb_test_get_version_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
    uint8_t  major_version; /**<  */
    uint8_t  pad0; /**<  */
    uint16_t minor_version; /**<  */
} xcb_test_get_version_request_t;

/**
 * @brief xcb_test_get_version_reply_t
 **/
typedef struct xcb_test_get_version_reply_t {
    uint8_t  response_type; /**<  */
    uint8_t  major_version; /**<  */
    uint16_t sequence; /**<  */
    uint32_t length; /**<  */
    uint16_t minor_version; /**<  */
} xcb_test_get_version_reply_t;

typedef enum xcb_test_cursor_t {
    XCB_TEST_CURSOR_NONE = 0,
    XCB_TEST_CURSOR_CURRENT = 1
} xcb_test_cursor_t;

/**
 * @brief xcb_test_compare_cursor_cookie_t
 **/
typedef struct xcb_test_compare_cursor_cookie_t {
    unsigned int sequence; /**<  */
} xcb_test_compare_cursor_cookie_t;

/** Opcode for xcb_test_compare_cursor. */
#define XCB_TEST_COMPARE_CURSOR 1

/**
 * @brief xcb_test_compare_cursor_request_t
 **/
typedef struct xcb_test_compare_cursor_request_t {
    uint8_t      major_opcode; /**<  */
    uint8_t      minor_opcode; /**<  */
    uint16_t     length; /**<  */
    xcb_window_t window; /**<  */
    xcb_cursor_t cursor; /**<  */
} xcb_test_compare_cursor_request_t;

/**
 * @brief xcb_test_compare_cursor_reply_t
 **/
typedef struct xcb_test_compare_cursor_reply_t {
    uint8_t  response_type; /**<  */
    uint8_t  same; /**<  */
    uint16_t sequence; /**<  */
    uint32_t length; /**<  */
} xcb_test_compare_cursor_reply_t;

/** Opcode for xcb_test_fake_input. */
#define XCB_TEST_FAKE_INPUT 2

/**
 * @brief xcb_test_fake_input_request_t
 **/
typedef struct xcb_test_fake_input_request_t {
    uint8_t      major_opcode; /**<  */
    uint8_t      minor_opcode; /**<  */
    uint16_t     length; /**<  */
    uint8_t      type; /**<  */
    uint8_t      detail; /**<  */
    uint8_t      pad0[2]; /**<  */
    uint32_t     time; /**<  */
    xcb_window_t window; /**<  */
    uint8_t      pad1[8]; /**<  */
    uint16_t     rootX; /**<  */
    uint16_t     rootY; /**<  */
    uint8_t      pad2[7]; /**<  */
    uint8_t      deviceid; /**<  */
} xcb_test_fake_input_request_t;

/** Opcode for xcb_test_grab_control. */
#define XCB_TEST_GRAB_CONTROL 3

/**
 * @brief xcb_test_grab_control_request_t
 **/
typedef struct xcb_test_grab_control_request_t {
    uint8_t  major_opcode; /**<  */
    uint8_t  minor_opcode; /**<  */
    uint16_t length; /**<  */
    uint8_t  impervious; /**<  */
    uint8_t  pad0[3]; /**<  */
} xcb_test_grab_control_request_t;


/*****************************************************************************
 **
 ** xcb_test_get_version_cookie_t xcb_test_get_version
 ** 
 ** @param xcb_connection_t *c
 ** @param uint8_t           major_version
 ** @param uint16_t          minor_version
 ** @returns xcb_test_get_version_cookie_t
 **
 *****************************************************************************/
 
xcb_test_get_version_cookie_t
xcb_test_get_version (xcb_connection_t *c  /**< */,
                      uint8_t           major_version  /**< */,
                      uint16_t          minor_version  /**< */);


/*****************************************************************************
 **
 ** xcb_test_get_version_cookie_t xcb_test_get_version_unchecked
 ** 
 ** @param xcb_connection_t *c
 ** @param uint8_t           major_version
 ** @param uint16_t          minor_version
 ** @returns xcb_test_get_version_cookie_t
 **
 *****************************************************************************/
 
xcb_test_get_version_cookie_t
xcb_test_get_version_unchecked (xcb_connection_t *c  /**< */,
                                uint8_t           major_version  /**< */,
                                uint16_t          minor_version  /**< */);


/*****************************************************************************
 **
 ** xcb_test_get_version_reply_t * xcb_test_get_version_reply
 ** 
 ** @param xcb_connection_t               *c
 ** @param xcb_test_get_version_cookie_t   cookie
 ** @param xcb_generic_error_t           **e
 ** @returns xcb_test_get_version_reply_t *
 **
 *****************************************************************************/
 
xcb_test_get_version_reply_t *
xcb_test_get_version_reply (xcb_connection_t               *c  /**< */,
                            xcb_test_get_version_cookie_t   cookie  /**< */,
                            xcb_generic_error_t           **e  /**< */);


/*****************************************************************************
 **
 ** xcb_test_compare_cursor_cookie_t xcb_test_compare_cursor
 ** 
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @param xcb_cursor_t      cursor
 ** @returns xcb_test_compare_cursor_cookie_t
 **
 *****************************************************************************/
 
xcb_test_compare_cursor_cookie_t
xcb_test_compare_cursor (xcb_connection_t *c  /**< */,
                         xcb_window_t      window  /**< */,
                         xcb_cursor_t      cursor  /**< */);


/*****************************************************************************
 **
 ** xcb_test_compare_cursor_cookie_t xcb_test_compare_cursor_unchecked
 ** 
 ** @param xcb_connection_t *c
 ** @param xcb_window_t      window
 ** @param xcb_cursor_t      cursor
 ** @returns xcb_test_compare_cursor_cookie_t
 **
 *****************************************************************************/
 
xcb_test_compare_cursor_cookie_t
xcb_test_compare_cursor_unchecked (xcb_connection_t *c  /**< */,
                                   xcb_window_t      window  /**< */,
                                   xcb_cursor_t      cursor  /**< */);


/*****************************************************************************
 **
 ** xcb_test_compare_cursor_reply_t * xcb_test_compare_cursor_reply
 ** 
 ** @param xcb_connection_t                  *c
 ** @param xcb_test_compare_cursor_cookie_t   cookie
 ** @param xcb_generic_error_t              **e
 ** @returns xcb_test_compare_cursor_reply_t *
 **
 *****************************************************************************/
 
xcb_test_compare_cursor_reply_t *
xcb_test_compare_cursor_reply (xcb_connection_t                  *c  /**< */,
                               xcb_test_compare_cursor_cookie_t   cookie  /**< */,
                               xcb_generic_error_t              **e  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_test_fake_input_checked
 ** 
 ** @param xcb_connection_t *c
 ** @param uint8_t           type
 ** @param uint8_t           detail
 ** @param uint32_t          time
 ** @param xcb_window_t      window
 ** @param uint16_t          rootX
 ** @param uint16_t          rootY
 ** @param uint8_t           deviceid
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_test_fake_input_checked (xcb_connection_t *c  /**< */,
                             uint8_t           type  /**< */,
                             uint8_t           detail  /**< */,
                             uint32_t          time  /**< */,
                             xcb_window_t      window  /**< */,
                             uint16_t          rootX  /**< */,
                             uint16_t          rootY  /**< */,
                             uint8_t           deviceid  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_test_fake_input
 ** 
 ** @param xcb_connection_t *c
 ** @param uint8_t           type
 ** @param uint8_t           detail
 ** @param uint32_t          time
 ** @param xcb_window_t      window
 ** @param uint16_t          rootX
 ** @param uint16_t          rootY
 ** @param uint8_t           deviceid
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_test_fake_input (xcb_connection_t *c  /**< */,
                     uint8_t           type  /**< */,
                     uint8_t           detail  /**< */,
                     uint32_t          time  /**< */,
                     xcb_window_t      window  /**< */,
                     uint16_t          rootX  /**< */,
                     uint16_t          rootY  /**< */,
                     uint8_t           deviceid  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_test_grab_control_checked
 ** 
 ** @param xcb_connection_t *c
 ** @param uint8_t           impervious
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_test_grab_control_checked (xcb_connection_t *c  /**< */,
                               uint8_t           impervious  /**< */);


/*****************************************************************************
 **
 ** xcb_void_cookie_t xcb_test_grab_control
 ** 
 ** @param xcb_connection_t *c
 ** @param uint8_t           impervious
 ** @returns xcb_void_cookie_t
 **
 *****************************************************************************/
 
xcb_void_cookie_t
xcb_test_grab_control (xcb_connection_t *c  /**< */,
                       uint8_t           impervious  /**< */);


#endif

/**
 * @}
 */
