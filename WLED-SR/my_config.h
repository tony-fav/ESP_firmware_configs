#pragma once

#ifdef WLED_USE_MY_CONFIG
  #warning **** my_config.h: Settings from this file are honored ****
#endif

#define CLIENT_SSID           "MYSSID"
#define CLIENT_PASS           "MYPASS"
#define ESP8266_WIFI_POWER    17.0          // wled.cpp edited to have WiFi.setOutputPower(ESP8266_WIFI_POWER); before WiFi.begin call if ESP8266_WIFI_POWER is defined

#ifdef MY_USE_IR
#ifdef WLED_DISABLE_INFRARED
#undef WLED_DISABLE_INFRARED
#endif
#endif

// Stuff I don't use
#ifndef WLED_DISABLE_ALEXA
#define WLED_DISABLE_ALEXA
#endif
#ifndef WLED_DISABLE_BLYNK
#define WLED_DISABLE_BLYNK
#endif
#ifndef WLED_DISABLE_CRONIXIE
#define WLED_DISABLE_CRONIXIE
#endif
#ifndef WLED_DISABLE_HUESYNC
#define WLED_DISABLE_HUESYNC
#endif
#ifndef WLED_DISABLE_WEBSOCKETS
#define WLED_DISABLE_WEBSOCKETS
#endif

// Update before personal compiles
#undef VERSION
#define VERSION 2111300 // YYMMDDb