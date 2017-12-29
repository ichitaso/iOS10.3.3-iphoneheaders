/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSDispatchSource;

@interface BSTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	/*^block*/id _handler;
	BSDispatchSource* _source;
	double _startTime;
	double _fireInterval;
	double _repeatInterval;
	double _leewayInterval;
	unsigned _fireCount;
	char _oneShot;
	char _scheduled;

}

@property (getter=isScheduled,nonatomic,readonly) char scheduled;              //@synthesize scheduled=_scheduled - In the implementation block
@property (nonatomic,readonly) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double fireInterval;                            //@synthesize fireInterval=_fireInterval - In the implementation block
@property (nonatomic,readonly) double repeatInterval;                          //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,readonly) unsigned fireCount;                             //@synthesize fireCount=_fireCount - In the implementation block
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_queue_cancel;
-(void)_queue_noteTimerFired;
-(unsigned)fireCount;
-(char)isScheduled;
-(void)cancel;
-(void)dealloc;
-(double)startTime;
-(double)repeatInterval;
-(void)schedule;
-(double)fireInterval;
@end
