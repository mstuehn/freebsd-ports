--- xdgdirs.c.orig	2019-01-11 07:20:44 UTC
+++ xdgdirs.c
@@ -24,6 +24,7 @@ static char *xdg_base_dirs[] = {
 
 static char *xdg_config_dirs[] = {
 	"$XDG_CONFIG_HOME", "$HOME/.config", "$XDG_CONFIG_DIRS", "/etc/xdg",
+	"/usr/local/etc/xdg",
 	NULL
 };
 
