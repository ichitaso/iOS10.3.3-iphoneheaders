/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	char itemIsEnabled[35];
	char timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	char serviceString[100];
	char serviceCrossfadeString[100];
	char serviceImages[2][100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	char batteryDetailString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
	unsigned quietModeInactive : 1;
	unsigned tetheringConnectionCount;
	unsigned batterySaverModeActive : 1;
	unsigned deviceIsRTL : 1;
	unsigned lock : 1;
	char breadcrumbTitle[256];
	char breadcrumbSecondaryTitle[256];
	char personName[100];
	unsigned electronicTollCollectionAvailable : 1;
	unsigned wifiLinkWarning : 1;
} SCD_Struct_CB0;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct __CFArray* CFArrayRef;

typedef struct _Apple80211* Apple80211Ref;

typedef struct {
	unsigned field1[8];
} SCD_Struct_CB6;

typedef struct __IOHIDEvent* IOHIDEventRef;

