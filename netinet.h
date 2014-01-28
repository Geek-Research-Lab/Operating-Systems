/* #include "netinet.h" */

/*returns value in network byte order*/
#define uint16_t htons(uint16_t host16bitvalue)
#define uint32_t hton1(uint32_t host32bitvalue)

/*returns value in host byte order */
#define uint16_t ntohs(uint16_t net16bitvalue)
#define uint32_t ntoh1(uint32_t net32bitvalue)
