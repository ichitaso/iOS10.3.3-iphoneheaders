/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDViewDelegateControl.h>
#import <assistivetouchd/HNDWindowDelegateProtocol.h>

@class AXDispatchTimer, HNDWindow, HNDRocker, UIView, HNDView, HNDFingerView, HNDPinchChainView, NSMutableArray, NSDictionary, AXUIClient, NSString, NSMutableSet;

@interface HNDDisplayManager : NSObject <HNDViewDelegateControl, HNDWindowDelegateProtocol> {

	AXDispatchTimer* _idleTimer;
	AXDispatchTimer* _longIdleTimer;
	HNDWindow* _window;
	HNDWindow* _ignoredWindow;
	HNDRocker* _rocker;
	UIView* _contentView;
	UIView* _fingerContentView;
	UIView* _scannerContentView;
	UIView* _scannerBackCursorView;
	UIView* _scannerFrontCursorView;
	HNDView* _rockerDismiss;
	HNDView* _multiTouchBackgound;
	CGPoint _currentPoint;
	CGPoint _menuPoint;
	CGPoint _previousMenuPoint;
	double _menuOpenTime;
	CGPoint _menuOpenDistance;
	CGPoint _pointBeforePinch;
	char _menuDownWillFireAutomaticUp;
	CGRect _screenBounds;
	HNDFingerView* _pinchFinger1;
	HNDFingerView* _pinchFinger2;
	HNDPinchChainView* _pinchChain;
	int _orientation;
	NSMutableArray* _fingers;
	char _showingHoverOverMenu;
	char _isPressedDown;
	char _openedMenuOnDown;
	char _inPinchMode;
	double _nubbitTouchToUpTimeLatency;
	double _nubbitTouchDownTime;
	SCRCMathAverageValue _nubbitDistanceTracking;
	SCRCMathAverageValue _nubbitAngleTracking;
	float _nubbitVelocity;
	char _nubbitMoving;
	CGPoint _downPoint;
	CGPoint _movePoint;
	CGPoint _nubbitStartDownPoint;
	HNDView* _downView;
	unsigned _lastHandType;
	float _maxOrbDuringTouch;
	float _nubbitPositionPercentage;
	int _nubbitPositionEdge;
	CGPoint _preKeyboardMovePosition;
	char _visualsHidden;
	AXDispatchTimer* _positionSetTimer;
	char _keyboardVisible;
	CGRect _keyboardFrame;
	AXDispatchTimer* _singleItemActivationDownTimer;
	char _orbActionExists;
	char _playedHapticForCurrentEvent;
	NSDictionary* _lastReachabilityPayload;
	AXUIClient* _userInterfaceClient;
	NSString* _reachabilityHandlerIdentifier;
	float _reachabilityOffset;
	NSMutableSet* _userInterfaceClientEnablers;

}

