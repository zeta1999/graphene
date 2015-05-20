/* -*- mode:c; c-file-style:"k&r"; c-basic-offset: 4; tab-width:4; indent-tabs-mode:nil; mode:auto-fill; fill-column:78; -*- */
/* vim: set ts=4 sw=4 et tw=78 fo=cqt wm=0: */

/* Copyright (C) 2014 OSCAR lab, Stony Brook University
   This file is part of Graphene Library OS.

   Graphene Library OS is free software: you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   Graphene Library OS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef PAL_SECURITY_H
#define PAL_SECURITY_H

#include <linux/limits.h>

#include "pal.h"

struct r_debug;

extern struct pal_sec {
    unsigned long       pipe_prefix;
    unsigned short      mcast_port;
    unsigned int        current_pid;
    void *              user_addr_base;
    unsigned int        rand_gen;
    void                (*_dl_debug_state) (void);
    struct r_debug *    _r_debug;
} pal_sec;

#define GRAPHENE_TEMPDIR        "/tmp/graphene"
#define GRAPHENE_PIPEDIR        GRAPHENE_TEMPDIR "/pipes"

#define PROC_INIT_FD    255

#define MCAST_GROUP "239.0.0.1"

#define RANDGEN_DEVICE          "/dev/urandom"

#endif /* PAL_SECURITY_H */
