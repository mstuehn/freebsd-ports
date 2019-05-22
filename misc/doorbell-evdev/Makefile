# $FreeBSD$

PORTNAME=	doorbell-evdev
PORTVERSION=	g20190522
CATEGORIES=	misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=     doorbell
GH_TAGNAME=	2c97058

MAINTAINER=	freebsd@justmail.de
COMMENT=	Application for playing doorbell sound on NanoPI

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
	${INSTALL_DATA} ${WRKSRC}/src/config.json ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_PROGRAM} ${WRKSRC}/bin/doorbell ${STAGEDIR}/${PREFIX}/bin/doorbell

.include <bsd.port.mk>
