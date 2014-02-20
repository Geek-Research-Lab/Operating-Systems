#include "multithreading_proj.h"
#include<Rpc.h>
/* RPC server object pointer */
RPC_svc *svcp;
/* RPC function to execute one user's shell command */
int execshell(SVCXPRT* xtrp)
{
	static int res=0, rc=RPC_SUCCESS;
	char *shell_cmd=0;
	/*Get user's shell command from RPC client*/
	if(svcp->getargs(xtrp,(xdrproc_t)xdr_string,(caddr_t)&shell_cmd)!=RPC_SUCCESS)
	return -1;
	/*execute the command via system function*/
	res=system(shell_cmd);
	/* send execution result to RPC client*/
	if(svcp->reply(xtrp,(xdrproc_t)xdr_int,(caddr_t)&res)!=RPC_SUCCESS)
		rc=-2;
	return rc;
}
/* RPC server main function */
int main(int argc, char* argv[])
{
	/* create a RPC server object for the execshell function */
	RPC_svc *svcp = new RPC_svc(SHELLPROG, SHELLVER, argc==2 ? argv[1] : "netpath");
	if(!svcp|| !svcp->good())
		return 1;
	/*wait for RPC client requests*/
	if(svcp->run_func(EXECSHELL, execshell)) return 3;
		return 0;
}
