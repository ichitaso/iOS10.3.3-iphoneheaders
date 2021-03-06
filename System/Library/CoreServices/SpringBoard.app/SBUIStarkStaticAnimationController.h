/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView, SBWorkspaceApplication;

@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController {

	char _relaunchExpected;
	char _appWasActivating;
	UIView* _staticAppView;
	UIView* _hostView;

}

@property (nonatomic,readonly) SBWorkspaceApplication * app; 
-(void)_cleanupAnimation;
-(id)_animationProgressDependencies;
-(char)_shouldDismissBanner;
-(void)_applicationDependencyStateChanged;
-(char)__animationShouldStart;
-(char)_willAnimate;
-(void)_willBeginWaitingForStartDependencies;
-(void)_hideAppHostView;
-(id)initWithApp:(id)arg1 starkScreenController:(id)arg2 ;
-(SBWorkspaceApplication *)app;
-(void)_startAnimation;
@end

