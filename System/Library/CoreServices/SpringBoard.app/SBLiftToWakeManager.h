/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardExternalEventHandling.h>
#import <SpringBoard/SBLiftToWakeObserver.h>

@class SBLiftToWakeController, SBLockScreenManager, SBBacklightController, SBMainDisplayPolicyAggregator, NSString;

@interface SBLiftToWakeManager : NSObject <SBDashBoardExternalEventHandling, SBLiftToWakeObserver> {

	SBLiftToWakeController* _liftToWakeController;
	SBLockScreenManager* _accessor_lockScreenManager;
	SBBacklightController* _accessor_backlightController;
	SBMainDisplayPolicyAggregator* _accessor_policyAggregator;
	char _gestureWokeScreen;
	char _observing;
	char _significantUserInteractionOccuredSinceWake;

}

@property (setter=_setLiftToWakeController:,getter=_liftToWakeController,nonatomic,retain) SBLiftToWakeController * liftToWakeController;              //@synthesize liftToWakeController=_liftToWakeController - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;                   //@synthesize accessor_policyAggregator=_accessor_policyAggregator - In the implementation block
@property (setter=_setLockScreenManager:,getter=_lockScreenManager,nonatomic,retain) SBLockScreenManager * lockScreenManager;                          //@synthesize accessor_lockScreenManager=_accessor_lockScreenManager - In the implementation block
@property (setter=_setBacklightController:,getter=_backlightController,nonatomic,retain) SBBacklightController * backlightController;                  //@synthesize accessor_backlightController=_accessor_backlightController - In the implementation block
@property (assign,setter=_setGestureWokeScreen:,getter=_gestureWokeScreen,nonatomic) char gestureWokeScreen;                                           //@synthesize gestureWokeScreen=_gestureWokeScreen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
-(NSString *)dashBoardIdentifier;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(id)_policyAggregator;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(int)arg2 ;
-(id)_liftToWakeController;
-(void)_setPolicyAggregator:(id)arg1 ;
-(void)_ignoredTransition:(int)arg1 ;
-(id)initWithLiftToWakeController:(id)arg1 ;
-(void)_backlightWillTurnOn:(id)arg1 ;
-(void)_setGestureWokeScreen:(char)arg1 ;
-(char)_gestureWokeScreen;
-(char)_isLockScreenMainPageVisible;
-(char)_isLockScreenIdleTimerDisabled;
-(void)_setLiftToWakeController:(id)arg1 ;
-(void)_setLockScreenManager:(id)arg1 ;
-(void)_setBacklightController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(char)handleEvent:(id)arg1 ;
-(id)_lockScreenManager;
-(id)_backlightController;
-(int)participantState;
@end

