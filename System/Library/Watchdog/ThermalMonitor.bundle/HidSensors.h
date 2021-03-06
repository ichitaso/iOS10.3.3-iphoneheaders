/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class NSObject;

@interface HidSensors : NSObject {

	IOHIDEventSystemClientRef _hidEventSystem;
	CFDictionaryRef _infoOnlyHIDSensors;
	CFDictionaryRef _callbackSensorIntervals;
	CFDictionaryRef _readFailuresExpected;
	CFArrayRef hidSensorKeys;
	CFArrayRef sensorFourCharCode;
	CFArrayRef synthSensorKeys;
	CFDictionaryRef _callbackTemperatures;
	CFDictionaryRef _potentiallyStaleSensorTimestamps;
	CFDictionaryRef _potentiallyStaleSensorDefaults;
	NSObject*<OS_dispatch_queue> _callbackTemperaturesQueue;
	iir_filter_t filterParams[57];
	unsigned long long sensorWatchdogMask;
	char _infoOnlySensorsActive;
	char _dispatchVirtualTemp;
	char _send2DTempGrid;
	CFArrayRef _tempSensors;
	long _count;
	CFDictionaryRef _sensorDict;
	CFDictionaryRef _serviceToName;

}

@property (nonatomic,readonly) CFArrayRef hidSensorKeys; 
@property (nonatomic,readonly) CFArrayRef sensorFourCharCode; 
@property (nonatomic,readonly) CFArrayRef synthSensorKeys; 
+(id)sharedInstance;
-(BOOL)shouldRetrieveSensor:(CFStringRef)arg1 ;
-(CFArrayRef)sensorFourCharCode;
-(CFArrayRef)hidSensorKeys;
-(CFArrayRef)synthSensorKeys;
-(void)sendVirtualTemp:(long)arg1 temperature:(long)arg2 ;
-(void)setInfoOnlySensorsActive:(char)arg1 ;
-(unsigned long)getSensorIndexFrom4CC:(CFStringRef)arg1 ;
-(unsigned long long)getWatchDogMask;
-(int)temperatureForKey:(CFStringRef)arg1 ;
-(CFDictionaryRef)getHIDSensorDict;
-(void)loadProductParameters:(CFArrayRef)arg1 ;
-(void)enableDispatchVirtualTemp;
-(void)initLocationStrings;
-(void)enableSending2DTempGridToDisplayDriver;
-(char)isSending2DTempGridToDisplayDriverEnabled;
-(iir_filter_t*)getFilterTable;
-(CFArrayRef)copySensorArray;
-(void)handleTemperatureEvent:(long)arg1 service:(IOHIDServiceClientRef)arg2 ;
-(char)isVirtualTempDispatchEnabled;
-(CFStringRef)getSensor4CCFromIndex:(long)arg1 ;
-(int)sendToService:(CFStringRef)arg1 value:(void*)arg2 ;
-(int)indexForTempSensorKey:(CFStringRef)arg1 ;
-(void)createHIDEventSystemObject;
-(int)callbackSensorInterval:(CFStringRef)arg1 ;
-(BOOL)readFailuresExpected:(CFStringRef)arg1 ;
-(id)init;
-(void)dealloc;
@end

