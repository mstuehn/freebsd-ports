--- src/bin/e_object.c.orig	2018-07-11 06:06:44 UTC
+++ src/bin/e_object.c
@@ -117,6 +117,7 @@ e_object_free(E_Object *obj)
    obj->magic = E_OBJECT_MAGIC_FREED;
 #endif
    obj->cleanup_func(obj);
+   obj = NULL;
 }
 
 E_API int
