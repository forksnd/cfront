#ident	"@(#)cls4:scratch/makefile	1.3"
###############################################################################
#
# C++ source for the C++ Language System, Release 3.0.  This product
# is a new release of the original cfront developed in the computer
# science research center of AT&T Bell Laboratories.
#
# Copyright (c) 1993  UNIX System Laboratories, Inc.
# Copyright (c) 1991, 1992  AT&T and UNIX System Laboratories, Inc.
# Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.
#
# THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE of AT&T and UNIX System
#	
# Laboratories, Inc.  The copyright notice above does not evidence
# any actual or intended publication of such source code.
#
###############################################################################
LIBFILES=_ctor..o _delete..o _dtor..o _handler..o \
_main..o _new..o _vec..o placenew..o _arr_map..o dtors..o pure..o exit..o 

SRCFILES=alloc..o Bits..o block..o dcl..o dcl2..o dcl3..o dcl4..o \
	del..o discrim..o error..o expand..o \
	expr..o expr2..o expr3..o find..o hash..o lalex..o lex..o main..o \
	norm..o norm2..o print..o print2..o repr..o simpl..o \
	simpl2..o size..o table..o template..o tree_copy..o \
	tree_walk..o typ..o typ2..o y.tab..o

BSD=

all:	libC.a munch cfront  
	mv libC.a munch cfront ..

libC.a:	$(LIBFILES)
	ar rv libC.a `lorder $(LIBFILES) | tsort 2> /dev/null`
	if test "$(BSD)"; then ranlib libC.a; fi

munch:	mnch/munch..c libC.a
	cc -o munch mnch/munch..c libC.a

# source no longer has any static ctor/dtor pairs 
cfront: libC.a munch $(SRCFILES)
	cc -o cfront $(SRCFILES) libC.a

_ctor..o:	lib/_ctor..c
	cc -c lib/_ctor..c

_delete..o:	lib/_delete..c
	cc -c lib/_delete..c

_dtor..o:	lib/_dtor..c
	cc -c lib/_dtor..c

_handler..o:	lib/_handler..c
	cc -c lib/_handler..c

_main..o:	lib/_main..c
	cc -c lib/_main..c

_new..o:	lib/_new..c
	cc -c lib/_new..c

_vec..o:	lib/_vec..c
	cc -c lib/_vec..c

placenew..o:	lib/placenew..c
	cc -c lib/placenew..c

_arr_map..o:	lib/_arr_map..c
	cc -c lib/_arr_map..c

dtors..o:	lib/dtors..c
	cc -c lib/dtors..c

pure..o:	lib/pure..c
	cc -c lib/pure..c

exit..o:	lib/exit..c
	cc -c lib/exit..c

alloc..o:	src/alloc..c
	cc -c src/alloc..c

Bits..o:	src/Bits..c
	cc -c src/Bits..c

block..o:	src/block..c
	cc -c src/block..c

dcl..o:	src/dcl..c
	cc -c src/dcl..c

dcl2..o:	src/dcl2..c
	cc -c src/dcl2..c

dcl3..o:	src/dcl3..c
	cc -c src/dcl3..c

dcl4..o:	src/dcl4..c
	cc -c src/dcl4..c

del..o:	src/del..c
	cc -c src/del..c

discrim..o:	src/discrim..c
	cc -c src/discrim..c

error..o:	src/error..c
	cc -c src/error..c

expand..o:	src/expand..c
	cc -c src/expand..c

expr..o:	src/expr..c
	cc -c src/expr..c

expr2..o:	src/expr2..c
	cc -c src/expr2..c

expr3..o:	src/expr3..c
	cc -c src/expr3..c

find..o:	src/find..c
	cc -c src/find..c

hash..o:	src/hash..c
	cc -c src/hash..c

lalex..o:	src/lalex..c
	cc -c src/lalex..c

lex..o:	src/lex..c
	cc -c src/lex..c

main..o:	src/main..c
	cc -c src/main..c

norm..o:	src/norm..c
	cc -c src/norm..c

norm2..o:	src/norm2..c
	cc -c src/norm2..c

print..o:	src/print..c
	cc -c src/print..c

print2..o:	src/print2..c
	cc -c src/print2..c

repr..o:	src/repr..c
	cc -c src/repr..c

simpl..o:	src/simpl..c
	cc -c src/simpl..c

simpl2..o:	src/simpl2..c
	cc -c src/simpl2..c

size..o:	src/size..c
	cc -c src/size..c

table..o:	src/table..c
	cc -c src/table..c

template..o:	src/template..c
	cc -c src/template..c

tree_copy..o:	src/tree_copy..c
	cc -c src/tree_copy..c

tree_walk..o:	src/tree_walk..c
	cc -c src/tree_walk..c

typ..o:	src/typ..c
	cc -c src/typ..c

typ2..o:	src/typ2..c
	cc -c src/typ2..c

y.tab..o:	src/y.tab..c
	cc -c src/y.tab..c
