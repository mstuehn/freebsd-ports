# $FreeBSD$

PORTNAME=	textnote
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.0
CATEGORIES=	textproc

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	Tool for creating and organizing daily notes on the command line

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules
GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
USE_GITHUB=	yes
GH_TUPLE=	BurntSushi:toml:v0.3.1:burntsushi_toml/vendor/github.com/BurntSushi/toml \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		go-edn:edn:93e3b8dd0e24:go_edn_edn/vendor/olympos.io/encoding/edn \
		go-yaml:yaml:9f266ea9e77c:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		go-yaml:yaml:v2.4.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		ilyakaznacheev:cleanenv:v1.2.5:ilyakaznacheev_cleanenv/vendor/github.com/ilyakaznacheev/cleanenv \
		inconshreveable:mousetrap:v1.0.0:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		joho:godotenv:v1.3.0:joho_godotenv/vendor/github.com/joho/godotenv \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		spf13:cobra:v1.1.1:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		stretchr:testify:v1.7.0:stretchr_testify/vendor/github.com/stretchr/testify
GH_ACCOUNT=	dkaslovsky

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
