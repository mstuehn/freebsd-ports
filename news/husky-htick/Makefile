# $FreeBSD$

PORTNAME=	husky-htick

COMMENT=	Husky FTN file ticker

LICENSE=	GPLv2

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: hatchInfo
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: hatchInfo

LIB_DEPENDS=	libareafix.so:news/husky-areafix \
		libfidoconfig.so:news/husky-fidoconf \
		libhusky.so:news/husky-huskylib \
		libsmapi.so:news/husky-smapi

ALL_TARGET=	all
INSTALL_TARGET=	install
USE_LDCONFIG=	yes
PLIST_FILES=	bin/htick man/man1/htick.1.gz

MASTERDIR=	${.CURDIR}/../husky
COMPONENT_SUBDIR=htick

# Settings below are required to handle texi output (html, INFO page)
USES+=			makeinfo
ALL_TARGET+=		doc
INSTALL_TARGET+=	install-doc
PORTDOCS=		htick.html
DOCSDIR=		${PREFIX}/share/doc/husky
INFO=			htick
MAKE_ARGS=		INFODIR=${PREFIX}/${INFO_PATH}

CFLAGS+=		-fcommon # fix build failure with clang-11 on 13-CURRENT

OPTIONS_DEFINE=	DOCS

post-patch:
	${REINPLACE_CMD} -e 's^/fido/etc/config^${PREFIX}/etc/fido/config^' \
		${BUILD_WRKSRC}/man/htick.1

.include "${MASTERDIR}/Makefile"
