/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <FaceTime/FaceTime-Structs.h>
@class NSObject;

@interface PHHIDEventMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	IOHIDEventSystemClientRef _HIDEventSystemClient;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) IOHIDEventSystemClientRef HIDEventSystemClient;              //@synthesize HIDEventSystemClient=_HIDEventSystemClient - In the implementation block
+(id)HIDEventMonitor;
-(IOHIDEventSystemClientRef)HIDEventSystemClient;
-(void)setHIDEventSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)stringFromIOHIDUsagePage:(long)arg1 ;
-(id)stringFromIOHIDUsage:(long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)handleKeyboardEvent:(IOHIDEventRef)arg1 ;
@end

