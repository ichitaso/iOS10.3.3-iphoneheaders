/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoCalendarBridgeSettings.bundle/NanoCalendarBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@interface NCALSettingsController : BPSNotificationAppController
-(id)_alertsEnabled:(id)arg1 ;
-(char)usingCustomCalendars;
-(void)setUsingCustomCalendars:(char)arg1 ;
-(char)showAlertsForSubsectionId:(id)arg1 ;
-(void)setShowAlerts:(char)arg1 forSubsectionId:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)caresAboutSubsections;
-(id)notificationApplicationSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(void)mirrorSettingsChanged:(char)arg1 ;
-(id)applicationBundleIdentifier;
@end
