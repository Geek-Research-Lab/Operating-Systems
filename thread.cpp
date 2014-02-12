
/* README LINK : https://github.com/Geek-Research-Lab/Operating-Systems/blob/master/UNIX_SystemProgramming_Threading_README.txt
*/

#include"package.h"
/*package object*/
package1 pkgobj;
/*Function executed by each thread*/
void* func1(void* argp)
{
	int *rcp = new int(1);
	/* open a thread's outstream*/
	ofstream ofs ((char*)argp);
	if(!ofs)
		thr_exit((void**)&rcp);
	/* initializing a thread specific data */
	pkgobj.new_thread(0, ofs);
	/*Do work with package functions here*/
	pkgobj.chgErrno(100); /*changing thread's errno */
	/*Writing some data to a thread's outstream*/
	pkgobj.os() << (char*)argp << "["<< (int)thr_self() << "] finishes\n";
	/* thread terminates, set exit code. */
	*rcp = pkgobj.errno();
	thr_exit(rcp);
	return 0;
}
/* main thread's function */
int main(int argc, char** argv)
{
	thread_t tid;
	int *rc;
	/*creating thread for each command line argument */
	while(--argc>0)
		if(thr_create(0,0,func1,(void*)argv[argc],0,&tid)) perror("thr_create");
	/*Wait for all threads to terminate*/
	while(!thr_join(0,&tid,(void**)&rc))
	{
		/* delete thread's dynamic memory */
		cerr << "thread:" << (int)tid <<"exists.rc=" << *rc << endl;
		delete rc;
	}
	/*terminate the main thread*/
	thr_exit(0);
	return 0;
}
