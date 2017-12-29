/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIUserAgent.h>

@class SBBulletinAlertHandlerRegistry, NSString;

@interface SBUserAgent : NSObject <SBUIUserAgent> {

	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserAgent;
-(CFRunLoopRef)wifiRunLoopRef;
-(char)isIdleTimerDisabledForReason:(id)arg1 ;
-(char)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(char)arg4 options:(id)arg5 ;
-(char)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 ;
-(id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 ;
-(void)_cleanupFromBannerLaunch;
-(char)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(char)arg4 animate:(char)arg5 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(char)arg1 andDimScreen:(char)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(/*^block*/id)arg3 deactivationHandler:(/*^block*/id)arg4 ;
-(id)foregroundDisplayID;
-(char)isApplicationForegroundObscured:(id)arg1 ;
-(char)applicationInstalledForDisplayID:(id)arg1 ;
-(char)deviceIsTethered;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1 ;
-(char)canUserLaunchIcon;
-(char)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(char)arg4 ;
-(char)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 ;
-(char)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(char)arg3 animate:(char)arg4 ;
-(void)adjustLockScreenContentByOffset:(float)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3 ;
-(void)updateLockScreenInterfaceIfNecessary;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(char)arg1 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(char)arg2 ;
-(id)topSuspendedEventsOnlyDisplayID;
-(id)init;
-(int)activeInterfaceOrientation;
-(char)isInternalInstall;
-(char)isScreenOn;
-(void)setWallpaperTunnelActive:(char)arg1 forFullscreenAlertController:(id)arg2 ;
-(void)updateInterfaceOrientationIfNecessary;
-(char)springBoardIsActive;
-(char)deviceIsLocked;
-(char)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3 ;
-(char)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3 ;
-(void)setIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(char)deviceIsPasscodeLocked;
-(char)deviceIsPasscodeLockedRemotely;
-(char)lockScreenIsShowing;
-(id)folderNameForDisplayID:(id)arg1 ;
-(void)notifyOnNextUserEvent;
-(char)openURL:(id)arg1 allowUnlock:(char)arg2 animated:(char)arg3 ;
-(id)modalBulletinAlertHandlerRegistry;
-(void)activateModalBulletinAlert:(id)arg1 ;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(char)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2 ;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
-(id)foregroundApplicationDisplayID;
-(char)alertIsActive;
-(void)setIdleText:(id)arg1 ;
-(void)undimScreen;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
-(char)deviceIsBlocked;
-(id)localizedDisplayNameForDisplayID:(id)arg1 ;
-(char)isApplicationRestrictedOrHidden:(id)arg1 ;
@end

