/* @(#) string.h 1.5 2/16/87 11:02:34 */
/*ident	"@(#)cfront:incl/string.h	1.5"*/

#ifndef C_STRINGH
#define C_STRINGH

extern char
	*strcpy(char*, const char*),
	*strncpy(char*, const char*, int),
	*strcat(char*, const char*),
	*strncat(char*, const char*, int),
	*strchr(const char*, char),
	*strrchr(const char*, char),
	*strpbrk(const char*, const char*),
	*strtok(char*, const char*),
	*strdup(const char*);
extern int
	strcmp(const char*, const char*),
	strncmp(const char*, const char*, int),
	strlen(const char*),
	strspn(const char*, const char*),
	strcspn(const char*, const char*);
extern char
	*memccpy(char *, const char *, int, int),
	*memchr(const char *, int, int),
	*memcpy(char *, const char *, int),
	*memset(char *, int, int);
extern int memcmp(const char *, const char *, int);

#endif

