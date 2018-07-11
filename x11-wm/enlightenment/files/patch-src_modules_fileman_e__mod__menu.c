--- src/modules/fileman/e_mod_menu.c.orig	2018-07-11 06:07:38 UTC
+++ src/modules/fileman/e_mod_menu.c
@@ -109,6 +109,16 @@ _e_mod_menu_populate_filter(void *data E
    struct stat st;
    long count;
 
+   if (!handler) return EINA_FALSE;
+
+   if (eio_file_check(handler)) return EINA_FALSE;
+
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+/* XXX: Accessing tmp is causing SIGBUS issues. The easiest way to
+   handle is to ignore this directory. */
+   if (!strncmp(info->path, "/tmp", 3)) return EINA_FALSE;
+#endif
+
    count = (long)eio_file_associate_find(handler, "count");
    if (count > 100)
      {
@@ -135,6 +145,8 @@ _e_mod_menu_populate_item(void *data, Ei
    const char *dev, *path;
    Efreet_Desktop *ed = NULL;
 
+   if (handler && eio_file_check(handler)) return;
+
    mi = m->parent_item;
    dev = e_object_data_get(E_OBJECT(m));
    path = mi ? e_object_data_get(E_OBJECT(mi)) : "/";
@@ -271,7 +283,7 @@ _e_mod_menu_populate_done(void *data, Ei
 static void
 _e_mod_menu_populate_err(void *data, Eio_File *handler, int error EINA_UNUSED)
 {
-   _e_mod_menu_populate_done(data, handler);
+   (void) data; (void) handler)
 }
 
 static void
