/* #include "arpa.h" */
/*returns 1 if string was valid 
returns 0 if error */
#define inet_aton const char *strptr, struct in_addr *addrptr
/* returns 32 bit binary network byte ordered IPv4 address; INADDR_NONE if error */
#define in_addr_t inet_addr(const char *strptr)
/*returns pointer to dotted decimal string */
char *inet_ntoa struct in_addr inaddr
