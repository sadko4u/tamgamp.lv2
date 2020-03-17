/*
 * native.cpp
 *
 *  Created on: 28 февр. 2020 г.
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

#include <dsp/dsp.h>

#include <string.h>
#include <stdlib.h>

namespace native
{
    #define EXPORT1(function)            dsp::function = native::function;

    void start(dsp::context_t *ctx)
    {
        ctx->top        = 0;
    }

    void finish(dsp::context_t *ctx)
    {
        ctx->top        = 0;
    }

    dsp::info_t *info()
    {
        size_t size     =
                sizeof(dsp::info_t) +
                strlen(ARCH_STRING) + 1 +
                strlen("native cpu") + 1 +
                strlen("unknown") + 1;

        dsp::info_t *res = reinterpret_cast<dsp::info_t *>(malloc(size));
        if (res == NULL)
            return res;

        char *text  = reinterpret_cast<char *>(&res[1]);
        res->arch       = text;
        text            = stpcpy(text, ARCH_STRING) + 1;
        res->cpu        = text;
        text            = stpcpy(text, "native cpu") + 1;
        res->model      = text;
        text            = stpcpy(text, "unknown");
        res->features   = text; // Empty string

        return res;
    }

    void dsp_init()
    {
        EXPORT1(start);
        EXPORT1(finish);
        EXPORT1(info);
    }
}

