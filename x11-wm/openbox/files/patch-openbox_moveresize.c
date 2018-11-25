--- openbox/moveresize.c.orig	2018-11-21 17:19:09 UTC
+++ openbox/moveresize.c
@@ -1075,17 +1075,29 @@ gboolean moveresize_event(XEvent *e)
         } else if (sym == XK_Return || sym == XK_KP_Enter) {
             moveresize_end(FALSE);
             used = TRUE;
-        } else if (sym == XK_Right || sym == XK_Left ||
-                   sym == XK_Up || sym == XK_Down)
-        {
-            if (corner == OBT_PROP_ATOM(NET_WM_MOVERESIZE_SIZE_KEYBOARD)) {
-                resize_with_keys(sym, e->xkey.state);
-                used = TRUE;
-            } else if (corner ==
-                       OBT_PROP_ATOM(NET_WM_MOVERESIZE_MOVE_KEYBOARD))
+        } else {
+            /* map vim keys to motion keys */
+            if (sym == XK_h || sym == XK_H)
+                sym = XK_Left;
+            else if (sym == XK_l || sym == XK_L)
+                sym = XK_Right;
+            else if (sym == XK_j || sym == XK_J)
+                sym = XK_Down;
+            else if (sym == XK_k || sym == XK_K)
+                sym = XK_Up;
+
+            if (sym == XK_Right || sym == XK_Left ||
+                    sym == XK_Up || sym == XK_Down)
             {
-                move_with_keys(sym, e->xkey.state);
-                used = TRUE;
+                if (corner == OBT_PROP_ATOM(NET_WM_MOVERESIZE_SIZE_KEYBOARD)) {
+                    resize_with_keys(sym, e->xkey.state);
+                    used = TRUE;
+                } else if (corner ==
+                        OBT_PROP_ATOM(NET_WM_MOVERESIZE_MOVE_KEYBOARD))
+                {
+                    move_with_keys(sym, e->xkey.state);
+                    used = TRUE;
+                }
             }
         }
     }
