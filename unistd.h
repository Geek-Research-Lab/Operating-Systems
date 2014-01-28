/* #include "unistd.h" */
/* returns 0 in child, process ID of child in parent
retuns -1 if error */
#define pid_t fork(void)
/* Exec Functions */
#define exec1 const char *pathname, const char *arg0, ..../*(char*) 0 */
#define execv const char *pathname, char *const argv[]
#define execle const char *pathname, const char *argv0, ...../*(char*) 0, char *const envp[] */
#define execve const char *pathname, char *const argv[], char *const envp[]
#define execlp const char *filename, const char *arg0, .... /*(char *) 0 */
#define execvp const char *filename, char *const argv[]
