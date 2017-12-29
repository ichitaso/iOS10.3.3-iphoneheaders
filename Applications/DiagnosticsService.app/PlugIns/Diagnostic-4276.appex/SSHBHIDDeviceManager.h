/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4276.appex/Diagnostic-4276
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Diagnostic-4276/Diagnostic-4276-Structs.h>
@class NSMutableDictionary;

@interface SSHBHIDDeviceManager : NSObject {

	NSMutableDictionary* _usageSubscribers;
	NSMutableDictionary* _usageDeviceMap;
	NSMutableDictionary* _deviceUsageMap;

}

@property (nonatomic,retain) NSMutableDictionary * usageSubscribers;              //@synthesize usageSubscribers=_usageSubscribers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * usageDeviceMap;                //@synthesize usageDeviceMap=_usageDeviceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceUsageMap;                //@synthesize deviceUsageMap=_deviceUsageMap - In the implementation block
-(NSMutableDictionary *)usageSubscribers;
-(NSMutableDictionary *)usageDeviceMap;
-(NSMutableDictionary *)deviceUsageMap;
-(id)usageFromDevice:(IOHIDDeviceRef)arg1 ;
-(void)addSubscriber:(id)arg1 forUsage:(id)arg2 ;
-(void)removeSubscriber:(id)arg1 forUsage:(id)arg2 ;
-(void)addDevice:(IOHIDDeviceRef)arg1 forUsage:(id)arg2 ;
-(id)subscribersFromUsage:(id)arg1 ;
-(id)subscribersFromDevice:(IOHIDDeviceRef)arg1 ;
-(id)devicesFromUsage:(id)arg1 ;
-(void)setUsageSubscribers:(NSMutableDictionary *)arg1 ;
-(void)setUsageDeviceMap:(NSMutableDictionary *)arg1 ;
-(void)setDeviceUsageMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)removeDevice:(IOHIDDeviceRef)arg1 ;
@end

