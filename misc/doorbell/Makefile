# $FreeBSD$

PORTNAME=		doorbell
PORTVERSION=	g20190128
CATEGORIES=		misc

USE_GITHUB=     yes
GH_ACCOUNT=     mstuehn
GH_PROJECT=     doorbell
GH_TAGNAME=     641f8c6

MAINTAINER=	freebsd@justmail.de
COMMENT=	Application for playing doorbell sound on bbb

LICENSE=	BSD2CLAUSE

IGNORE_DragonFly=	only supported on FreeBSD
ONLY_FOR_ARCHS= armv6 armv7
ONLY_FOR_ARCHS_REASON= PRU devices only available on Texas Instruments ARM CPUs

LIB_DEPENDS=	libpru.so:devel/libpru2 \
		libjsoncpp.so:devel/jsoncpp \
		libmosquitto.so:net/mosquitto

BUILD_DEPENDS=	pasm:devel/pasm

USE_RC_SUBR=	${PORTNAME:S/-/_/}

do-install:
	${MKDIR} ${STAGEDIR}/boot/dtb/overlays
	${INSTALL_KLD} ${WRKSRC}/overlays/ti_pruss.dtbo ${STAGEDIR}/boot/dtb/overlays/
	${MKDIR} ${STAGEDIR}/${PREFIX}/share/doorbell/
	${INSTALL_DATA} ${WRKSRC}/src/DoorBell.wav ${STAGEDIR}/${PREFIX}/share/doorbell/
	${MKDIR} ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_DATA} ${WRKSRC}/src/config.json ${STAGEDIR}/${PREFIX}/etc/doorbell/
	${INSTALL_PROGRAM} ${WRKSRC}/src/doorbell ${STAGEDIR}/${PREFIX}/bin/doorbell

.include <bsd.port.mk>
