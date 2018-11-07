--- xdgapps.c.orig	2018-11-07 17:38:25 UTC
+++ xdgapps.c
@@ -127,7 +127,7 @@ static void populate_desktop_and_directory_lists(const
 
 	dp = opendir(path);
 	if (!dp)
-		goto close_dir;
+		return;
 
 	while ((entry = readdir(dp))) {
 		if (!strncmp(entry->d_name, ".", 1) ||
@@ -136,7 +136,6 @@ static void populate_desktop_and_directory_lists(const
 		process_file(entry->d_name, path, isdir);
 	}
 
-close_dir:
 	closedir(dp);
 }
 
