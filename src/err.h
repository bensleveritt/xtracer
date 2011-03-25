/*

    This file is part of xtracer.

   	err.h
    Xtracer error codes

    Copyright (C) 2010, 2011
    Papadopoulos Nikolaos

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General
    Public License along with this library; if not, write to the
    Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301 USA

*/

#ifndef XTRACER_ERR_H_INCLUDED
#define XTRACER_ERR_H_INCLUDED


/* Auxiliary datatype */
typedef int xt_status_t;

#define XT_STATUS_OK						0x00
#define XT_STATUS_INVALID_CLI_ARGUMENT		0x01
#define XT_STATUS_INVALID_CLI_ARGCOMBN		0x02
#define XT_STATUS_INVALID_CLI_ARGLENGH		0x03
#define XT_STATUS_MISSING_CLI_ARGUMENT		0x04

#define XT_STATUS_INVALID_SCENE_FILE		0x05
#define XT_STATUS_MISSING_SCENE_FILE		0x06

#define XT_STATUS_FB_INVALID				0x07
#define XT_STATUS_FB_OUTOFBOUNDS			0x08

#define XT_STATUS_OUTDRV_FLIP_FAIL			0x30

#define XT_STATUS_NO_CAMERA					0x50

/* Net errors */
#define XT_STATUS_NET_INVALID_PORT			0xF0
#define XT_STATUS_NET_INVALID_PROTO			0xF1
#define XT_STATUS_NET_FAILURE_PROTOMAP		0xF2
#define XT_STATUS_NET_FAILURE_SOCKET_C		0xF3
#define XT_STATUS_NET_FAILURE_BIND			0xF4
#define XT_STATUS_NET_FAILURE_LISTEN		0xF5
#define XT_STATUS_NET_FAILURE_ACCEPT		0xF6
#define XT_STATUS_NET_FAILURE_THREAD		0xF7

#endif /* XTRACER_ERR_H_INCLUDED  */
