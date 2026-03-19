/**
 * @file lv_draw_nanovg.h
 *
 */

#ifndef LV_DRAW_NANOVG_H
#define LV_DRAW_NANOVG_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "../../misc/lv_types.h"

#if LV_USE_DRAW_NANOVG

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize NanoVG rendering
 */
void lv_draw_nanovg_init(void);

/**
 * Set the framebuffer used for the root NanoVG layer.
 * Pass 0 to render to the OpenGL default framebuffer.
 * @param fb_id     OpenGL framebuffer id
 */
void lv_draw_nanovg_set_root_framebuffer(unsigned fb_id);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_DRAW_NANOVG*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_DRAW_NANOVG_H*/
