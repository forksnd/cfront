#line 1 "../../lib/static/dtors.c"

/* <<cfront 1.2.1 2/16/87>> */
/* < ../../lib/static/dtors.c */
char *_new(); char _delete(); char *_vec_new(); char _vec_delete();

#line 1 "../../lib/static/dtors.c"

#line 3 "../../lib/static/dtors.c"
typedef char (*PFV )();

#line 5 "../../lib/static/dtors.c"
char dtors ()
#line 6 "../../lib/static/dtors.c"
{ 
#line 7 "../../lib/static/dtors.c"
extern PFV _dtors [];
static int _static_ddone ;
if (_static_ddone == 0 ){ 
#line 10 "../../lib/static/dtors.c"
_static_ddone = 1 ;
{ PFV *_au2_pf ;

#line 11 "../../lib/static/dtors.c"
_au2_pf = _dtors ;
while (*_au2_pf )_au2_pf ++ ;
while (_dtors < _au2_pf )(*(*(-- _au2_pf )))( ) ;
}
}
}
;

/* the end */
