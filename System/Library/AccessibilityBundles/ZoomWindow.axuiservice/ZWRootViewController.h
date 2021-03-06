/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIViewController.h>
#import <ZoomWindow/ZWTouchTrapViewDelegate.h>
#import <ZoomWindow/ZWMenuViewControllerDelegate.h>
#import <ZoomWindow/ZWZoomSlugViewControllerDelegate.h>
#import <ZoomWindow/ZOTFullscreenZoomHandlerDelegate.h>
#import <ZoomWindow/ZWEventProcessorDelegate.h>
#import <ZoomWindow/ZWZoomPIPLensViewControllerDelegate.h>
#import <ZoomWindow/ZWLensAutopannerDelegate.h>
#import <ZoomWindow/ZWSmartZoomDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <ZoomWindow/AXUIViewControllerReachabilityHandler.h>

@protocol OS_dispatch_queue, ZWRootViewController_UnitTestDelegate, AXUIService;
@class CADisplayLink, NSMutableSet, NSObject, AXDispatchTimer, UIView, ZWTouchTrapView, ZWUIMinimapView, ZWAlertManager, ZWSmartZoomManager, ZWKeyboardContext, AXAssertion, ZWZoomLensViewController, ZWLensAutopanner, ZWZoomPIPLensViewController, NSLayoutConstraint, ZWZoomFullscreenLensViewController, ZWZoomSlugViewController, ZWMenuViewController, ZWEventProcessor, NSString;

@interface ZWRootViewController : UIViewController <ZWTouchTrapViewDelegate, ZWMenuViewControllerDelegate, ZWZoomSlugViewControllerDelegate, ZOTFullscreenZoomHandlerDelegate, ZWEventProcessorDelegate, ZWZoomPIPLensViewControllerDelegate, ZWLensAutopannerDelegate, ZWSmartZoomDelegate, UIPopoverPresentationControllerDelegate, AXUIViewControllerReachabilityHandler> {

	CGPoint _lensDeltaSinceInitialMove;
	double _lastMenuDismissalTime;
	double _lastTypingFocusChangeTime;
	double _lastDeviceUnlockTime;
	double _lastKeyboardDismissal;
	double _lastEdgePanHapticTime;
	char _cachedIsVoiceOverRunning;
	id _voiceOverStatusChangedNotificationObserverToken;
	SCD_Struct_ZW6 _eventUIContext;
	char _validatePanOffsetWithFullscreen;
	char _usingRelativePushPanning;
	CGPoint _fullScreenZoomStartPosition;
	CGPoint _fullScreenZoomStartOffset;
	float _fullScreenZoomVelocity;
	CGPoint _distanceAvailable;
	char _careBorderX;
	char _careBorderY;
	double _lastUpdateVelocityTime;
	CADisplayLink* _movementTimer;
	NSMutableSet* _zoomListeners;
	NSObject*<OS_dispatch_queue> _zoomListenersUpdateQueue;
	AXDispatchTimer* _zoomListenerUpdateTimer;
	AXDispatchTimer* _zoomServicesUpdate;
	float _zoomFactorBeforeUserAdjustingGesture;
	char _inUnitTestingMode;
	id<ZWRootViewController_UnitTestDelegate> _unitTestDelegate;
	char _brailleInputUIIsShowing;
	char _zoomWasUnzoomedDueToAppTransition;
	char _isSweepingToNextZoomRow;
	char _haveTriedScrollingDuringZoomSweep;
	char _snarfingWheelEventsForPan;
	char _snarfingWheelEventsForZoom;
	char _activeLensTransitioning;
	id<AXUIService> _axuiService;
	UIView* _containerView;
	ZWTouchTrapView* _touchTrapView;
	ZWUIMinimapView* _minimapView;
	ZWAlertManager* _zoomAlertManager;
	float _reachabilityOffset;
	ZWSmartZoomManager* _smartZoom;
	float _lastWheelDelta;
	float _accruedOvershoot;
	ZWKeyboardContext* _kbContext;
	AXAssertion* _disableNotificationCenterAssertionPIPLensOnTop;
	AXAssertion* _disableControlCenterAssertionPIPLensOnBottom;
	AXAssertion* _disableNotificationCenterAssertionFullscreenLensNotOnTop;
	AXAssertion* _disableControlCenterAssertionFullscreenLensNotOnBottom;
	ZWZoomLensViewController* _activeLensViewController;
	ZWLensAutopanner* _lensAutopanner;
	ZWZoomPIPLensViewController* _pipLensViewController;
	NSLayoutConstraint* _lensDragXConstraint;
	NSLayoutConstraint* _lensDragYConstraint;
	NSLayoutConstraint* _lensWidthConstraint;
	NSLayoutConstraint* _lensHeightConstraint;
	unsigned _pipLensEdgeMask;
	ZWZoomFullscreenLensViewController* _fullscreenLensViewController;
	ZWZoomSlugViewController* _slugViewController;
	NSLayoutConstraint* _slugRingDragXConstraint;
	NSLayoutConstraint* _slugRingDragYConstraint;
	unsigned _slugEdgeMask;
	ZWMenuViewController* _menuViewController;
	AXDispatchTimer* _idleTouchTimer;
	ZWEventProcessor* _eventManager;
	NSObject*<OS_dispatch_queue> _cachedValuesSerialQueue;
	UIView* _debugFocusView;
	NSMutableSet* _deactivatedAppIDs;
	double _lastEventTime;

}

