/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchEtceteraBlurringTransitionAnimator.h>

@interface SBSearchEtceteraBlurringPushTransitionAnimator : SBSearchEtceteraBlurringTransitionAnimator {

	unsigned _operation;

}
-(void)_prepareToAnimate;
-(char)shouldMoveIntoSearch;
-(void)_animateIntoSearch:(char)arg1 ;
-(void)_cleanupAfterAnimating:(char)arg1 ;
-(void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(char)shouldMoveIntoSearchOnCancel;
-(void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(float)arg2 ;
@end

