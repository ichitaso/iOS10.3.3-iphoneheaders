/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBAssistantObserver.h>
#import <SpringBoard/SBDashBoardViewTransitionSource.h>
#import <SpringBoard/SBDashBoardAppearanceProviding.h>

@protocol SBDashBoardSlideUpToAppControllerDelegateSBDashBoardViewPresenting;
@class NSString, NSSet, _UILegibilitySettings, UIColor, SBLockScreenSettings, NSMutableArray, SBApplication, SBBestAppSuggestion, SBMainWorkspaceTransaction, UIView, UIPanGestureRecognizer, SBBounceSettings, SBNotificationCenterBounceAnimator;

@interface SBDashBoardSlideUpToAppController : NSObject <UIGestureRecognizerDelegate, BSTransactionObserver, SBAppViewHostRequester, _UISettingsKeyObserver, SBAssistantObserver, SBDashBoardViewTransitionSource, SBDashBoardAppearanceProviding> {

	SBLockScreenSettings* _testSettings;
	NSMutableArray* _deferredAppUpdateBlocks;
	char _executingDeferredAppUpdateBlocks;
	float _currentYOffset;
	SBApplication* _targetApp;
	SBBestAppSuggestion* _targetAppInfo;
	SBMainWorkspaceTransaction* _launchAppTransaction;
	UIView* _clippingView;
	UIView* _appDefaultImageView;
	UIView* _appBackgroundView;
	UIPanGestureRecognizer* _slideUpToAppGestureRecognizer;
	SBBounceSettings* _bounceSettings;
	SBNotificationCenterBounceAnimator* _slideDownBounceAnimator;
	id<SBDashBoardSlideUpToAppControllerDelegate><SBDashBoardViewPresenting> _delegate;
	unsigned _state;

}

@property (assign,setter=_setState:,getter=_state,nonatomic) unsigned state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                       //@synthesize slideUpToAppGestureRecognizer=_slideUpToAppGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * clippingView;                                                                               //@synthesize clippingView=_clippingView - In the implementation block
@property (getter=isSliding,nonatomic,readonly) char sliding; 
@property (assign,nonatomic,__weak) id<SBDashBoardSlideUpToAppControllerDelegate><SBDashBoardViewPresenting> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
@property (getter=isTransitioning,nonatomic,readonly) char transitioning; 
@property (nonatomic,readonly) SCD_Struct_SB17 transitionContext; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) int backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
-(NSString *)dashBoardIdentifier;
-(NSString *)appearanceIdentifier;
-(void)_resetToInitialState;
-(void)_setupSlideUpToAppGesture;
-(void)_suggestedAppDidChange:(id)arg1 ;
-(void)_translateSlidingViewByY:(float)arg1 ;
-(void)_slideUpToAppRecognizerDidPan:(id)arg1 ;
-(void)_updateSlideUpToAppControllerWithCurrentSuggestedApp;
-(void)_setTargetApp:(id)arg1 withAppSuggestion:(id)arg2 ;
-(void)_activateApp:(id)arg1 withAppInfo:(id)arg2 andURL:(id)arg3 animated:(char)arg4 ;
-(void)_beginSlideWithYTranslation:(float)arg1 ;
-(void)_updateSlideWithYTranslation:(float)arg1 ;
-(void)_prepareForSlideUpAnimation;
-(void)_finishSlideUpGesture;
-(void)_animateSlideUpWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishSlideDownGesture;
-(void)_animateSlideDownWithVelocity:(CGPoint)arg1 bounce:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_instantiateDynamicAnimationForTargetValue:(double)arg1 withInitialVelocity:(double)arg2 ;
-(void)_performSiriContinuity;
-(void)_performCallContinuity;
-(void)_performTargetAppContinuity;
-(void)_activateTargetAppAnimated:(char)arg1 ;
-(void)_executeDeferredAppUpdateBlocks;
-(CGRect)_slideUpToAppGrabberZoneForGrabber:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(int)appViewRequesterPriority:(id)arg1 ;
-(void)assistant:(id)arg1 viewWillDisappear:(int)arg2 ;
-(char)isSliding;
-(void)_setSlideUpToAppGestureRecognizer:(id)arg1 ;
-(void)_endSlideWithYTranslation:(float)arg1 velocity:(CGPoint)arg2 cancelled:(char)arg3 ;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<SBDashBoardSlideUpToAppControllerDelegate><SBDashBoardViewPresenting>)arg1 ;
-(void)dealloc;
-(id<SBDashBoardSlideUpToAppControllerDelegate><SBDashBoardViewPresenting>)delegate;
-(SCD_Struct_SB17)transitionContext;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(int)backgroundStyle;
-(void)reset;
-(unsigned)_state;
-(char)isTransitioning;
-(void)_setState:(unsigned)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(NSSet *)components;
-(void)_setupSubviews;
-(void)transactionDidBegin:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(UIView *)clippingView;
-(CGRect)_screenBounds;
-(void)cancelTransition;
-(int)participantState;
-(id)_siriViewController;
@end

