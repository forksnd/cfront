/*ident	"@(#)cfront:lib/static/_main.c	1.4" */
extern void _main()
{
	typedef void (*PFV)();
	extern PFV _ctors[];
	for (PFV* pf=_ctors; *pf; pf++) {
		(**pf)();
		*pf = 0; // permits main to be called recursively
	}
}
