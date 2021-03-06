/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceInternal, NSString, NSDictionary;

@interface AVOutputDevice : NSObject {

	AVOutputDeviceInternal* _outputDevice;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) int deviceType; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) char hasBatteryLevel; 
@property (nonatomic,readonly) float batteryLevel; 
@property (nonatomic,readonly) NSDictionary * modelSpecificInformation; 
+(id)sharedLocalDevice;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(float)batteryLevel;
-(id)_weakReference;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(double)frecencyScore;
-(NSString *)modelID;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(char)hasBatteryLevel;
-(NSDictionary *)modelSpecificInformation;
-(void)setSecondDisplayEnabled:(char)arg1 ;
-(void)updateFrecencyScore;
-(NSString *)ID;
-(int)deviceType;
-(void)finalize;
@end

