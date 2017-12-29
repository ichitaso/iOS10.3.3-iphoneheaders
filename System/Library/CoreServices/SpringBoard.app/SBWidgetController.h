/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/WGWidgetDiscoveryControllerDelegate.h>
#import <SpringBoard/SBExtensionHandling.h>

@class WGWidgetDiscoveryController, NSString;

@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling> {

	WGWidgetDiscoveryController* _widgetDiscoveryController;

}

@property (getter=_widgetDiscoveryController,nonatomic,retain) WGWidgetDiscoveryController * widgetDiscoveryController;              //@synthesize widgetDiscoveryController=_widgetDiscoveryController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_widgetDiscoveryController;
-(void)_reloadWidgetPreferences;
-(id)newWidgetGroupViewController;
-(void)setWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 ;
-(id)init;
-(char)isWidgetExtensionVisible:(id)arg1 ;
-(char)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg1 ;
-(char)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg1 ;
-(id)whiteStatusBarAssertionForWidgetDiscoveryController:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2 ;
-(id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2 ;
-(void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3 ;
-(char)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2 ;
-(char)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1 ;
@end

