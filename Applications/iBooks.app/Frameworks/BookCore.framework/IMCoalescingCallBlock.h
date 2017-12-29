/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray;

@interface IMCoalescingCallBlock : NSObject {

	/*^block*/id _notifyBlock;
	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_group> _group;
	NSMutableArray* _callbacks;
	char _pending;
	char _isInvoking;
	unsigned long long _nextCoalescingTime;
	unsigned long long _nextMaxTime;
	double _coalescingDelay;
	double _maximumDelay;

}

@property (assign,nonatomic) double coalescingDelay;              //@synthesize coalescingDelay=_coalescingDelay - In the implementation block
@property (assign,nonatomic) double maximumDelay;                 //@synthesize maximumDelay=_maximumDelay - In the implementation block
-(double)maximumDelay;
-(void)setMaximumDelay:(double)arg1 ;
-(void)_invoke;
-(void)_invokeIfNotInProgress;
-(void)_coalescingTimeExpired:(unsigned long long)arg1 ;
-(void)_maxTimeExpired:(unsigned long long)arg1 ;
-(id)initWithNotifyBlock:(/*^block*/id)arg1 ;
-(void)signalWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(void)setCoalescingDelay:(double)arg1 ;
@end

