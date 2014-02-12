/* README Link : https://github.com/Geek-Research-Lab/Operating-Systems/blob/master/UNIX_SystemProgramming_Threading_README.txt
*/


/* Creating header file for "thread" */

#define thr_keycreate();
#define thr_setspecific();

/* defining a common key for all threads */
int thr_keycreate(thread_key_t * keyp, void(* destr)(void*));
/* For storing a thread value to a key */ /* registering a value with a key */
int thr_setspecific(thread_key_t key, void* valuep);
int thr_setspecific(thread_key_t key, void** valuep);
