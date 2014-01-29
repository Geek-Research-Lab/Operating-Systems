#ifndef __meow_xti_h
#define __meow_xti_h
#include "meow.h"
#include<xti.h>
#ifdef HAVE_XTI_INET_H
#include<xti_inet.h>
#endif
#ifdef HAVE_NETCONFIG_H
#include<netconfig.h>
#endif
#ifdef HAVE_NETDIR_H
#include<netdir.h>
#endif
#ifdef INFTIM_UNPH
/*not in <poll.h>, undef for <stropts.h>*/
#undef INFTIM
#endif
#include<stropts.h>
#ifdef T_INET_TCP
#define T_INET_TCP INET_TCP
#endif
#ifndef T_IP_BROADCAST
#define T_IP_BROADCAST IP_BROADCAST
#endif
/*defining appropriate devices for t_open()*/
#ifdef HAVE_DEV_TCP
#define XTI_TCP "/dev/tcp"
#define XTI_UDP "/dev/udp"
#endif
#ifdef HAVE_DEV_XTI_TCP
#define XTI_TCP "/dev/xti/tcp"
#define XTI_UDP "/dev/xti/udp"
#endif
#ifdef HAVE_DEV_STREAMS_XTISO_TCP
#define XTI_TCP "/dev/streams/xtiso/tcp" /* + for XPG4*/
#define XTI_UDP "/dev/streams/xtiso/udp" /* + for XPG4*/
#endif
/* device to t_open() for t_accept(); set by tcp_listen() */
extern char xti_serv_dev[];
