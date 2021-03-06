/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CBIdleSleepManager : NSObject {

	char _displayDim;
	char _finishedBoot;
	char _allowIdleTimerToBeReset;
	unsigned _rootDomainConnect;
	NSMutableSet* _idleTimerDisabledReasons;

}

@property (assign,nonatomic) unsigned rootDomainConnect;                           //@synthesize rootDomainConnect=_rootDomainConnect - In the implementation block
@property (assign,nonatomic) char finishedBoot;                                    //@synthesize finishedBoot=_finishedBoot - In the implementation block
@property (assign,nonatomic) char allowIdleTimerToBeReset;                         //@synthesize allowIdleTimerToBeReset=_allowIdleTimerToBeReset - In the implementation block
@property (assign,getter=isDisplayDim,nonatomic) char displayDim;                  //@synthesize displayDim=_displayDim - In the implementation block
@property (nonatomic,retain) NSMutableSet * idleTimerDisabledReasons;              //@synthesize idleTimerDisabledReasons=_idleTimerDisabledReasons - In the implementation block
+(id)sharedInstance;
-(void)_undimDisplay;
-(void)_screenBlanked;
-(void)setDisplayDim:(char)arg1 ;
-(void)_preventIdleSleep;
-(void)_setHIDUILockedState:(char)arg1 ;
-(char)isDisplayDim;
-(void)_preventIdleSleepForNumberOfSeconds:(float)arg1 ;
-(void)resetIdleTimerAndUndim:(char)arg1 ;
-(void)_allowIdleSleep;
-(void)setPreventIdleSleep:(char)arg1 forReason:(id)arg2 ;
-(void)setFinishedBoot:(char)arg1 ;
-(char)finishedBoot;
-(char)allowIdleTimerToBeReset;
-(void)undimDisplay;
-(double)_nextLockTimeDuration;
-(void)dimDisplay;
-(void)setAllowIdleTimerToBeReset:(char)arg1 ;
-(void)_powerChangedOnService:(unsigned)arg1 messageType:(unsigned)arg2 messageArgument:(void*)arg3 ;
-(void)enableIdleSleep;
-(void)_userEventsDidIdle;
-(void)_userEventOccurred;
-(void)_userEventPresenceTimerExpired;
-(void)_requestedUserEventNotificationOccurred;
-(void)_startAllowingIdleTimer;
-(void)setIdleTimerDisabledReasons:(NSMutableSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)idleTimerDisabledReasons;
-(void)setIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
@end

