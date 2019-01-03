# $FreeBSD$

PORTNAME=	libpru2
PORTVERSION=	g20190103
CATEGORIES=	devel

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=     libpru
GH_TAGNAME=	5c1c083


MAINTAINER=	freebsd@justmail.de
COMMENT=	Library to interface with PRUs

LICENSE=	BSD2CLAUSE

IGNORE_DragonFly=	only supported on FreeBSD
ONLY_FOR_ARCHS= armv6 armv7
ONLY_FOR_ARCHS_REASON= PRU devices only available on Texas Instruments ARM CPUs

USES=		cmake

.include <bsd.port.mk>
