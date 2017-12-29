/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPocketStateMonitorObserver.h>
#import <SpringBoard/SBDashBoardExternalEventHandling.h>

@class SBIdleTimerDefaults, NSTimer, NSMutableSet, NSString;

@interface SBBacklightController : NSObject <SBPocketStateMonitorObserver, SBDashBoardExternalEventHandling> {

	SBIdleTimerDefaults* _idleTimerDefaults;
	int _lastBKUserEventTimerMode;
	double _minimumLockIdleTime;
	NSTimer* _autoLockTimer;
	double _lastTimeIdleCausedDim;
	double _nextLockDurationAfterDim;
	unsigned _disableAutoDimming : 1;
	NSMutableSet* _idleTimerDisabledReasons;
	char _isPendingScreenUnblankAfterCACommit;
	char _undimmedForBulletinSinceLastUserEvent;
	char _allowIdleTimerToBeReset;
	char _useDashBoard;

}

@property (nonatomic,readonly) char isPendingScreenUnblankAfterCACommit;              //@synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit - In the implementation block
@property (nonatomic,readonly) char screenIsOn; 
@property (nonatomic,readonly) char screenIsDim; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
+(id)_sharedInstanceCreateIfNeeded:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(NSString *)dashBoardIdentifier;
-(void)startAllowingIdleTimer;
-(void)setBacklightFactor:(float)arg1 source:(int)arg2 ;
-(void)autoLockPrefsChanged;
-(char)screenIsOn;
-(void)cancelLockScreenIdleTimer;
-(void)resetLockScreenIdleTimer;
-(void)preventIdleSleepForNumberOfSeconds:(float)arg1 ;
-(void)setBacklightFactorToZeroForProx;
-(void)restoreBacklightFactorForProx;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(char)isPendingScreenUnblankAfterCACommit;
-(char)shouldTurnOnScreenForBacklightSource:(int)arg1 ;
-(double)defaultLockScreenDimIntervalWhenNotificationsPresent;
-(double)defaultLockScreenDimInterval;
-(void)_userEventsDidIdle;
-(void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(int)arg2 to:(int)arg3 ;
-(void)startFadeOutAnimationFromLockSource:(int)arg1 ;
-(void)reloadDefaults;
-(void)_deferredScreenUnblankDone;
-(void)_batterySaverModeDidChange:(id)arg1 ;
-(void)_setBacklightFactorToZeroForProx;
-(void)_cancelSetBacklightFactorToZeroAfterDelay;
-(void)_clearAutoLockTimer;
-(void)_setBKEventTimerMode:(int)arg1 withDuration:(float)arg2 ;
-(void)_resetIdleTimerAndUndim:(char)arg1 source:(int)arg2 ;
-(void)_sendResetIdleTimerAction;
-(char)_lockScreenWantsUserEventNotifications;
-(void)adjustIdleLockDuration:(double*)arg1 idleDimDuration:(double*)arg2 ;
-(void)_performDeferredBacklightRampWorkWithInfo:(id)arg1 ;
-(void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 silently:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)preventIdleSleep;
-(void)dimForIdleWarning;
-(void)_autoLockTimerFired:(id)arg1 ;
-(void)_lockScreenDimTimerFired;
-(void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2 ;
-(void)allowIdleSleep;
-(void)_startFadeOutAnimationFromLockSource:(int)arg1 ;
-(void)_undimFromSource:(int)arg1 ;
-(double)_currentLockScreenIdleTimerInterval;
-(void)_userEventPresenceTimerExpired;
-(void)_requestedUserEventNotificationOccurred;
-(void)_userEventOccurred;
-(void)resetIdleTimerAndUndimForSource:(int)arg1 ;
-(double)_nextLockTimeDuration;
-(double)_nextIdleTimeDuration;
-(void)_didIdle;
-(char)screenIsDim;
-(void)turnOnScreenFullyWithBacklightSource:(int)arg1 ;
-(void)setBacklightFactorPending:(float)arg1 ;
-(void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(id)idleTimerDisabledReasons;
-(char)handleEvent:(id)arg1 ;
-(void)setIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(void)resetLockScreenIdleTimerWithDuration:(double)arg1 ;
-(int)participantState;
-(void)clearIdleTimer;
-(void)resetIdleTimer;
@end

