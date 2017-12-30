/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicSettings/MusicSettings-Structs.h>
#import <MusicSettings/MusicSettingsListViewController.h>
#import <MusicSettings/MPTermsViewControllerDelegate.h>

@protocol PSStorageReporting;
@class PSUsageBundleApp, HSCloudClient, NSString;

@interface MusicSettingsController : MusicSettingsListViewController <MPTermsViewControllerDelegate> {

	char _overridingAccountStatus;
	SCD_Struct_Mu1 _accountStatus;
	int _lateNightModeToken;
	char _lateNightModeTokenIsValid;
	char _needsUpdateOnAppear;
	id<PSStorageReporting> _storageReporter;
	PSUsageBundleApp* _musicUsageBundle;
	HSCloudClient* _cloudClient;

}

@property (nonatomic,readonly) HSCloudClient * cloudClient;              //@synthesize cloudClient=_cloudClient - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)musicUsageLinkDetailDescription:(id)arg1 ;
-(id)optimizeStorageStateDescription:(id)arg1 ;
-(id)homeSharingSignOutButtonLabel;
-(id)cellularDataSettingsEnabled;
-(id)hasStarRatings;
-(id)resetMediaLibraryEnabled;
-(id)hasDownloadedMusic;
-(void)appleMusicSubscribe:(id)arg1 ;
-(void)homeSharingSignInButtonAction:(id)arg1 ;
-(void)homeSharingSignOutButtonAction:(id)arg1 ;
-(id)cellularDataStateDescription:(id)arg1 ;
-(id)shouldAddPlaylistSongsToMyMusic:(id)arg1 ;
-(void)setShouldAddPlaylistSongsToMyMusic:(id)arg1 specifier:(id)arg2 ;
-(id)volumeLimitEnabled:(id)arg1 ;
-(void)setCloudLibraryEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)cellularDataGroupFooterText;
-(id)isCloudLibraryEnabled:(id)arg1 ;
-(id)valueForMusicCapability:(id)arg1 ;
-(void)resetLibrary:(id)arg1 ;
-(void)setGeniusEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setEQ:(id)arg1 specifier:(id)arg2 ;
-(void)_debugTap:(id)arg1 ;
-(void)_cloudServiceStatusMatchStatusDidChangeNotification:(id)arg1 ;
-(void)_cloudServiceStatusCloudLibraryEnabledChangedNotification:(id)arg1 ;
-(void)_cloudServiceStatusSubscriptionAvailablilityChangedNotification:(id)arg1 ;
-(void)_cloudServiceStatusSubscriptionStatusChangedNotification:(id)arg1 ;
-(void)_cloudAddToPlaylistBehaviorDidChangeNotification:(id)arg1 ;
-(void)_reloadAccountStatus;
-(void)_failEnableGenius;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)stringsTable;
-(void)termsViewControllerDidCancel:(id)arg1 ;
-(void)termsViewControllerShouldDismiss:(id)arg1 ;
-(void)termsViewController:(id)arg1 loadTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)termsViewController:(id)arg1 acceptTermsAndConditions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HSCloudClient *)cloudClient;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)_enableGenius;
-(id)specifiers;
@end
