--- modules/mqtt/mqtt.c.orig	2019-12-09 20:13:29 UTC
+++ modules/mqtt/mqtt.c
@@ -104,8 +104,8 @@ static int module_init(void)
 		broker_host, broker_port, mqttclientid, mqttbasetopic);
 
 	re_snprintf(mqttsubscribetopic, sizeof(mqttsubscribetopic),
-		    "/%s/command/+", mqttbasetopic);
-	re_snprintf(mqttpublishtopic, sizeof(mqttpublishtopic), "/%s/event",
+		    "%s/command/+", mqttbasetopic);
+	re_snprintf(mqttpublishtopic, sizeof(mqttpublishtopic), "%s/event",
 		    mqttbasetopic);
 
 	info("mqtt: Publishing on %s, subscribing to %s\n",
