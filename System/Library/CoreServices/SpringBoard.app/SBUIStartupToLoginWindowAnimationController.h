/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBLoginAppContainerViewControllerObserver.h>

@class SBWindow, BKSDisplayRenderOverlay, BSTransaction, NSString;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {

	SBWindow* _transitionWindow;
	BKSDisplayRenderOverlay* _persistentSnapshotOverlay;
	BSTransaction* _waitForLoginAppToFinishLaunchingTransaction;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(char)_shouldDismissBanner;
-(id)_getTransitionWindow;
-(void)loginAppDidFinishLaunching:(id)arg1 ;
-(id)animationSettings;
-(void)_setHidden:(char)arg1 ;
-(void)_startAnimation;
@end
