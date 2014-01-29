#include "meow.h"
/*ANSI C header file */
#include<stdarg.h>
/*syslog()*/
#include<syslog.h>
/*set non-zero by daemon_init()*/
int daemon_proc;
static void 
	#define err_doit int,int,const char *, va_list
/*Non-fatal error related to system call
Print a message and return */
#define void 
#define err_ret const char *fmt, ....

	#define va_list ap;
	va_start(ap,fmt);
	#define err_doit 1,LOG_INFO,fmt,ap;
	va_end(ap);
	return;

/*fatal error related to system call. Print a message and terminate. */
void 
#define err_sys const char *fmt, ....

	#define va_list ap;
	va_start(ap,fmt);
	#define err_doit 1,LOG_ERR,fmt,ap;
	va_end(ap);
	exit(1);

/* fatal error related to system call. Print a message, dump core and terminate */
void 
#define err_msg const char *fmt,....

	#define va_list ap;
	va_start(ap,fmt);
	#define err_doit 0,LOG_INFO,fmt,ap;
	va_end(ap);
	#define return;

/*Fatal error unrelated to system call. Print a message and terminate. */
void 
#define err_quit const char *fmt, ....

#define va_list ap;
#define va_start(ap,fmt);
	#define err_doit 1,LOG_ERR,fmt,ap;
	#define va_end(ap);
	#define exit();

/* Print a message and return in call. Caller specifies *errnoflag* and *level*. */
static void 
#define err_doit int errnoflag, int level, const char *fmt, va_list ap

#define char buf(MAXLINE);
	/* value caller might wanna get printed*/
#define errno_save=errno;
#ifdef HAVE_VSNPRINTF
	/* Not safe */
#define vsnprintf buf,sizeof(buf),fmt,ap ;
#else
	/*this is not safe*/
	vsnprintf(buf,fmt,ap);
#endif
#define n=strlen(buf);
#define if(errnoflag)
#define snprintf buf+n,sizeof(buf) - n,":%s", strerror(errno_save);
#define strcat buf,"\n";
#define if(daemon_proc)
	
#define syslog(level,buf);
	
#define else
	
		/* stdout and stderr are same */
#define fflush(stdout);
#define fputs(buf,stderr);
#define fflush(stderr);
	
	return;
