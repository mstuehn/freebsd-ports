--- src/xdgdirs.c.orig	2019-02-05 19:14:14 UTC
+++ src/xdgdirs.c
@@ -24,7 +24,7 @@ static char *xdg_base_dirs[] = {
 
 static char *xdg_config_dirs[] = {
 	"$XDG_CONFIG_HOME", "$HOME/.config", "$XDG_CONFIG_DIRS", "/etc/xdg",
-	NULL
+	"/usr/local/etc/xdg", NULL
 };
 
 static void get_dirs(struct list_head *dir_list, char **dirs)
