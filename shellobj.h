#ifndef SHELLOBJ_H
#define SHELLOBJ_H
#include<iostream>
#include"thread.h"
#include<string.h>
typedef void* (*FNPTR)(void *);
class shellobj
{
	char* help_msg;
	FNPTR action;
	void* (*fnptr)(void*);
	int create_thread;
public:
	/*constructor*/
	shellobj(const char* msg, FNPTR func, int thr_ok=1)
	{
		help_msg = new char(strlen(msg)+1);
		strcpy(help_msg, msg);
		action = func;
		create_thread=thr_ok;
	};
	/*destructor*/
	~shellobj()
	{
		delete help_msg;
	};
	/*print object usage*/
	ostream& usage(ostream& os, int idx)
	{
		os << idx << ":" << help_msg << endl;
		return os;
	};
	//Do action
	int doit(void* argp)
	{
		if(create_thread)
		{
			thread_t tid;
			if(thr_create(0,0,action,argp,THR_DETACHED,&tid))
				return (int)tid;
		}
		else return(int)action(argp);
	};
};
#endif
