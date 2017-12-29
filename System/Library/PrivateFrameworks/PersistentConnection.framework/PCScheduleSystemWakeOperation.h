/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation {

	char _scheduleOrCancel;
	char _userVisible;
	NSDate* _wakeDate;
	double _acceptableDelay;
	NSString* _serviceIdentifier;
	void* _unqiueIdentifier;

}
-(id)initForScheduledWake:(char)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(char)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void*)arg6 ;
-(void)dealloc;
-(void)main;
@end

