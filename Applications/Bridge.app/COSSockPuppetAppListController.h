/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAppListController.h>
#import <Bridge/ACXDeviceConnectionDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class BPSAppGlanceManager, PSSpecifier, NSString;

@interface COSSockPuppetAppListController : PSAppListController <ACXDeviceConnectionDelegate, MCProfileConnectionObserver> {

	BPSAppGlanceManager* _manager;
	PSSpecifier* _glanceSpecifier;

}

@property (nonatomic,retain) BPSAppGlanceManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) PSSpecifier * glanceSpecifier;              //@synthesize glanceSpecifier=_glanceSpecifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshGlanceSpecifierEnableStateAndReloadSpecifier:(char)arg1 ;
-(void)launchTestFlight:(id)arg1 ;
-(char)showsOnGizmoEnabled;
-(void)setPuppetAppShows:(id)arg1 specifier:(id)arg2 ;
-(id)puppetAppShows:(id)arg1 ;
-(void)restrictShowOnWatchSpecifierIfNecessary:(id)arg1 ;
-(id)customSpecifiers;
-(void)_resetAfterSockPuppetResponseWithState:(int)arg1 ;
-(PSSpecifier *)glanceSpecifier;
-(void)setGlanceSpecifier:(PSSpecifier *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(id)bundle;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)systemPolicy;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BPSAppGlanceManager *)manager;
-(void)setManager:(BPSAppGlanceManager *)arg1 ;
-(void)updateInstallStateForApplication:(id)arg1 installState:(int)arg2 ;
-(id)device;
-(id)specifiers;
@end