@property (nonatomic,copy) NSString * reachabilityHandlerIdentifier;                  //@synthesize reachabilityHandlerIdentifier=_reachabilityHandlerIdentifier - In the implementation block
@property (assign,nonatomic) float reachabilityOffset;                                //@synthesize reachabilityOffset=_reachabilityOffset - In the implementation block
@property (nonatomic,retain) AXUIClient * userInterfaceClient;                        //@synthesize userInterfaceClient=_userInterfaceClient - In the implementation block
@property (nonatomic,retain) NSMutableSet * userInterfaceClientEnablers;              //@synthesize userInterfaceClientEnablers=_userInterfaceClientEnablers - In the implementation block
@property (assign,nonatomic) char showingHoverOverMenu;                               //@synthesize showingHoverOverMenu=_showingHoverOverMenu - In the implementation block
@property (nonatomic,readonly) UIView * scannerContentView; 
@property (nonatomic,readonly) UIView * scannerBackCursorView; 
@property (nonatomic,readonly) UIView * scannerFrontCursorView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)fadeDuration;
+(void)initialize;
+(id)sharedManager;
-(void)restartWithCompletion:(/*^block*/id)arg1 ;
-(void)hideVisuals:(char)arg1 animate:(char)arg2 ;
-(void)deviceCountChanged:(int)arg1 ;
-(CGPoint)hoverMoved:(CGPoint)arg1 ;
-(char)acceptsHitTest:(CGPoint)arg1 ;
-(void)initializeDisplayWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateNubbitPosition;
-(void)_startHandlingReachabilityIfNeeded;
-(void)_updateViewsForOrientation;
-(void)updateMenuStyle;
-(NSMutableSet *)userInterfaceClientEnablers;
-(void)_setupUserInterfaceClient;
-(void)_endHandlingReachabilityIfNeeded;
-(void)_cleanupUserInterfaceClient;
-(void)_handleReachability:(id)arg1 ;
-(char)multiTouchToolBackgroundEnabled;
-(CGRect)rotatedScreenBounds;
-(CGPoint)_nubbitPointForEdgePosition;
-(int)_angleForDegrees:(float)arg1 ;
-(CGPoint)closestNubbitPositionForPoint:(CGPoint)arg1 offsetByMidpoint:(char)arg2 ;
-(void)_moveNubbitToPosition:(CGPoint)arg1 forKeyboard:(char)arg2 ;
-(CGPoint)_validateNubbitPosition:(CGPoint)arg1 forKeyboard:(char)arg2 ;
-(CGPoint)nubbitPositionForFlick:(CGPoint)arg1 ;
-(void)_moveNubbitToPosition:(CGPoint)arg1 ;
-(CGPoint)_nubbitPositionForKeyboardFrame:(CGRect)arg1 ;
-(char)_nubbitIsOverKeyboard:(CGRect)arg1 ;
-(void)_moveNubbitAboveKeyboard:(CGRect)arg1 ;
-(CGPoint)convertPointToOrientation:(CGPoint)arg1 ;
-(float)_iconScaleForForce:(float)arg1 ;
-(char)inPinchMode;
-(id)viewAtDisplayPoint:(CGPoint)arg1 downPoint:(CGPoint*)arg2 window:(id)arg3 ;
-(void)_repositionNubbitAfterLift:(CGPoint)arg1 ;
-(void)resetNubbitLocation;
-(void)_handleNubbitMove:(CGPoint)arg1 event:(id)arg2 ;
-(void)updateRockersForSubstantialTransition;
-(CGPoint)convertPoint:(CGPoint)arg1 fromOrientation:(int)arg2 ;
-(id)addFinger:(CGPoint)arg1 active:(char)arg2 ;
-(void)showMultiFingersWithPoints:(id)arg1 alpha:(float)arg2 ;
-(void)removeMultiFingers:(char)arg1 ;
-(id)addFinger:(CGPoint)arg1 ;
-(CGPoint)convertPointFromOrientation:(CGPoint)arg1 ;
-(char)_shouldEnableMultiTouchToolBackground;
-(void)setMultiTouchToolBackgroundEnabled:(char)arg1 ;
-(void)showPrimaryFinger:(char)arg1 active:(char)arg2 location:(CGPoint)arg3 ;
-(void)showPinchFingers:(char)arg1 withPoint:(CGPoint)arg2 ;
-(void)_longIdleTimerFired;
-(void)activateDisplayItems;
-(CGPoint)_renormalizedPointDifference:(CGPoint)arg1 ;
-(void)modifyRealPinch:(CGPoint)arg1 finger:(id)arg2 ;
-(void)_updatePinchChainFrame;
-(float)_rotationDegreesForOrientation:(int)arg1 ;
-(void)_hoverMultiFingers:(CGPoint)arg1 ;
-(void)adjustMultiFingersToScreenCenter;
-(char)_position:(CGPoint)arg1 isOverKeyboard:(CGRect)arg2 ;
-(void)_updateCurrentPoint:(CGPoint)arg1 ;
-(void)cancelImplodeAnimation;
-(void)_multiFingers:(char)arg1 animated:(char)arg2 ;
-(char)initialMenuDownHasFinished;
-(char)initialDownMenuCanTransitionToPressDown;
-(void)_handlePinchPress:(char)arg1 ;
-(CGPoint)_menuPointForFingerLayout;
-(void)removeMultiFingers:(char)arg1 animateToPoint:(CGPoint)arg2 ;
-(void)_updateRockerReachability;
-(void)showPinchFingers:(char)arg1 withPoint:(CGPoint)arg2 animateToVisible:(char)arg3 alpha:(float)arg4 ;
-(void)resetPinchChain:(CGPoint)arg1 ;
-(CGPoint)_onScreenMidpointForPinchChainMidpoint:(CGPoint)arg1 ;
-(void)getFirstFingerPosition:(CGPoint*)arg1 secondFingerPosition:(CGPoint*)arg2 forPinchAroundFulcrum:(CGPoint)arg3 ;
-(void)_deviceCountChanged:(id)arg1 ;
-(void)updateRingerSwitch;
-(void)updateRotationLockSwitch;
-(void)volumeChanged;
-(void)setUserInterfaceClientEnablers:(NSMutableSet *)arg1 ;
-(void)viewPressedDown:(id)arg1 ;
-(void)viewPressedUp:(id)arg1 ;
-(void)viewOrbActionTriggered:(id)arg1 ;
-(void)placeNubbitAtBottomCenter;
-(void)_hoverFingerRecorder:(CGPoint)arg1 ;
-(void)keyboardVisible:(char)arg1 withFrame:(CGRect)arg2 ;
-(id)viewAtDisplayPoint:(CGPoint)arg1 ;
-(char)handleRealEvent:(id)arg1 ;
-(id)fingerViews;
-(id)multiFingers;
-(char)canMoveFinger:(int)arg1 toPoint:(CGPoint)arg2 ;
-(void)moveFinger:(int)arg1 toPoint:(CGPoint)arg2 ;
-(void)setFingerAtIndex:(int)arg1 pressed:(char)arg2 ;
-(void)showMultiFingersWithPoints:(id)arg1 ;
-(id)currentMultiFingerPositions;
-(CGPoint)modifyFakePinch:(CGPoint)arg1 ;
-(void)modifyPinch:(char)arg1 angle:(float)arg2 movement:(CGPoint)arg3 ;
-(unsigned)isFingerInCorner;
-(void)setOrientation:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(CGPoint)rotatedScreenPoint;
-(CGPoint)screenPoint;
-(void)fingerFinishedImplosion:(id)arg1 ;
-(void)showCircleMenu:(char)arg1 ;
-(void)performPress:(int)arg1 type:(int)arg2 ;
-(void)setFingersVisible:(char)arg1 animated:(char)arg2 ;
-(CGPoint)absoluteCentroidForMultifingers:(CGPoint)arg1 ;
-(CGPoint)standardCentroidForMultifingers:(CGPoint)arg1 ;
-(CGPoint)centroidForPinchChainMidPoint:(CGPoint)arg1 ;
-(void)showPrimaryFinger:(char)arg1 location:(CGPoint)arg2 ;
-(char)visualsHidden;
-(void)updatePinchChain;
-(void)hidePinchFingers;
-(void)handlePinchToolBeginMove;
-(void)handlePinchToolEndMove;
-(char)inNubbitMode;
-(void)transformSizeOfCustomGestureIconWithForce:(float)arg1 ;
-(void)addUserInterfaceClientEnabler:(id)arg1 ;
-(void)removeUserInterfaceClientEnabler:(id)arg1 ;
-(void)showSimpleAlertWithText:(id)arg1 ;
-(void)showSimpleBannerWithTitle:(id)arg1 text:(id)arg2 ;
-(UIView *)scannerContentView;
-(UIView *)scannerFrontCursorView;
-(UIView *)scannerBackCursorView;
-(CGPoint)_testingRockerPosition;
-(char)showingHoverOverMenu;
-(void)setShowingHoverOverMenu:(char)arg1 ;
-(void)setUserInterfaceClient:(AXUIClient *)arg1 ;
-(AXUIClient *)userInterfaceClient;
-(id)init;
-(void)dealloc;
-(id)window;
-(int)orientation;
-(char)isMenuVisible;
-(CGPoint)point;
-(void)_idleTimerFired;
-(CGRect)screenBounds;
-(void)cleanup;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_startIdleTimer;
-(float)reachabilityOffset;
-(int)fingerCount;
-(void)setReachabilityHandlerIdentifier:(NSString *)arg1 ;
-(void)setReachabilityOffset:(float)arg1 ;
-(NSString *)reachabilityHandlerIdentifier;
-(void)showMenu:(char)arg1 ;
@end

