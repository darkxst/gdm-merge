/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2007 William Jon McCann <mccann@jhu.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */


#ifndef __GDM_STATIC_DISPLAY_H
#define __GDM_STATIC_DISPLAY_H

#include <glib-object.h>
#include "gdm-display.h"

G_BEGIN_DECLS

#define GDM_TYPE_STATIC_DISPLAY         (gdm_static_display_get_type ())
#define GDM_STATIC_DISPLAY(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), GDM_TYPE_STATIC_DISPLAY, GdmStaticDisplay))
#define GDM_STATIC_DISPLAY_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), GDM_TYPE_STATIC_DISPLAY, GdmStaticDisplayClass))
#define GDM_IS_STATIC_DISPLAY(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), GDM_TYPE_STATIC_DISPLAY))
#define GDM_IS_STATIC_DISPLAY_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), GDM_TYPE_STATIC_DISPLAY))
#define GDM_STATIC_DISPLAY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GDM_TYPE_STATIC_DISPLAY, GdmStaticDisplayClass))

typedef struct GdmStaticDisplayPrivate GdmStaticDisplayPrivate;

typedef struct
{
        GdmDisplay               parent;
        GdmStaticDisplayPrivate *priv;
} GdmStaticDisplay;

typedef struct
{
        GdmDisplayClass   parent_class;

} GdmStaticDisplayClass;

GType               gdm_static_display_get_type                (void);
GdmDisplay *        gdm_static_display_new                     (int display_number);


G_END_DECLS

#endif /* __GDM_STATIC_DISPLAY_H */
