/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>
#import <SpringBoard/SBViewControllerReversibleAnimatedTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class BSAnimationSettings, NSString;

@interface SBUIAnimationSideAppSlide : SBUIWorkspaceAnimationController <SBViewControllerReversibleAnimatedTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	unsigned _transitionToken;
	BSAnimationSettings* _animationSettings;
	char _presentingSideApp;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTransition:(id)arg1 withPercentComplete:(float)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(id)transitionAnimationFactory:(id)arg1 ;
-(char)supportsRestarting;
-(void)finishSteppingBackwardToStart;
-(id)_transitionAnimator;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationSettings;
@end

