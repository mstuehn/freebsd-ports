# $FreeBSD$

PORTNAME=		doorbell
PORTVERSION=	g20190504
CATEGORIES=		misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=     doorbell
GH_TAGNAME=	185da1b

MAINTAINER=	freebsd@justmail.de
COMMENT=	Application for playing doorbell sound on NanoPI

LICENSE=	BSD2CLAUSE

IGNORE_DragonFly=	only supported on FreeBSD
NOT_FOR_ARCHS= i386 amd64
NOT_FOR_ARCHS_REASON= no GPIO

LIB_DEPENDS= libjsoncpp.so:devel/jsoncpp \
		libmosquitto.so:net/mosquitto

USES=	gmake

USE_RC_SUBR=	${PORTNAME:S/-/_/}

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/share/doorbell/
	${INSTALL_DATA} ${WRKSRC}/data/DoorBell.wav ${STAGEDIR}/${PREFIX}/share/doorbell/
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_DATA} ${WRKSRC}/src/config.json ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_PROGRAM} ${WRKSRC}/bin/doorbell ${STAGEDIR}/${PREFIX}/bin/doorbell

.include <bsd.port.mk>
