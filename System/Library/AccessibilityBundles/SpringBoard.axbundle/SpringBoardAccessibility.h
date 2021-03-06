/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/__SpringBoardAccessibility_super.h>

@interface SpringBoardAccessibility : __SpringBoardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(char)_isDim;
-(void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 updateMirroredDisplays:(char)arg3 force:(char)arg4 logMessage:(id)arg5 ;
-(void)_accessibilityHandleOrientationChange;
-(void)_accessibilityUpdateSpeakScreenGestureRecognizer;
-(void)_proximityChanged:(id)arg1 ;
-(void)_accessibilitySetShouldLoadAXInfoOnAppLaunchFinish:(char)arg1 ;
-(void)_accessibilityLoadPIPInfo;
-(void)_accessibilitySetShouldCallAXStatusChangedOnAppLaunchFinish:(char)arg1 ;
-(char)_accessibilityShouldCallAXStatusChangedOnAppLaunchFinish;
-(char)_accessibilityShouldLoadAXInfoOnAppLaunchFinish;
-(void)restartManagerWillReboot:(id)arg1 ;
-(void)powerDownRequested:(id)arg1 ;
-(char)_accessibilityIsSystemSleeping;
-(char)_accessibilityIsVoiceControlRunning;
-(int)_accessibilityCurrentCallState;
-(char)_accessibilityIsSystemLocked;
-(char)_accessibilityIsBatteryLow;
-(char)_accessibilityAssistantIsListening;
-(char)_accessibilitySystemWideGestureInProgress;
-(char)_accessibilityIsAppSwitcherVisible;
-(char)_accessibilityIsQuietModeEnabled;
-(id)_accessibilityCenterPointOfScreen;
-(id)_accessibilitySideAppDividerElement;
-(id)_accessibilityPictureInPictureWindow;
-(char)_accessibilityIsBuddyRunning;
-(void)_updateRingerState:(int)arg1 withVisuals:(char)arg2 updatePreferenceRegister:(char)arg3 ;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1 ;
-(void)__accessibilityUpdateSpeakScreenGestureRecognizer;
-(id)_accessibilitySpeakScreenGestureRecognizer;
-(void)_accessibilityHandleSpeakScreenGesture:(id)arg1 ;
-(void)_accessibilitySetSpeakScreenGestureRecognizer:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(char)handleDoubleHeightStatusBarTap:(int)arg1 ;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(void)_accessibilityStatusChanged:(id)arg1 ;
-(char)_accessibilityIsAppReadyToBeProbed;
-(char)_accessibilityHitTestsStatusBar;
-(char)_accessibilitySystemAppServerIsReady;
-(id)_accessibilitySoftwareMimicKeyboard;
-(id)_accessibilityStatusBar;
-(int)_accessibilityApplicationOrientation;
-(id)_accessibilityLaunchableApps;
-(id)_accessibilityAppSwitcherApps;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)accessibilityInitialize;
-(char)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(char)accessibilityStartStopToggle;
-(void)accessibilityDisable;
-(char)_accessibilityIsSystemAppServer;
@end

