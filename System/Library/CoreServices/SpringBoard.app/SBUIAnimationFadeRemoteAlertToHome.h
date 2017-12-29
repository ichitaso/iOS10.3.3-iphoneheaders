/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBMainAlertManager, SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper;

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController {

	SBMainAlertManager* _alertManager;
	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBWindowSelfHostWrapper* _appHostWrapper;
	int _targetStatusBarStyle;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(char)_shouldDismissBanner;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_startAnimation;
@end
