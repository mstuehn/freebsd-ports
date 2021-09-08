# $FreeBSD$

PORTNAME=	doorbell
PORTVERSION=	g20210908
CATEGORIES=	misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=     doorbell
GH_TAGNAME=	8d15e8

MAINTAINER=	freebsd@justmail.de
COMMENT=	Application for playing doorbell sound

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS= libevdev>0:devel/libevdev \
		evdev-proto>0:devel/evdev-proto

LIB_DEPENDS= libjsoncpp.so:devel/jsoncpp \
		libmosquitto.so:net/mosquitto

USES=	gmake

USE_RC_SUBR=	${PORTNAME:S/-/_/}

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/share/doorbell/
	${INSTALL_DATA} ${WRKSRC}/data/DoorBell.wav ${STAGEDIR}/${PREFIX}/share/doorbell/
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_DATA} files/config.json ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_PROGRAM} ${WRKSRC}/bin/doorbell ${STAGEDIR}/${PREFIX}/bin/doorbell

.include <bsd.port.mk>
