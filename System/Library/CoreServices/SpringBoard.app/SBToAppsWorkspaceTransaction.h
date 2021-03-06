/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/FBApplicationUpdateScenesTransactionObserver.h>
#import <SpringBoard/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class FBUIApplicationSceneDeactivationAssertion, SBAppRepairTransaction, SBUIAnimationController, SBWorkspaceApplicationTransitionContext, NSArray, NSCountedSet, SBSceneLayoutWorkspaceTransaction, NSSet, NSString;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver> {

	/*^block*/id _transitionCompletion;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	/*^block*/id _layoutTransitionContinuation;
	SBAppRepairTransaction* _appRepairTransaction;
	SBUIAnimationController* _animationController;
	SBWorkspaceApplicationTransitionContext* _additionalTransitionContext;
	NSArray* _fromApplications;
	NSCountedSet* _completionDelayRequesters;
	char _underLockScreenInForeground;
	char _gestureInitiated;
	unsigned _preactivationForegroundRunningApplicationCount;
	char _toAndFromApplicationsDiffer;
	char _notifiedSlaves;
	char _retriedAfterVoluntaryExit;
	char _applicationStateNeedsCapture;
	char _previousTransitionPerformedDeactivations;
	char _dismissedOverlays;
	SBSceneLayoutWorkspaceTransaction* _layoutTransaction;
	NSSet* _trackedProcesses;

}

@property (nonatomic,readonly) NSArray * activatingApplications; 
@property (nonatomic,readonly) NSArray * deactivatingApplications; 
@property (nonatomic,readonly) NSArray * toApplications; 
@property (nonatomic,readonly) NSArray * fromApplications; 
@property (nonatomic,readonly) NSSet * trackedProcesses;                                           //@synthesize trackedProcesses=_trackedProcesses - In the implementation block
@property (nonatomic,readonly) SBSceneLayoutWorkspaceTransaction * layoutTransaction;              //@synthesize layoutTransaction=_layoutTransaction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)performAdditionalTransition:(id)arg1 ;
-(void)addSlaveTransaction:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)animationControllerDidRevealApplication:(id)arg1 ;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(char)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)arg1 ;
-(void)activateApplications;
-(void)_notifySlavesIfNecessary;
-(SBSceneLayoutWorkspaceTransaction *)layoutTransaction;
-(void)_acquireResignActiveAssertion;
-(NSArray *)deactivatingApplications;
-(NSArray *)activatingApplications;
-(id)_scenesToBackground;
-(NSArray *)toApplications;
-(unsigned)_serialOverlayPreDismissalOptions;
-(void)_animationWillBegin:(char)arg1 ;
-(void)_animationDidFinish;
-(NSArray *)fromApplications;
-(void)enumerateToApplicationsWithBlock:(/*^block*/id)arg1 ;
-(void)_delayTransitionCompletionForRequester:(id)arg1 ;
-(void)_completeCurrentTransition;
-(void)_stopDelayingTransitionCompletionForRequester:(id)arg1 ;
-(char)isGoingToLauncher;
-(char)shouldRestoreSpringBoardContentOnCleanup;
-(void)_synchronizeWithSceneUpdates;
-(char)toAndFromAppsDiffer;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(void)enumerateDeactivatingApplicationsWithBlock:(/*^block*/id)arg1 ;
-(void)_relinquishResignActiveAssertion;
-(void)_clearAnimation;
-(void)performToAppStateCleanup;
-(char)isFromMainSwitcher;
-(char)isFromSideSwitcher;
-(char)isGoingToMainSwitcher;
-(char)shouldPerformToAppStateCleanupOnCompletion;
-(char)shouldAnimateOrientationChangeOnCompletion;
-(void)_beginTransition;
-(char)_transitionWasCancelled;
-(char)_willPerformAnimation;
-(char)_hasPreAnimationTasks;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(char)_hasPostAnimationTasks;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(void)_animationDidRevealApplication;
-(void)_endTransition;
-(char)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(char)_shouldUpdateUnderLockStateForForegroundScenes;
-(void)_captureApplicationState;
-(void)_fireAndClearResultBlockIfNecessaryForFailure:(char)arg1 ;
-(void)enumerateNewlyActivatingApplicationsWithBlock:(/*^block*/id)arg1 ;
-(char)_onlyPerformingDeactivations;
-(void)_beginAnimationIfNecessary;
-(void)_checkForAnimationCompletion;
-(void)_noteAnimationFinished;
-(void)_configureAnimation;
-(id)_applicationForScene:(id)arg1 ;
-(void)_willBegin;
-(void)dealloc;
-(id)animationController;
-(char)_beginAnimation;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2 ;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2 ;
-(char)_shouldFailForChildTransaction:(id)arg1 ;
-(char)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(double)watchdogTimeout;
-(char)shouldWatchdog:(id*)arg1 ;
-(id)_setupAnimation;
-(NSSet *)trackedProcesses;
-(id)_transitionContext;
@end

