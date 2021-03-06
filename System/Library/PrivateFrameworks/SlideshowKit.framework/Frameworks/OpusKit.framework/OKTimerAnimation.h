/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSDictionary, NSMutableDictionary, CAMediaTimingFunction;

@interface OKTimerAnimation : NSObject {

	NSTimer* _timer;
	NSDictionary* _fromValues;
	NSDictionary* _toValues;
	float _duration;
	float _currentInterval;
	NSMutableDictionary* _previousValues;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	char _additionally;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) char additionally;                                   //@synthesize additionally=_additionally - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
+(id)animationFromValues:(id)arg1 toValues:(id)arg2 withDuration:(double)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)start;
-(void)handleTimer:(id)arg1 ;
-(char)additionally;
-(void)setAdditionally:(char)arg1 ;
@end

