
PORTNAME=	jgmenu
DISTVERSIONPREFIX=	v
PORTVERSION=	3.0
CATEGORIES=	x11

USE_GITHUB=	yes
GH_ACCOUNT=	johanmalm

MAINTAINER=	freebsd@justmail.de
COMMENT=	Small x11 menu

LICENSE=	GPLv2

LIB_DEPENDS=	libXrandr.so:x11/libXrandr \
		libmenu-cache.so:x11/menu-cache \
		libpng16.so:graphics/png

USES=		gnome gmake pkgconfig python:3.6 shebangfix
USE_XORG=	x11 xrandr
USE_GNOME=	cairo pango librsvg2
USE_XFCE=	libmenu

SHEBANG_GLOB=	*.py

MAKE_ENV=PYTHON3_POLYGLOT=1

.include <bsd.port.mk>