@property (nonatomic,retain) UIView * containerView;                                                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) ZWTouchTrapView * touchTrapView;                                                     //@synthesize touchTrapView=_touchTrapView - In the implementation block
@property (nonatomic,retain) ZWUIMinimapView * minimapView;                                                       //@synthesize minimapView=_minimapView - In the implementation block
@property (nonatomic,retain) ZWAlertManager * zoomAlertManager;                                                   //@synthesize zoomAlertManager=_zoomAlertManager - In the implementation block
@property (assign,nonatomic) char zoomWasUnzoomedDueToAppTransition;                                              //@synthesize zoomWasUnzoomedDueToAppTransition=_zoomWasUnzoomedDueToAppTransition - In the implementation block
@property (assign,nonatomic) float reachabilityOffset;                                                            //@synthesize reachabilityOffset=_reachabilityOffset - In the implementation block
@property (nonatomic,retain) ZWSmartZoomManager * smartZoom;                                                      //@synthesize smartZoom=_smartZoom - In the implementation block
@property (assign,nonatomic) float lastWheelDelta;                                                                //@synthesize lastWheelDelta=_lastWheelDelta - In the implementation block
@property (assign,nonatomic) float accruedOvershoot;                                                              //@synthesize accruedOvershoot=_accruedOvershoot - In the implementation block
@property (assign,nonatomic) char isSweepingToNextZoomRow;                                                        //@synthesize isSweepingToNextZoomRow=_isSweepingToNextZoomRow - In the implementation block
@property (assign,nonatomic) char haveTriedScrollingDuringZoomSweep;                                              //@synthesize haveTriedScrollingDuringZoomSweep=_haveTriedScrollingDuringZoomSweep - In the implementation block
@property (assign,nonatomic) double lastEventTime;                                                                //@synthesize lastEventTime=_lastEventTime - In the implementation block
@property (assign,nonatomic) char snarfingWheelEventsForPan;                                                      //@synthesize snarfingWheelEventsForPan=_snarfingWheelEventsForPan - In the implementation block
@property (assign,nonatomic) char snarfingWheelEventsForZoom;                                                     //@synthesize snarfingWheelEventsForZoom=_snarfingWheelEventsForZoom - In the implementation block
@property (nonatomic,retain) ZWKeyboardContext * kbContext;                                                       //@synthesize kbContext=_kbContext - In the implementation block
@property (nonatomic,retain) AXAssertion * disableNotificationCenterAssertionPIPLensOnTop;                        //@synthesize disableNotificationCenterAssertionPIPLensOnTop=_disableNotificationCenterAssertionPIPLensOnTop - In the implementation block
@property (nonatomic,retain) AXAssertion * disableControlCenterAssertionPIPLensOnBottom;                          //@synthesize disableControlCenterAssertionPIPLensOnBottom=_disableControlCenterAssertionPIPLensOnBottom - In the implementation block
@property (nonatomic,retain) AXAssertion * disableNotificationCenterAssertionFullscreenLensNotOnTop;              //@synthesize disableNotificationCenterAssertionFullscreenLensNotOnTop=_disableNotificationCenterAssertionFullscreenLensNotOnTop - In the implementation block
@property (nonatomic,retain) AXAssertion * disableControlCenterAssertionFullscreenLensNotOnBottom;                //@synthesize disableControlCenterAssertionFullscreenLensNotOnBottom=_disableControlCenterAssertionFullscreenLensNotOnBottom - In the implementation block
@property (nonatomic,retain) ZWZoomLensViewController * activeLensViewController;                                 //@synthesize activeLensViewController=_activeLensViewController - In the implementation block
@property (assign,getter=isActiveLensTransitioning,nonatomic) char activeLensTransitioning;                       //@synthesize activeLensTransitioning=_activeLensTransitioning - In the implementation block
@property (nonatomic,retain) ZWLensAutopanner * lensAutopanner;                                                   //@synthesize lensAutopanner=_lensAutopanner - In the implementation block
@property (nonatomic,retain) ZWZoomPIPLensViewController * pipLensViewController;                                 //@synthesize pipLensViewController=_pipLensViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensDragXConstraint;                                            //@synthesize lensDragXConstraint=_lensDragXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensDragYConstraint;                                            //@synthesize lensDragYConstraint=_lensDragYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensWidthConstraint;                                            //@synthesize lensWidthConstraint=_lensWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lensHeightConstraint;                                           //@synthesize lensHeightConstraint=_lensHeightConstraint - In the implementation block
@property (assign,nonatomic) unsigned pipLensEdgeMask;                                                            //@synthesize pipLensEdgeMask=_pipLensEdgeMask - In the implementation block
@property (nonatomic,retain) ZWZoomFullscreenLensViewController * fullscreenLensViewController;                   //@synthesize fullscreenLensViewController=_fullscreenLensViewController - In the implementation block
@property (nonatomic,retain) ZWZoomSlugViewController * slugViewController;                                       //@synthesize slugViewController=_slugViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * slugRingDragXConstraint;                                        //@synthesize slugRingDragXConstraint=_slugRingDragXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * slugRingDragYConstraint;                                        //@synthesize slugRingDragYConstraint=_slugRingDragYConstraint - In the implementation block
@property (assign,nonatomic) unsigned slugEdgeMask;                                                               //@synthesize slugEdgeMask=_slugEdgeMask - In the implementation block
@property (nonatomic,retain) ZWMenuViewController * menuViewController;                                           //@synthesize menuViewController=_menuViewController - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * idleTouchTimer;                                                    //@synthesize idleTouchTimer=_idleTouchTimer - In the implementation block
@property (nonatomic,retain) ZWEventProcessor * eventManager;                                                     //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedValuesSerialQueue;                                //@synthesize cachedValuesSerialQueue=_cachedValuesSerialQueue - In the implementation block
@property (nonatomic,retain) UIView * debugFocusView;                                                             //@synthesize debugFocusView=_debugFocusView - In the implementation block
@property (nonatomic,retain) NSMutableSet * deactivatedAppIDs;                                                    //@synthesize deactivatedAppIDs=_deactivatedAppIDs - In the implementation block
@property (assign,nonatomic,__weak) id<AXUIService> axuiService;                                                  //@synthesize axuiService=_axuiService - In the implementation block
@property (getter=isZoomLensVisible,nonatomic,readonly) char zoomLensVisible; 
@property (getter=isZoomSlugVisible,nonatomic,readonly) char zoomSlugVisible; 
@property (assign,nonatomic) char brailleInputUIIsShowing;                                                        //@synthesize brailleInputUIIsShowing=_brailleInputUIIsShowing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)debugFocusView;
-(ZWLensAutopanner *)lensAutopanner;
-(void)handleSettingsAppDidUpdatePreferredLensMode:(id)arg1 ;
-(void)handleLockButtonWasPressed;
-(void)handleFocusChangedWithType:(int)arg1 rect:(CGRect)arg2 keyboardFrame:(CGRect)arg3 contextId:(unsigned)arg4 ;
-(void)zoomListenerRegistered:(char)arg1 clientIdentifier:(id)arg2 ;
-(void)handleKeyboardWillHideInAppWithBundleID:(id)arg1 ;
-(void)handleKeyboardWillAppearWithFrame:(CGRect)arg1 inAppWithBundleID:(id)arg2 ;
-(void)hideZoomSlugAndLens:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)showZoomSlugAndLens:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)isZoomLensVisible;
-(void)menuViewController:(id)arg1 finishedAdjustingZoomFactor:(float)arg2 ;
-(void)menuViewController:(id)arg1 adjustZoomFactor:(float)arg2 ;
-(char)inStandByForMenuViewController:(id)arg1 ;
-(void)menuViewController:(id)arg1 didChooseLensEffect:(id)arg2 ;
-(char)togglePeekZoomWithMenuViewController:(id)arg1 ;
-(char)toggleSlugVisibilityWithMenuViewController:(id)arg1 ;
-(void)toggleLensResizeModeWithMenuViewController:(id)arg1 ;
-(void)menuViewController:(id)arg1 applyNextLensModeWithCompletion:(/*^block*/id)arg2 ;
-(void)toggleLensVisibilityWithMenuViewController:(id)arg1 ;
-(float)zoomFactorForMenuViewController:(id)arg1 ;
-(char)inFullscreenModeForMenuViewController:(id)arg1 ;
-(void)menuDidDisappear:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 setZoomLevel:(float)arg2 duration:(double)arg3 ;
-(char)usingRelativePushPanningWithFullscreenEventHandler:(id)arg1 ;
-(char)fullscreenEventHandler:(id)arg1 autopanWithLocation:(CGPoint)arg2 initialSingleFingerLocation:(CGPoint)arg3 distance:(float)arg4 animationDuration:(double)arg5 ;
-(int)interfaceOrientationWithFullscreenEventHandler:(id)arg1 ;
-(char)fullscreenEventHandler:(id)arg1 autopanShouldStartWithEvent:(id)arg2 speedFactor:(double*)arg3 initialSingleFingerLocation:(CGPoint)arg4 ;
-(void)fullscreenEventHandler:(id)arg1 setUsingRelativePushPanning:(char)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 storeZoomLevel:(float)arg2 location:(CGPoint)arg3 zoomed:(char)arg4 forKey:(id)arg5 ;
-(CGPoint)zoomLocationWithFullscreenEventHandler:(id)arg1 ;
-(float)storedZoomLevelWithFullscreenEventHandler:(id)arg1 ;
-(void)updateStoredZoomedLevelWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerTripleTapAtLocation:(CGPoint)arg2 ;
-(void)blockControlCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1 ;
-(char)eventProcessor:(id)arg1 didGetWheelEventWithDelta:(long long)arg2 ;
-(void)eventProcessor:(id)arg1 didGetFirstTouchAtLocation:(CGPoint)arg2 ;
-(void)lastFingerWasLiftedWithEventProcessor:(id)arg1 ;
-(char)isBrailleInputUIShowingWithEventProcessor:(id)arg1 ;
-(SCD_Struct_ZW7)currentUIContextForEventProcessor:(id)arg1 ;
-(void)eventProcessorFirstTouchWasForZoomSlug:(id)arg1 ;
-(void)disableZoomWindowHitTestingWithEventProcessor:(id)arg1 ;
-(int)currentInterfaceOrientationForEventProcessor:(id)arg1 ;
-(char)shouldHideGrabbersWithZoomLensViewController:(id)arg1 ;
-(void)zoomLensViewController:(id)arg1 grabberDidReceiveTap:(id)arg2 ;
-(float)zoomLevelWithFullscreenEventHandler:(id)arg1 ;
-(char)isZoomMovingWithVelocityWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 didStartOrbAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didEndOrbAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 updateOrbMovementAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerDownAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveAnyFingerUpAtLocation:(CGPoint)arg2 ;
-(void)stopZoomMovementWithVelocityWithFullscreenEventHandler:(id)arg1 ;
-(void)endZoomMovementWithFullscreenEventHandler:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 updateZoomMovementWithPoint:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 continueZoomMovementWithVelocity:(float)arg2 angle:(float)arg3 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerSingleTapAtLocation:(CGPoint)arg2 ;
-(void)fullscreenEventHandler:(id)arg1 didReceiveThreeFingerDoubleTapAtLocation:(CGPoint)arg2 ;
-(void)blockNotificationCenterGestureIfNeededWithFullscreenEventHandler:(id)arg1 ;
-(void)menuDidAppear:(id)arg1 ;
-(AXDispatchTimer *)idleTouchTimer;
-(id<AXUIService>)axuiService;
-(void)setAxuiService:(id<AXUIService>)arg1 ;
-(id)initWithAXUIService:(id)arg1 ;
-(ZWKeyboardContext *)kbContext;
-(ZWTouchTrapView *)touchTrapView;
-(void)handleDeviceWasUnlocked;
-(void)zoomLensViewControllerDidChangeStandbyMode:(id)arg1 ;
-(unsigned)pipLensEdgeMask;
-(void)handleSettingsAppDidUpdateIdleSlugOpacity:(float)arg1 ;
-(void)handleAppDidEnterBackgroundWithID:(id)arg1 ;
-(void)setKbContext:(ZWKeyboardContext *)arg1 ;
-(void)handleAppDeactivationAnimationWillBegin;
-(double)handleAppSwitcherRevealAnimationDelay;
-(void)setBrailleInputUIIsShowing:(char)arg1 ;
-(void)handleSubstantialAppTransition;
-(double)handleAppDeactivationAnimationDelay;
-(double)handleAppActivationAnimationDelay;
-(void)handleAppSwitcherRevealAnimationWillBegin;
-(void)handleAppActivationAnimationWillBegin;
-(void)handleAppActivationAnimationDidFinish;
-(void)handleDeviceReturnedToClockAtIdle;
-(void)handleHomeButtonWasPressed;
-(ZWSmartZoomManager *)smartZoom;
-(ZWUIMinimapView *)minimapView;
-(void)handleAppDidBecomeActiveWithID:(id)arg1 initialKeyboardFrame:(CGRect)arg2 ;
-(void)zoomLensViewController:(id)arg1 willBeginMovingLens:(id)arg2 ;
-(void)zoomLensViewController:(id)arg1 didMoveLens:(id)arg2 withDelta:(CGPoint)arg3 ;
-(void)zoomLensViewController:(id)arg1 didFinishMovingLens:(id)arg2 ;
-(char)isZoomInStandByModeWithSmartZoom:(id)arg1 ;
-(void)updateFocusWithSmartZoom:(id)arg1 ;
-(char)touchTrapView:(id)arg1 shouldReportSelfInHitTestAtLocation:(CGPoint)arg2 ;
-(void)touchTrapView:(id)arg1 didTrapTouches:(id)arg2 withEvent:(id)arg3 ;
-(void)touchTrapViewActivated:(id)arg1 ;
-(void)willBeginAutopanningLensWithAutopanner:(id)arg1 ;
-(void)didFinishAutopanningLensWithAutopanner:(id)arg1 ;
-(void)autopanner:(id)arg1 didAutopanByDelta:(CGPoint)arg2 ;
-(void)_loadZoomTouchExtras;
-(void)_initializeZoomSettingsIfNeeded;
-(void)setZoomAlertManager:(ZWAlertManager *)arg1 ;
-(void)_updateStealingSingleFingerPanning:(char)arg1 showHUDMessage:(char)arg2 ;
-(void)setCachedValuesSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_initializeEventUIContext;
-(void)setIdleTouchTimer:(AXDispatchTimer *)arg1 ;
-(void)setSlugViewController:(ZWZoomSlugViewController *)arg1 ;
-(void)setLensAutopanner:(ZWLensAutopanner *)arg1 ;
-(void)setPipLensViewController:(ZWZoomPIPLensViewController *)arg1 ;
-(void)setFullscreenLensViewController:(ZWZoomFullscreenLensViewController *)arg1 ;
-(void)setMenuViewController:(ZWMenuViewController *)arg1 ;
-(ZWMenuViewController *)menuViewController;
-(ZWZoomPIPLensViewController *)pipLensViewController;
-(ZWZoomFullscreenLensViewController *)fullscreenLensViewController;
-(ZWZoomSlugViewController *)slugViewController;
-(void)_updateSlugLayoutAnimated:(char)arg1 ;
-(float)setZoomFactorRespectingUserPreferredMaximumZoom:(float)arg1 ;
-(ZWZoomLensViewController *)activeLensViewController;
-(void)_updateMinimapStatus;
-(void)_removeAllSystemGestureDisablingAssertions;
-(void)setDeactivatedAppIDs:(NSMutableSet *)arg1 ;
-(void)setDisableNotificationCenterAssertionPIPLensOnTop:(AXAssertion *)arg1 ;
-(void)setDisableControlCenterAssertionPIPLensOnBottom:(AXAssertion *)arg1 ;
-(void)setDisableNotificationCenterAssertionFullscreenLensNotOnTop:(AXAssertion *)arg1 ;
-(void)setDisableControlCenterAssertionFullscreenLensNotOnBottom:(AXAssertion *)arg1 ;
-(void)_removePIPSystemGestureDisablingAssertions;
-(void)_removeFullscreenSystemGestureDisablingAssertions;
-(char)_pipLensIsNearTopOfScreen;
-(AXAssertion *)disableNotificationCenterAssertionPIPLensOnTop;
-(char)_pipLensIsNearBottomOfScreen;
-(AXAssertion *)disableControlCenterAssertionPIPLensOnBottom;
-(CGSize)_lensDefaultSize;
-(void)setTouchTrapView:(ZWTouchTrapView *)arg1 ;
-(void)sendCurrentZoomAttributes;
-(void)_transitionToLensForMode:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateZoomFactor:(float)arg1 ;
-(void)_updateZoomListeners;
-(ZWAlertManager *)zoomAlertManager;
-(void)_updateLensLayout;
-(void)_updateLensEdgeMaskForZoomController:(id)arg1 ;
-(void)_focusLensOnRect:(CGRect)arg1 panLensContent:(char)arg2 recentreLens:(char)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)_transitionToLens:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableSet *)deactivatedAppIDs;
-(void)_updateKeyboardFrame:(CGRect)arg1 ;
-(void)_setPIPLensResizingEnabled:(char)arg1 ;
-(void)_dismissMenuAnimated:(char)arg1 ;
-(void)_unzoomDueToAppTransitionIfNeeded;
-(void)_rezoomDueToAppTransitionIfNeeded;
-(void)setZoomWasUnzoomedDueToAppTransition:(char)arg1 ;
-(void)setDebugFocusView:(UIView *)arg1 ;
-(void)_moveZoomItemWithController:(id)arg1 byDelta:(CGPoint)arg2 animated:(char)arg3 userInitiated:(char)arg4 ;
-(NSObject*<OS_dispatch_queue>)cachedValuesSerialQueue;
-(char)isActiveLensTransitioning;
-(void)setActiveLensTransitioning:(char)arg1 ;
-(void)setActiveLensViewController:(ZWZoomLensViewController *)arg1 ;
-(void)_beginObservingValuesForLens:(id)arg1 ;
-(void)_applyInitialConstraintsForLensViewController:(id)arg1 ;
-(void)_updateSystemGestureDisablingAssertionsForPipLensPosition;
-(AXAssertion *)disableNotificationCenterAssertionFullscreenLensNotOnTop;
-(AXAssertion *)disableControlCenterAssertionFullscreenLensNotOnBottom;
-(void)_updateSystemGestureDisablingAssertionsForFullscreenZoom;
-(void)_endObservingValuesForLens:(id)arg1 ;
-(void)setLensDragXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLensDragYConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)lensWidthConstraint;
-(void)setLensWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLensHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)lensHeightConstraint;
-(char)_isZoomedToMinimum;
-(CGRect)_determineSuitableLensFrame;
-(NSLayoutConstraint *)lensDragXConstraint;
-(NSLayoutConstraint *)lensDragYConstraint;
-(CGSize)_lensMinimumSize;
-(CGSize)_lensMaximumSize;
-(NSLayoutConstraint *)slugRingDragXConstraint;
-(void)setSlugRingDragXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSlugRingDragYConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)_slugOriginForNormalizedPosition:(CGPoint)arg1 ;
-(NSLayoutConstraint *)slugRingDragYConstraint;
-(CGPoint)_slugNormalizedPositionForCurrentPosition;
-(void)setPipLensEdgeMask:(unsigned)arg1 ;
-(void)setSlugEdgeMask:(unsigned)arg1 ;
-(char)zoomWasUnzoomedDueToAppTransition;
-(char)_isZoomFactorAtMinimum:(float)arg1 ;
-(void)_menuDidDisappear;
-(void)_presentMenuWithAnchorView:(id)arg1 animated:(char)arg2 ignoreCooldown:(char)arg3 ;
-(void)_toggleZoomStandby;
-(void)_prepareToHandleZoomLevelAdjustmentViaGesture;
-(void)_handleZoomLevelAdjustmentViaGesture:(CGPoint)arg1 ;
-(void)_resizeZoomLensByDelta:(CGPoint)arg1 ;
-(void)_exitStandbyIfNecessary;
-(char)isZoomSlugVisible;
-(void)_transitionToNextLensModeAnimated:(char)arg1 saveAsNewPreferredLensMode:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_disableZoomWindowHitTesting;
-(void)_handleZoomWheelEventWithDelta:(long long)arg1 ;
-(void)_handlePanWheelEventWithDelta:(long long)arg1 ;
-(char)brailleInputUIIsShowing;
-(CGPoint)mirrorPanOffsetForRTLIfNecessary:(CGPoint)arg1 ;
-(void)_enableZoomWindowHitTesting;
-(void)_toggleStealingSingleFingerPanning;
-(char)_smartZoomFocusedElementIsBeingSampled;
-(void)_updateOrbLocation:(CGPoint)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(float)_interfaceAwareAdjustedAngleForScreenAngle:(float)arg1 ;
-(void)_zoomMovementHeartbeat;
-(char)_shouldBlockShowNotificationGesture;
-(char)_shouldBlockShowControlCenterGesture;
-(void)_zoomMovementHeartbeat:(double)arg1 fullscreenEventHandler:(id)arg2 ;
-(void)slugWasSingleTappedWithSlugViewController:(id)arg1 ;
-(void)slugWasDoubleTappedWithSlugViewController:(id)arg1 ;
-(void)prepareForSlugZoomPanningWithSlugViewController:(id)arg1 ;
-(char)shouldBeginAutopanningLensWithSlugViewController:(id)arg1 ;
-(void)wantsToStartAutopannerWithSlugViewController:(id)arg1 ;
-(void)zoomSlugViewController:(id)arg1 wantsToAdjustZoomLevelWithDelta:(CGPoint)arg2 ;
-(void)zoomSlugViewController:(id)arg1 didDragSlug:(id)arg2 withDelta:(CGPoint)arg3 ;
-(void)wantsToStopAutopannerWithSlugViewController:(id)arg1 ;
-(void)_enableSmartZoomIfNeeded;
-(void)willBeginAdjustingZoomLevelWithATVEventProcessor:(id)arg1 ;
-(void)atvEventProcessor:(id)arg1 adjustZoomLevelWithDelta:(CGPoint)arg2 ;
-(char)shouldSendTapEventWithATVEventProcessor:(id)arg1 ;
-(float)accruedOvershoot;
-(void)setUnitTestDelegate:(id)arg1 ;
-(char)shouldShowSlugWithSlugViewController:(id)arg1 ;
-(void)setMinimapView:(ZWUIMinimapView *)arg1 ;
-(char)haveTriedScrollingDuringZoomSweep;
-(void)setHaveTriedScrollingDuringZoomSweep:(char)arg1 ;
-(void)setLastEventTime:(double)arg1 ;
-(char)snarfingWheelEventsForPan;
-(float)lastWheelDelta;
-(double)lastEventTime;
-(void)setSnarfingWheelEventsForPan:(char)arg1 ;
-(char)snarfingWheelEventsForZoom;
-(void)setSnarfingWheelEventsForZoom:(char)arg1 ;
-(void)dismissMenuWithMenuViewController:(id)arg1 ;
-(void)setInUnitTestingMode:(char)arg1 ;
-(void)setSmartZoom:(ZWSmartZoomManager *)arg1 ;
-(void)wantsToStopAutopannerWithATVEventProcessor:(id)arg1 ;
-(void)didGetSpeakContentGestureWithATVEventProcessor:(id)arg1 ;
-(unsigned)slugEdgeMask;
-(void)didGetToggleZoomGestureWithATVEventProcessor:(id)arg1 ;
-(void)wantsToStartAutopannerWithATVEventProcessor:(id)arg1 ;
-(void)fullscreenEventHandler:(id)arg1 didThreeFingerOrbAtLocation:(CGPoint)arg2 ;
-(void)setAccruedOvershoot:(float)arg1 ;
-(char)isSweepingToNextZoomRow;
-(void)setIsSweepingToNextZoomRow:(char)arg1 ;
-(void)didGetTogglePanningModeGestureWithATVEventProcessor:(id)arg1 ;
-(double)_calculateDurationForVelocity:(float)arg1 ;
-(void)setLastWheelDelta:(float)arg1 ;
-(void)dealloc;
-(UIView *)containerView;
-(id)title;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(float)reachabilityOffset;
-(CGPoint)zoomPanOffset;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)sendUserEventOccurred;
-(float)zoomLevel;
-(void)setReachabilityOffset:(float)arg1 ;
-(char)hostingWindowShouldMoveForReachability;
-(void)handleReachabilityToggled:(float)arg1 ;
-(void)didAnimateForReachabilityToOffset:(float)arg1 ;
-(CGRect)zoomFrame;
-(float)reachabilityScaleFactor;
-(float)zoomFactor;
-(void)setZoomFactor:(float)arg1 ;
-(ZWEventProcessor *)eventManager;
-(void)setEventManager:(ZWEventProcessor *)arg1 ;
@end

