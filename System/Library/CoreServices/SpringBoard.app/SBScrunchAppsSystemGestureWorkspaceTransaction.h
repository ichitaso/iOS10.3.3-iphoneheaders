/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class FBUIApplicationSceneDeactivationAssertion, SBUIAnimationController, NSString;

@interface SBScrunchAppsSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver> {

	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBUIAnimationController* _animationController;
	char _ignoringEvents;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resumeEventsIfNecessary;
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_ignoreEvents;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_finishWithCompletionType:(int)arg1 ;
-(void)_lockOrientation:(int)arg1 ;
-(void)_unlockOrientation;
-(void)_reportTransactionCompletedWithType:(int)arg1 ;
-(void)_executeUnscatterWithCompletion:(/*^block*/id)arg1 ;
-(void)_suspendGestureCancelled;
-(void)_suspendGestureEndedWithCompletionType:(int)arg1 ;
-(void)_suspendGestureChanged:(float)arg1 ;
-(void)dealloc;
-(void)_beginAnimation;
-(void)_didComplete;
-(void)_begin;
-(void)_setupAnimation;
@end
