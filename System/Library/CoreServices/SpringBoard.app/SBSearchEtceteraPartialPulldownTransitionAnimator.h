/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class SBSearchEtceteraLayoutView, UIView, NSString;

@interface SBSearchEtceteraPartialPulldownTransitionAnimator : NSObject <SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning> {

	SBSearchEtceteraLayoutView* _layoutView;
	UIView* _outgoingView;
	UIView* _incomingView;
	unsigned _operation;
	unsigned _destinationMode;
	id<SBViewControllerContextTransitioning> _transitionContext;
	unsigned _transitionStyle;

}

@property (assign,nonatomic) unsigned destinationMode;              //@synthesize destinationMode=_destinationMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned transitionStyle;              //@synthesize transitionStyle=_transitionStyle - In the implementation block
-(unsigned)destinationMode;
-(void)_prepareToAnimate;
-(void)setDestinationMode:(unsigned)arg1 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(float)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(void)_actuallyAnimateTransition;
-(void)_cleanupAfterAnimating;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(unsigned)transitionStyle;
-(void)setTransitionStyle:(unsigned)arg1 ;
-(float)percentComplete;
@end

