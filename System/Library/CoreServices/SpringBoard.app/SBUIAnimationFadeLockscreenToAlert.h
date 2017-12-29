/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewControllerBase, SBAlertManager, SBUIFullscreenAlertAdapter, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController {

	SBLockScreenViewControllerBase* _lockScreenViewController;
	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _toAlert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	char _alertViewIsAnimatingItself;
	char _alertIsTransparent;
	char _finishedPrimaryFadeAnimation;
	char _needsLockScreenAlphaRestoredOnCompletion;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_startAnimation;
@end

