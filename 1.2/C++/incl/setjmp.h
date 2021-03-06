/* @(#) setjmp.h 1.3 2/16/87 11:02:29 */
/*ident	"@(#)cfront:incl/setjmp.h	1.3"*/

#ifndef SETJMPH
#define SETJMPH

#ifndef _JBLEN

#if pyr
#define _JBLEN 6
#endif

#if sun
#define _JBLEN 15
#endif

#if vax | M32 | u3b15 | u3b5 | u3b2
#define _JBLEN	10
#endif

#if pdp11
#define _JBLEN	3
#endif

#if u370
#define _JBLEN	4
#endif

#if u3b
#define _JBLEN	11
#endif

typedef int jmp_buf[_JBLEN];

extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);

#endif
#endif

