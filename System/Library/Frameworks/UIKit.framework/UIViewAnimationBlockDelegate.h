/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIViewAnimationBlockDelegate : NSObject {

	char _didBeginBlockAnimation;
	char _allowUserInteraction;
	char _isZeroDuration;
	char _allowsUserInteractionToCutOffEndOfAnimation;
	char _allowsHitTesting;
	char _animationDidStopSent;
	/*^block*/id _start;
	/*^block*/id _completion;
	NSMutableArray* _systemPostAnimationActions;
	char __forcingImmediateCompletion;

}

@property (nonatomic,readonly) char _allowsUserInteraction;                                                        //@synthesize allowUserInteraction=_allowUserInteraction - In the implementation block
@property (assign,setter=_setForcingImmediateCompletion:,nonatomic) char _forcingImmediateCompletion;              //@synthesize _forcingImmediateCompletion=__forcingImmediateCompletion - In the implementation block
+(id)animationBlockDelegateWithDuration:(double)arg1 options:(unsigned)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned)arg2 start:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2 ;
-(void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setForcingImmediateCompletion:(char)arg1 ;
-(char)_allowsUserInteraction;
-(char)_allowsUserInteractionToCutOffEndOfAnimation;
-(char)_allowsHitTesting;
-(char)_forcingImmediateCompletion;
-(void)_sendDeferredCompletion:(id)arg1 ;
@end

