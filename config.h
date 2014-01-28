#define CPU_VENDOR_OS "i386-pc-bsdi3.0"
/* <netconfig.h> 
#undef HAVE_NETCONFIG_H */
/* <netdir.h>
#undef HAVE_NETDIR_H */
/*<pthread.h>*/
#define HAVE_PTHREAD_H 1
/*strings.h>*/
#define HAVE_STRINGS_H 1
/*<xti_inet.h>
#undef HAVE_XTI_INET_H */
/* <sys/filio.h> */
#define HAVE_SYS_FILIO_H 1
/* <sys/ioctl.h> */
#define HAVE_SYS_IOCTL_H 1
/* <sys/select.h> */
#define HAVE_SYS_SELECT_H 1
/* <sys/sockio.h> */
#define HAVE_SYS_SOCKIO_H 1
/* <sys/sysctl.h> */
#define HAVE_SYS_SYSCTL_H 1
/* <sys/time.h> */
#define HAVE_SYS_TIME_H 1
/* <time.h>, <sys/time.h> */
#define TIME_WITH_SYS_TIME 1
#define HAVE_BZERO
#define HAVE_GETHOSTBYNAME2 1
/* #undef HAVE_PSELECT */
#define HAVE_VSNPRINTF 1
/* define if prototype function is header */
/*<netdb.h>
#undef HAVE_GETADDRINFO_PROTO */
/* <netdb.h>
#undef HAVE_GETNAMEINFO_PROTO */
/*<unistd.h>*/
#define HAVE_GETHOSTNAME_PROTO 1
/*<sys/resource.h>*/
#define HAVE_GETRUSAGE_PROTO 1
/*<netdb.h>*/
#define HAVE_HSTRERROR_PROTO 1
/*<net/if.h> 
#undef HAVE_TO_NAMETOINDEX_PROTO */
/*<arpa/inet.h>*/
#define HAVE_INET_ATON_PROTO 1
/*<arpa/int.h>*/
#define HAVE_INET_PTON_PROTO 1
/* <sys/stat.h>
#undef HAVE_ISFDTYPE_PROTO 
<sys/select.h>
#undef HAVE_PSELECT_PROTO
*/
/* <stdio.h> */
#define HAVE_SNPRINTF_PROTO 1
/* <sys/socket.h>
#undef HAVE_SOCKATMARK_PROTO
*/
/*Define if struct is defined */
/*<netdb.h>
#undef HAVEADDRINFO_STRUCT
*/
/* <net/if.h>
#undef HAVE_IF_NAMEINDEX_STRUCT */
/* <net/if_dl.h>*/
#define HAVE_SOCKADDR_DL_STRUCT 1
/*<time.h>*/
#define HAVE_TIMESPEC_STRUCT 1
/* sockaddr() has sa_len member */
#define HAVE_SOCKADDR_SA_LEN 1
/* msghdr() has msg_control member */
#define HAVE_MSGHDR_MSG_CONTROL 1
/* XTI devices for TCP and UDP */
/* most XTI 
#undef HAVE_DEV_TCP
*/
/* AIX
#undef HAVE_DEV_XTI_TCP
*/
/*OSF 3.2
#undef HAVE_DEV_STREAMS_XTISO_TCP
*/
/* <sys/types.h>
#undef int8_t
#undef int16_t
#undef int32_t
*/
/*<sys/types.h>*/
#define uint8_t unsigned char
/*<sys/types.h>*/
#define uint16_t unsigned short
/*<sys/types.h>*/
#define uint32_t unsigned int
/*<sys/types.h>
#undef size_t
#undef ssize_t */
/*<sys/socket.h>*/
#define socklen_t unsigned int
/*<sys/socket.h>*/
#define sa_family_t SA_FAMILY_T
#define SA_FAMILY_T uint8_t
/*<xti.h>*/
#define t_scalar_t int32_t
/*<xti.h>*/
#define t_uscalar_t uint32_t
/*IPV4 uppercase V name*/
#define IPV4
/*IPv4 lowecase v name*/
#define IPv4
/* IPV6 uppercase V name
#undef IPV6
IPv6 lowercase v name
#undef IPv6 */
/*UNIX domain sockets */
#define UNIXDOMAIN 1
/*UNIX domain sockets */
#define UNIXDomain 1
/*Multicasting support*/
#define MCAST 1
