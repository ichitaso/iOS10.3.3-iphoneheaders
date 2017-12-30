/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class CommonProduct;

@interface ThermalManager : NSObject {

	CFRunLoopRef localMainRunloop;
	int productName;
	CFBundleRef bundle;
	CommonProduct* product;

}

@property (readonly) CFRunLoopRef localMainRunloop; 
-(unsigned long long)getMaxSensorValue;
-(BOOL)getPotentialForcedThermalPressureLevel;
-(CFStringRef)getTGraphData:(int)arg1 ;
-(void)SaveProductString:(int)arg1 ;
-(void)updatePrefs:(SCPreferencesRef)arg1 :(BOOL)arg2 ;
-(void)createNewProduct:(CFRunLoopRef)arg1 ;
-(void)initDataCollection;
-(void)createConnectionToCT;
-(void)initializeReadPrefs:(SCPreferencesRef)arg1 ;
-(void)updateSystemPowerState:(char)arg1 ;
-(int)canSystemSleep;
-(int)getProductTotalSensors;
-(int)getProductCalibrationSensorID;
-(int)getProductCalibrationDefault;
-(iir_filter_t*)getProductFilterValues;
-(unsigned long long)getWatchDogMode;
-(int)canaryTempSensorIndex;
-(int)canaryTempThreshold;
-(void)canaryModeExitEarly:(int)arg1 ;
-(BOOL)useTcalAdjust:(int)arg1 ;
-(void)updateSystemLoad:(char)arg1 ;
-(void)probeAllSupervisorControlLoadingIndex;
-(int)desiredLoopInterval;
-(void)hintComponentControlTakeAction;
-(void*)getConfigurationFor:(CFStringRef)arg1 ;
-(CFRunLoopRef)localMainRunloop;
-(void)checkForLifetimeServoOverride:(SCPreferencesRef)arg1 key:(CFStringRef)arg2 ;
-(void)checkForArcOverride:(SCPreferencesRef)arg1 key:(CFStringRef)arg2 ;
-(void)dealloc;
-(id)initWithConfig:(CFBundleRef)arg1 ;
@end
