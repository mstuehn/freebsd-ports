--- xdgdirs.c.orig	2018-11-07 17:39:07 UTC
+++ xdgdirs.c
@@ -23,7 +23,8 @@ static char *xdg_base_dirs[] = {
 };
 
 static char *xdg_config_dirs[] = {
-	"$XDG_CONFIG_HOME", "$HOME/.config", "$XDG_CONFIG_DIRS", "/etc/xdg",
+	"$XDG_CONFIG_HOME", "$HOME/.config", "$XDG_CONFIG_DIRS", 
+	"/usr/local/etc/xdg", "/etc/xdg",
 	NULL
 };
 
