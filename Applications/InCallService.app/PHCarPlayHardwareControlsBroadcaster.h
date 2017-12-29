/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InCallService/InCallService-Structs.h>
@class NSString;

@interface PHCarPlayHardwareControlsBroadcaster : NSObject {

	IOHIDEventSystemClientRef _hidEventSystemClientRef;
	NSString* _eventTypeToIgnore;

}

@property (retain) NSString * eventTypeToIgnore;              //@synthesize eventTypeToIgnore=_eventTypeToIgnore - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)eventTypeToIgnore;
-(void)setEventTypeToIgnore:(NSString *)arg1 ;
-(void)longPressTimerFired:(id)arg1 ;
@end

