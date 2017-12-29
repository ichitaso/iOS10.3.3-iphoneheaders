/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXIPCServer.h>

@protocol GAXBackboardServerDelegate;
@interface GAXBackboardServer : AXIPCServer {

	id<GAXBackboardServerDelegate> _backboardDelegate;

}

@property (assign,nonatomic) id<GAXBackboardServerDelegate> backboardDelegate;              //@synthesize backboardDelegate=_backboardDelegate - In the implementation block
-(id)_handlePasscodeChanged:(id)arg1 ;
-(id)_handleAppDidBecomeActive:(id)arg1 ;
-(id)_handleGAXClientDidLoad:(id)arg1 ;
-(id)_handleDeviceWasUnlocked:(id)arg1 ;
-(id)_handleGetActiveAppInterfaceOrientation:(id)arg1 ;
-(id)_handleDidFinishLaunchingApplication:(id)arg1 ;
-(id)_handleSystemDidRestartDueToLowBattery:(id)arg1 ;
-(id)_handleStateForRestrictionWithIdentifier:(id)arg1 ;
-(id)_handleDeviceWasLocked:(id)arg1 ;
-(id)_handleDidShowTripleClickAlert:(id)arg1 ;
-(id)_handleDidShowVoiceOverItemChooser:(id)arg1 ;
-(id)_handleLockscreenUIIsShowing:(id)arg1 ;
-(id)_handleWhitelistedLockscreenUIIsShowing:(id)arg1 ;
-(id)_handleSBMiniAlertIsShowing:(id)arg1 ;
-(id)_handleIsMakingEmergencyCall:(id)arg1 ;
-(id)_handlePresentGuidedAccessActiveBannder:(id)arg1 ;
-(id)_handleIsRectInIgnoredRegion:(id)arg1 ;
-(id)_handleShouldShowKeyboardsInViewServices:(id)arg1 ;
-(id)_handleGetAppLaunchGeneration:(id)arg1 ;
-(id<GAXBackboardServerDelegate>)backboardDelegate;
-(void)setBackboardDelegate:(id<GAXBackboardServerDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
@end

