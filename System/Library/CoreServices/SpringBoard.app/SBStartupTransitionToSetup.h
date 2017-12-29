/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBBulletinWindowController, SBFUserAuthenticationController, SBOrientationLockManager, SBApplicationController, SBSetupManager, SBLockScreenManager, SBInitialRestartState;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {

	SBBulletinWindowController* _bulletinWindowController;
	SBFUserAuthenticationController* _authController;
	SBOrientationLockManager* _orientationLockManager;
	SBApplicationController* _appController;
	SBSetupManager* _setupManager;
	SBLockScreenManager* _lockScreenManager;
	SBInitialRestartState* _initialRestartState;

}
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDestination:(unsigned)arg1 context:(id)arg2 ;
-(id)initWithDestination:(unsigned)arg1 context:(id)arg2 initialRestartState:(id)arg3 ;
-(void)_activateSetupWithCompletion:(/*^block*/id)arg1 underLock:(char)arg2 fromSnapshot:(char)arg3 ;
@end
