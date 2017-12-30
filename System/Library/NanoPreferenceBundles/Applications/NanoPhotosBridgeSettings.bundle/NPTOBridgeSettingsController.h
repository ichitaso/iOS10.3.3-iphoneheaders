/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class PSSpecifier, NSMutableArray;

@interface NPTOBridgeSettingsController : BPSNotificationAppController {

	PSSpecifier* _amountGroupSpecifier;
	NSMutableArray* _appGroupSpecifiers;
	double _lastDeviceGB;
	double _lastDeviceGBRetrieved;
	id _syncedAlbumIdentifierPreferenceObserver;

}
-(char)_companionShowsAlerts;
-(void)syncedAlbumChanged;
-(id)amount:(id)arg1 ;
-(id)albumTitle:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)reloadSpecifiers;
-(char)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(id)applicationBundleIdentifier;
@end
