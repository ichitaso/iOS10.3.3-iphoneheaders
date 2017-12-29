/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CheckerBoard/CheckerBoard-Structs.h>
#import <FrontBoard/FBSystemApp.h>
#import <CheckerBoard/SBUIPowerDownViewControllerDelegate.h>

@class CBWindow, NSTimer, CBIdleSleepManager, _UIFeedbackEventBehavior, NSString;

@interface CBApplication : FBSystemApp <SBUIPowerDownViewControllerDelegate> {

	char _powerDownUIVisible;
	char _thermalWarningUIVisible;
	char _wifiPickerUIVisible;
	char _allowWiFiSettingsAction;
	char _homeButtonPressedWithDisplayDim;
	char _homeButtonActionSheetVisible;
	char _lockButtonPressedWithDisplayDim;
	CBWindow* _powerDownWindow;
	CBWindow* _thermalWarningWindow;
	CBWindow* _wifiPickerWindow;
	NSTimer* _lockButtonTimer;
	CBIdleSleepManager* _idleSleepManager;
	_UIFeedbackEventBehavior* _feedbackEventBehavior;

}

@property (nonatomic,retain) CBWindow * powerDownWindow;                                    //@synthesize powerDownWindow=_powerDownWindow - In the implementation block
@property (assign,nonatomic) char powerDownUIVisible;                                       //@synthesize powerDownUIVisible=_powerDownUIVisible - In the implementation block
@property (nonatomic,retain) CBWindow * thermalWarningWindow;                               //@synthesize thermalWarningWindow=_thermalWarningWindow - In the implementation block
@property (assign,nonatomic) char thermalWarningUIVisible;                                  //@synthesize thermalWarningUIVisible=_thermalWarningUIVisible - In the implementation block
@property (nonatomic,retain) CBWindow * wifiPickerWindow;                                   //@synthesize wifiPickerWindow=_wifiPickerWindow - In the implementation block
@property (assign,nonatomic) char wifiPickerUIVisible;                                      //@synthesize wifiPickerUIVisible=_wifiPickerUIVisible - In the implementation block
@property (assign,nonatomic) char allowWiFiSettingsAction;                                  //@synthesize allowWiFiSettingsAction=_allowWiFiSettingsAction - In the implementation block
@property (assign,nonatomic) char homeButtonPressedWithDisplayDim;                          //@synthesize homeButtonPressedWithDisplayDim=_homeButtonPressedWithDisplayDim - In the implementation block
@property (assign,nonatomic) char homeButtonActionSheetVisible;                             //@synthesize homeButtonActionSheetVisible=_homeButtonActionSheetVisible - In the implementation block
@property (nonatomic,retain) NSTimer * lockButtonTimer;                                     //@synthesize lockButtonTimer=_lockButtonTimer - In the implementation block
@property (assign,nonatomic) char lockButtonPressedWithDisplayDim;                          //@synthesize lockButtonPressedWithDisplayDim=_lockButtonPressedWithDisplayDim - In the implementation block
@property (nonatomic,retain) CBIdleSleepManager * idleSleepManager;                         //@synthesize idleSleepManager=_idleSleepManager - In the implementation block
@property (nonatomic,retain) _UIFeedbackEventBehavior * feedbackEventBehavior;              //@synthesize feedbackEventBehavior=_feedbackEventBehavior - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)registerAsSystemApp;
+(char)runStatusBarServer;
+(char)shouldCheckInWithBackboard;
-(void)_handleThermalWarningScreenPresentation;
-(void)_showWiFiSettingsAction;
-(void)_hideWiFiSettingsAction;
-(void)_dismissNetworkViewController;
-(void)setAllowWiFiSettingsAction:(char)arg1 ;
-(CBWindow *)wifiPickerWindow;
-(void)setWifiPickerUIVisible:(char)arg1 ;
-(char)__handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_homeButtonDown;
-(void)_homeButtonUp;
-(void)_ringerSwitchDown;
-(void)_ringerSwitchUp;
-(void)_lockButtonDown;
-(void)_lockButtonUp;
-(CBIdleSleepManager *)idleSleepManager;
-(void)setHomeButtonPressedWithDisplayDim:(char)arg1 ;
-(char)powerDownUIVisible;
-(char)thermalWarningUIVisible;
-(char)homeButtonPressedWithDisplayDim;
-(char)homeButtonActionSheetVisible;
-(void)setHomeButtonActionSheetVisible:(char)arg1 ;
-(char)allowWiFiSettingsAction;
-(char)wifiPickerUIVisible;
-(void)setWifiPickerWindow:(CBWindow *)arg1 ;
-(_UIFeedbackEventBehavior *)feedbackEventBehavior;
-(void)setLockButtonPressedWithDisplayDim:(char)arg1 ;
-(void)_startLockButtonTimer;
-(void)_lockButtonLongPress;
-(void)setLockButtonTimer:(NSTimer *)arg1 ;
-(void)setPowerDownUIVisible:(char)arg1 ;
-(void)setPowerDownWindow:(CBWindow *)arg1 ;
-(NSTimer *)lockButtonTimer;
-(char)_isLockButtonTimerValid;
-(void)_cancelLockButtonTimer;
-(char)lockButtonPressedWithDisplayDim;
-(CBWindow *)powerDownWindow;
-(void)setThermalWarningUIVisible:(char)arg1 ;
-(void)setThermalWarningWindow:(CBWindow *)arg1 ;
-(CBWindow *)thermalWarningWindow;
-(void)setIdleSleepManager:(CBIdleSleepManager *)arg1 ;
-(void)setFeedbackEventBehavior:(_UIFeedbackEventBehavior *)arg1 ;
-(id)init;
-(char)_isSpringBoard;
-(char)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)_handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)powerDownViewRequestPowerDown:(id)arg1 ;
-(void)powerDownViewRequestCancel:(id)arg1 ;
-(void)_registerForNotifications;
@end
