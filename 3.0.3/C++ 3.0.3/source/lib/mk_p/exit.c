/*ident	"@(#)cls4:lib/static/exit.c	1.1" */
/*******************************************************************************
 
C++ source for the C++ Language System, Release 3.0.  This product
is a new release of the original cfront developed in the computer
science research center of AT&T Bell Laboratories.

Copyright (c) 1991 AT&T and UNIX System Laboratories, Inc.
Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.

THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE of AT&T and UNIX System
Laboratories, Inc.  The copyright notice above does not evidence
any actual or intended publication of such source code.

*******************************************************************************/

extern "C" {
extern void _exit(int);
extern void _cleanup();
extern void monitor(...);
}
extern void __dtors();

extern "C" {
extern void exit(int i);
}

extern void exit(int i)
{
	__dtors();
	_cleanup();
	monitor(0);
	_exit(i);
}
