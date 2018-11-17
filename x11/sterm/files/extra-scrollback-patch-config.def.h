--- config.def.h.orig	2018-03-20 20:29:59 UTC
+++ config.def.h
@@ -5,7 +5,7 @@
  *
  * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
  */
-static char *font = "Liberation Mono:pixelsize=12:antialias=true:autohint=true";
+static char *font = "UbuntuMono Nerd Font Mono:size=12:antialias=false:autohint=true";
 static int borderpx = 2;
 
 /*
@@ -85,24 +85,24 @@ unsigned int tabspaces = 8;
 /* Terminal colors (16 first used in escape sequence) */
 static const char *colorname[] = {
 	/* 8 normal colors */
-	"black",
-	"red3",
-	"green3",
-	"yellow3",
-	"blue2",
-	"magenta3",
-	"cyan3",
-	"gray90",
+	"#1c2023",
+	"#a54242",
+	"#8c9440",
+	"#de935f",
+	"#5f819d",
+	"#85678f",
+	"#5e8d87",
+	"#E1E1E1",
 
 	/* 8 bright colors */
-	"gray50",
-	"red",
-	"green",
-	"yellow",
-	"#5c5cff",
-	"magenta",
-	"cyan",
-	"white",
+	"#1c2023",
+	"#cc6666",
+	"#b5bd68",
+	"#f0c674",
+	"#81a2be",
+	"#b294bb",
+	"#8abeb7",
+	"#c5c8c6",
 
 	[255] = 0,
 
@@ -178,6 +178,8 @@ static Shortcut shortcuts[] = {
 	{ TERMMOD,              XK_Y,           selpaste,       {.i =  0} },
 	{ TERMMOD,              XK_Num_Lock,    numlock,        {.i =  0} },
 	{ TERMMOD,              XK_I,           iso14755,       {.i =  0} },
+	{ ShiftMask,            XK_Page_Up,     kscrollup,      {.i = -1} },
+	{ ShiftMask,            XK_Page_Down,   kscrolldown,    {.i = -1} },
 };
 
 /*
