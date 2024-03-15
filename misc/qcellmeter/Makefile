# $FreeBSD$

PORTNAME=		qcellmeter
PORTVERSION=	g20190514
CATEGORIES=		misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=    	smartmeter
GH_TAGNAME=	d608dfa

MAINTAINER=	freebsd@justmail.de
COMMENT=	Collect data from modbus send via mqtt

LICENSE=	BSD2CLAUSE

BMAKE=          ${PREFIX}/bin/bmake
BUILD_DEPENDS=  ${BMAKE}:devel/bmake

MAKE_CMD=          ${BMAKE}
#USES=   bmake

LIB_DEPENDS=	libjsoncpp.so:devel/jsoncpp \
				libmosquitto.so:net/mosquitto \
				libmodbus.so:comms/libmodbus

USE_RC_SUBR=	${PORTNAME:S/-/_/}

#do-build:
#    ${SETENV} ${MAKE_ENV} ${BMAKE} ${MAKE_FLAGS} -C ${BUILD_WORKSRC} \
#        ${MAKEFILE} ${_MAKE_JOBS} ${MAKE_ARGS} ${ALL_TARGET}

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/qcellmeter/
	${INSTALL_DATA} ${WRKSRC}/config.json ${STAGEDIR}/${PREFIX}/etc/qcellmeter/
	${INSTALL_PROGRAM} ${WRKSRC}/smartmeter ${STAGEDIR}/${PREFIX}/bin/qcellmeter

.include <bsd.port.mk>
