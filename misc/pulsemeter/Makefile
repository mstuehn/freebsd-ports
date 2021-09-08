# $FreeBSD$

PORTNAME=		pulsemeter
PORTVERSION=	g20210908
CATEGORIES=		misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=    	pulsemeter
GH_TAGNAME=	0fc794c

MAINTAINER=	freebsd@justmail.de
COMMENT=	Collect data from HID-device and send via mqtt

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libjsoncpp.so:devel/jsoncpp \
				libmosquitto.so:net/mosquitto

USE_RC_SUBR=	${PORTNAME:S/-/_/}

USES=	gmake

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/pulsemeter/
	${INSTALL_DATA} ${WRKSRC}/src/config.json ${STAGEDIR}/${PREFIX}/etc/pulsemeter/
	${INSTALL_PROGRAM} ${WRKSRC}/bin/pulsemeter ${STAGEDIR}/${PREFIX}/bin/pulsemeter

.include <bsd.port.mk>
