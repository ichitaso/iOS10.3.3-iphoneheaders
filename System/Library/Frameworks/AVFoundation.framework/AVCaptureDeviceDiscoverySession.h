/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {

	NSArray* _deviceTypes;
	int* _position;
	NSString* _mediaType;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSArray * devices;              //@synthesize devices=_devices - In the implementation block
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(int)arg3 ;
-(NSArray *)devices;
@end

