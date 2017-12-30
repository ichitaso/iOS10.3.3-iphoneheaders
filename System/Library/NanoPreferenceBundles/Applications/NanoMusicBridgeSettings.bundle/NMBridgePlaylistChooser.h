/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMusicBridgeSettings.bundle/NanoMusicBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class NSArray, UIViewController, PSRootController, PSSpecifier, NSString;

@interface NMBridgePlaylistChooser : UITableViewController <PSController> {

	NSArray* _playlists;
	char _waitingForActiveSyncSessionIdentifierChange;
	char _shouldShowAutofillSection;
	id _lastActiveSyncSessionIdentifier;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;

}

@property (assign,nonatomic) UIViewController*<PSController> parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                             //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)_sectionNumberPlaylist;
-(int)_sectionNumberNone;
-(int)_sectionNumberAutofill;
-(id)_titleForAutofillTypeAtRow:(unsigned)arg1 ;
-(id)playlistAtPath:(id)arg1 ;
-(void)_syncManagerSyncStateDidChangeNotification:(id)arg1 ;
-(void)_handleActiveDeviceDidChangeNotification;
-(void)_updateShouldShowAutofillSection;
-(unsigned)_syncTypeForRow:(unsigned)arg1 ;
-(void)_updateSelectedCellSyncStatus:(id)arg1 ;
-(PSSpecifier *)specifier;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)suspend;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)_numberOfSections;
-(void)_reloadData;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSRootController *)rootController;
-(void)setRootController:(PSRootController *)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(char)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(float)arg1 ;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(id)localizedPaneTitle;
-(char)canBeShownFromSuspendedState;
@end
