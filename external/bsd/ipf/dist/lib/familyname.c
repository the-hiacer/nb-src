/*	$NetBSD: familyname.c,v 1.1.1.1 2012/03/23 21:20:08 christos Exp $	*/

#include "ipf.h"

const char *familyname(int family)
{
	if (family == AF_INET)
		return "inet";
#ifdef AF_INET6
	if (family == AF_INET6)
		return "inet6";
#endif
	return "unknown";
}
