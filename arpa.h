/* #include "arpa.h" */
/*returns 1 if string was valid 
returns 0 if error */
#define inet_aton const char *strptr, struct in_addr *addrptr
/* returns 32 bit binary network byte ordered IPv4 address; INADDR_NONE if error */
#define in_addr_t inet_addr(const char *strptr)
/*returns pointer to dotted decimal string */
char *inet_ntoa struct in_addr inaddr

#define inet_pton()
	/* returns 1 if OK, 0 if input not a valid presentation format, -1 if error */
inet_pton(int family, const char *strptr, void *addrptr)
/*returns pointer to result if OK and if error, then returns NULL */
const char *inet_ntop(int family, const void *addrptr, char *strptr, size_t len)
