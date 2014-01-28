/* #include "netinet.h" */

/*returns value in network byte order*/
#define uint16_t htons(uint16_t host16bitvalue)
#define uint32_t hton1(uint32_t host32bitvalue)

/*returns value in host byte order */
#define uint16_t ntohs(uint16_t net16bitvalue)
#define uint32_t ntoh1(uint32_t net32bitvalue)

/* Defining IPV4 structure */
struct in_addr
{
	/*32 bit IPV4 address, network byte ordered */
#define in_addr_t s_addr;
};
struct sockaddr_in
{
	/* length of structure (16) */
	uint8_t sin_len;
	/* AF_INET */
	sa_family_t sin_family;
	/* 16 bit TCP or UDP port number, network byte ordered */
#define in_port_t sin_port;
	/* 32 bit IPV4 address, network byte ordered */
	struct in_addr sin_addr;
	/*unused*/
	char sin_zero[8];
};

/*Defining IPV6 structure */
struct in6_addr
{
	/* 128 bit IPV6 address, network byte ordered */
	uint8_t s6_addr[16];
};
/*compile time errors required */
#define SIN6_LEN
struct sockaddr_in6
{
	/*length of this struct (24)*/
	uint8_t sin6_len;
	/* AF_INET6 */
	sa_family_t sin6_family;
	/* transport layer port# , network byte ordered */
#define in_port_t sin6_port;
	/* priority and flow level, network byte ordered */
#define uint32_t sin6_flowinfo;
	/* IPV6 address, network byte ordered*/
	struct in6_addr sin6_addr;
};
