/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, AXDispatchTimer;

@interface AXRedirectedEventDetector : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentEvents;
	AXDispatchTimer* _flushEventsTimer;

}

@property (nonatomic,retain) NSMutableArray * recentEvents;                   //@synthesize recentEvents=_recentEvents - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * flushEventsTimer;              //@synthesize flushEventsTimer=_flushEventsTimer - In the implementation block
+(void)setFlushEventsTimerDelay:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setRecentEvents:(NSMutableArray *)arg1 ;
-(void)setFlushEventsTimer:(AXDispatchTimer *)arg1 ;
-(NSMutableArray *)recentEvents;
-(AXDispatchTimer *)flushEventsTimer;
-(double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(char)isRedirectedEvent:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
@end

