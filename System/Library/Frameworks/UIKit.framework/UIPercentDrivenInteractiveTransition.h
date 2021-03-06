/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewImplicitlyAnimating, UITimingCurveProvider;
@class NSString, NSUUID;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	float _duration;
	char _didCommitAnimations;
	id<UIViewImplicitlyAnimating> _interruptibleAnimator;
	char _wantsInteractiveStart;
	char __transitionInterrupted;
	float _completionSpeed;
	int _completionCurve;
	id<UITimingCurveProvider> _timingCurve;
	NSString* __originalFillMode;
	NSUUID* __uuid;

}

@property (setter=_setOriginalFillMode:,nonatomic,retain) NSString * _originalFillMode;                                                  //@synthesize _originalFillMode=__originalFillMode - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSUUID * _uuid;                                                                            //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setTransitionInterrupted:,getter=_isTransitionInterrupted,nonatomic) char _transitionInterrupted;              //@synthesize _transitionInterrupted=__transitionInterrupted - In the implementation block
@property (readonly) float duration; 
@property (readonly) float percentComplete; 
@property (assign,nonatomic) float completionSpeed;                                                                                      //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) int completionCurve;                                                                                        //@synthesize completionCurve=_completionCurve - In the implementation block
@property (nonatomic,retain) id<UITimingCurveProvider> timingCurve;                                                                      //@synthesize timingCurve=_timingCurve - In the implementation block
@property (assign,nonatomic) char wantsInteractiveStart;                                                                                 //@synthesize wantsInteractiveStart=_wantsInteractiveStart - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_resetInteractionController;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(float)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(float)arg1 ;
-(float)duration;
-(void)setCompletionSpeed:(float)arg1 ;
-(void)_setDuration:(float)arg1 ;
-(NSUUID *)_uuid;
-(char)wantsInteractiveStart;
-(int)completionCurve;
-(void)setCompletionCurve:(int)arg1 ;
-(float)completionSpeed;
-(void)pauseInteractiveTransition;
-(id<UITimingCurveProvider>)timingCurve;
-(void)_continueInterruptibleTransition:(id)arg1 reverse:(char)arg2 ;
-(char)_isTransitionInterrupted;
-(void)_setTransitionInterrupted:(char)arg1 ;
-(void)_stopInteractiveTransition:(id)arg1 ;
-(char)_startInterruptibleTransition:(id)arg1 ;
-(void)_setUuid:(id)arg1 ;
-(void)_updateInteractiveTransition:(id)arg1 percent:(float)arg2 isFinished:(char)arg3 didComplete:(char)arg4 ;
-(void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(/*^block*/id)arg3 ;
-(void)setTimingCurve:(id<UITimingCurveProvider>)arg1 ;
-(void)setWantsInteractiveStart:(char)arg1 ;
-(NSString *)_originalFillMode;
-(void)_setOriginalFillMode:(id)arg1 ;
@end

