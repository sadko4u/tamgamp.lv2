/*
 * debug.h
 *
 *  Created on: 8 янв. 2020 г.
 *      Author: Vladimir Sadovnikov <lsp.plugin@gmail.com>
 *
 * This file is part of tamgamp.lv2 <https://github.com/sadko4u/tamgamp.lv2>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef TAMGAMP_LV2_DEBUG_H_
#define TAMGAMP_LV2_DEBUG_H_

#include <stdio.h>

#define TRACE_ENABLE

// Check trace level
#ifdef TRACE_ENABLE
    #define plug_trace(msg, ...)        { fprintf(stderr, "[TRC][%s:%4d] %s: " msg "\n", __FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__); fflush(stderr); }

    // Debug is always turned on when trace is turned on
    #ifndef DEBUG_ENABLE
        #define DEBUG_ENABLE
    #endif /* DEBUG_ENABLE */
#else
    #define plug_trace(msg, ...)
#endif /* TRACE_ENABLE */

// Check debug level
#ifdef DEBUG_ENABLE
    #define plug_debug(msg, ...)        { fprintf(stderr, "[DBG][%s:%4d] %s: " msg "\n", __FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__); fflush(stderr); }
#else
    #define plug_debug(msg, ...)
#endif /* DEBUG_ENABLE */

#ifdef DEBUG_ENABLE
    #define plug_error(msg, ...)        { fprintf(stderr, "[ERR][%s:%4d] %s: " msg "\n", __FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__); fflush(stderr); }
    #define plug_warn(msg, ...)         { fprintf(stderr, "[WRN][%s:%4d] %s: " msg "\n", __FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__); fflush(stderr); }
    #define plug_info(msg, ...)         { fprintf(stderr, "[INF][%s:%4d] %s: " msg "\n", __FILE__, __LINE__, __FUNCTION__, ## __VA_ARGS__); fflush(stderr); }
#else
    #define plug_error(msg, ...)        { fprintf(stderr, "[ERR] " msg "\n", ## __VA_ARGS__); fflush(stderr); }
    #define plug_warn(msg, ...)         { fprintf(stderr, "[WRN] " msg "\n", ## __VA_ARGS__); fflush(stderr); }
    #define plug_info(msg, ...)         { fprintf(stderr, "[INF] " msg "\n", ## __VA_ARGS__); fflush(stderr); }
#endif /* DEBUG_ENABLE */

#endif /* TAMGAMP_LV2_DEBUG_H_ */
