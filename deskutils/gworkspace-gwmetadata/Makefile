# $FreeBSD$

PORTNAME=	gworkspace
PORTVERSION=	0.9.4
PORTREVISION=	4
CATEGORIES=	deskutils gnustep
#MASTER_SITES=	http://www.gnustep.it/enrico/gworkspace/
MASTER_SITES=	GNUSTEP/usr-apps
PKGNAMESUFFIX=	-gwmetadata${PKGNAMESUFFIX2}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GWMetadata for GNUstep workspace manager

LICENSE=	GPLv2

.if ${/usr/bin/ld:L:tA} == /usr/bin/ld.lld
BROKEN=		ld: error: /usr/local/GNUstep/System/Library/Libraries/libFSNode.so: undefined reference to NSApplicationFileType
.endif

USES=		gnustep sqlite
USE_GNUSTEP=	back build
GNU_CONFIGURE=	yes
LIB_DEPENDS=	libDBKit.so:deskutils/gworkspace \
		libPreferencePanes.so:deskutils/systempreferences
USE_LDCONFIG=	${GNUSTEP_SYSTEM_LIBRARIES}

LDFLAGS+=	-lpthread

WRKSRC=		${WRKDIR}/gworkspace-${PORTVERSION}/GWMetadata
CONFIGURE_ARGS+=	--with-sqlite-include=${LOCALBASE}/include
CONFIGURE_ARGS+=	--with-sqlite-library=${LOCALBASE}/lib
DEFAULT_LIBVERSION=	0.1.0

post-patch:
	${CP} ${WRKSRC}/gmds/mdextractor/Extractors/JpegExtractor/GNUmakefile.in \
		${WRKSRC}/gmds/mdextractor/Extractors/JpegExtractor/GNUmakefile
	${CP} ${FILESDIR}/Preferences-GNUmakefile \
		${WRKSRC}/Preferences/GNUmakefile
	${CP} ${FILESDIR}/MDFinder-GNUmakefile \
		${WRKSRC}/MDFinder/GNUmakefile

.include <bsd.port.mk>
