/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, SBRemoteAlertAdapter, SBMainAlertManager, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationFadeAlertToRemoteAlert : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	SBRemoteAlertAdapter* _remoteAlert;
	SBMainAlertManager* _alertManager;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	char _initialFakeStatusBarNeeded;
	double _animationDuration;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_animationFinished;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_startAnimation;
@end

