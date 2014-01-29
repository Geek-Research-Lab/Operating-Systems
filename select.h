/* #include "select.h" */

/* returns positive count of ready descriptions,
returns 0 if timeout,
returns -1 if error */
#define int select int maxfdp1, fd_set *readset, fd_set *writeset, fd_set *exceptset, const struct timeval *timeout;
#define struct timeval
		/*seconds*/
		long tv_sec;
		/*micro-seconds*/
		long tv_usec;
	
		/*four macros*/
#define FD_SET()
#define FD_CLR()
#define FD_ISSET()
		/*clear all bite in fdset*/
void FD_ZERO(fd_set *fdset);
		/*turn on the bit for fd in fdset*/
		void FD_SET(int fd, fd_set *fdset);
		/*turn off the bit for fd in fdset*/
		void FD_CLR(int fd, fd_set *fdset);
		/* Is the bit for fd on in fdset? */
		FD_ISSET(int fd, fd_set *fdset);
/*Defining a variable of type fd_set */
		/*Initialize the set : all bits off */
#define FD_ZERO()
#define FD_SET()
FD_ZERO(&rset);
			/* turn on bit for fd1 */
FD_SET(1, &rset);
		/* turn on bit for fd4 */
		FD_SET(4, &rset);
		/* turn on bit for fd5 */
		FD_SET(5, &rset);
