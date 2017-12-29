/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMSwimData;

@interface CMSwimTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	char fStartedUpdates;
	CMSwimData* fMostRecentRecord;
	/*^block*/id fHandler;
	unsigned fStrokeCountOffset;
	double fDistanceOffset;
	unsigned fLapCountOffset;
	double fActiveTime;

}
-(id)init;
-(void)dealloc;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopUpdates;
-(void)_querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_teardown;
-(void)_handleUpdates:(id)arg1 ;
@end

