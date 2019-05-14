# $FreeBSD$

PORTNAME=		smartmeter
PORTVERSION=	g20190514
CATEGORIES=		misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=    	smartmeter
GH_TAGNAME=	297cf10

MAINTAINER=	freebsd@justmail.de
COMMENT=	Collect data from modbus send via mqtt

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libjsoncpp.so:devel/jsoncpp \
				libmosquitto.so:net/mosquitto \
				libmodbus.so:comms/libmodbus

USE_RC_SUBR=	${PORTNAME:S/-/_/}

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/smartmeter/
	${INSTALL_DATA} ${WRKSRC}/config.json ${STAGEDIR}/${PREFIX}/etc/smartmeter/
	${INSTALL_PROGRAM} ${WRKSRC}/smartmeter ${STAGEDIR}/${PREFIX}/bin/smartmeter

.include <bsd.port.mk>
