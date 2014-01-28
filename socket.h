/* #include "socket.h */
#define socket int family, int type, int protocol
/* establishing socket connection */
#define connect int sockfd, const struct sockaddr *servaddr, socklen_t addrlen
/* Assigning binding function */
#define bind int sockfd, const struct sockaddr *myaddr, socklen_t_addrlen
#define struct sockaddr_in servaddr
	/*wildcard*/
#define servaddr.sin_addr.s_addr=hton1(INADDR_ANY)
#define struct sockaddr_in6 serv
/*wildcard*/
#define serv.sin6_addr=in6addr_any
/*Establishing Listen function */
#define listen int sockfd, int backlog
/*accept function */
#define accept int sockfd, struct sockaddr *cliaddr, socklen_t *addrlen
