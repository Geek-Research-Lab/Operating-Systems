#ifndef PACKAGE_H
#define PACKAGE_H
#include<fstream>
#include<stdio.h>
#include"Threading_Project.h"
/*record to store a set of thread specific data*/
class thr_data
{
	/*Threading_Project program for a thread*/ /*errno*/
	int errno;
	/*output stream for a thread*/
	ofstream& ofs;
public:
	/*constructor*/
	thr_data(int errval, ofstream& os) : errno(errval),ofs(os){};
	/*destructor*/
	~thr_data()
	{
		ofs.close();
	};
	/*return a thread's errno*/
	int& errval()
	{
		return errno;
	};
	/*return a thread's ostream handle */
	ofstream& os()
	{
		return ofs;
	};
	/*Utility package class*/
	class package1
	{
		/*key for all threads*/
		thread_key_t key;
		/*default output stream*/
		ofstream ocerr;
	public:
		/* Thread dies after calling. Discarding a thread specific data */
		friend void destr(void* valueP)
		{
			thr_data *pDat = (thr_data*)valueP;
			delete pDat;
		};
		/*constructor*/
		package1() : ocerr("err.log")
		{
			if(thr_keycreate(&key,destr)) perror("thr_create");
		};
		/*destructor*/
		~package1()
		{
			ocerr.close();
		};
		/*Calling done when each thread starts*/
		void new_thread(int errval, ofstream& os)
		{
			thr_data *pDat;
			/*Allocation of a thread specific data*/
			pDat = new thr_data(errval, os);
			if(thr_setspecific(key,pDat)) perror("thr_setspecific");
		};
		/*set a thread's errno and return a value */
		int set_errno(int rc)
		{
			thr_data *pDat;
			if(thr_getspecific(key,(void**)&pDat))
				perror("thr_getspecific");
			else pDat->errval() = rc;
			return rc==0 ? 0 : -1;
		};
		/* return current errno value for a thread*/
		int errno()
		{
			thr_data *pDat;
			if(!thr_getspecific(key,(void**)&pDat))
				return pDat->errval();
			else perror("thr_getspecific");
			return -1;
		};
		/*return a thread's outstream handle*/
		ofstream& os()
		{
			thr_data *pDat;
			if(!thr_getspecific(key,(void**)&pDat))
				return pDat->os();
			perror("thr_getspecific");
			return ocerr;
		};
		/*a sample package function*/
		int chgErrno(int new_val)
		{
			return set_errno(new_val +int(thr_self());
		};
	};
#endif /*package.h*/

