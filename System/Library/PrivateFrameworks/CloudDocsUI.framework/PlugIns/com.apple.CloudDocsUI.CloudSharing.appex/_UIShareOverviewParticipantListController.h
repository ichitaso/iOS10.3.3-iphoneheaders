/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:28 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/PlugIns/com.apple.CloudDocsUI.CloudSharing.appex/com.apple.CloudDocsUI.CloudSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.CloudDocsUI.CloudSharing/_UIShareOverviewController.h>
#import <com.apple.CloudDocsUI.CloudSharing/_UIShareInvitationSettingsDelegate.h>
#import <libobjc.A.dylib/_UIArrayControllerDelegate.h>
#import <com.apple.CloudDocsUI.CloudSharing/BRParticipantInfoViewControllerDelegate.h>
#import <com.apple.CloudDocsUI.CloudSharing/BRShareInvitationNavigationStackController.h>

@class BRShareSettings, UITableView, _UIShareTableStaticDataSource, CKShareParticipantArrayController, NSOrderedSet, _UIShareOverviewActionController, NSString;

@interface _UIShareOverviewParticipantListController : _UIShareOverviewController <_UIShareInvitationSettingsDelegate, _UIArrayControllerDelegate, BRParticipantInfoViewControllerDelegate, BRShareInvitationNavigationStackController> {

	BRShareSettings* _settings;
	UITableView* _staticTableView;
	_UIShareTableStaticDataSource* _staticTableDataSource;
	CKShareParticipantArrayController* _participantArrayController;
	NSOrderedSet* _modelSnapshot;
	_UIShareOverviewActionController* _addPeopleViewController;

}

@property (nonatomic,retain) UITableView * staticTableView;                                                  //@synthesize staticTableView=_staticTableView - In the implementation block
@property (nonatomic,retain) _UIShareTableStaticDataSource * staticTableDataSource;                          //@synthesize staticTableDataSource=_staticTableDataSource - In the implementation block
@property (nonatomic,retain) CKShareParticipantArrayController * participantArrayController;                 //@synthesize participantArrayController=_participantArrayController - In the implementation block
@property (nonatomic,retain) NSOrderedSet * modelSnapshot;                                                   //@synthesize modelSnapshot=_modelSnapshot - In the implementation block
@property (assign,nonatomic,__weak) _UIShareOverviewActionController * addPeopleViewController;              //@synthesize addPeopleViewController=_addPeopleViewController - In the implementation block
@property (nonatomic,copy) BRShareSettings * settings;                                                       //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shareDidChange;
-(void)setStaticTableView:(UITableView *)arg1 ;
-(UITableView *)staticTableView;
-(void)setStaticTableDataSource:(_UIShareTableStaticDataSource *)arg1 ;
-(_UIShareTableStaticDataSource *)staticTableDataSource;
-(void)setParticipantArrayController:(CKShareParticipantArrayController *)arg1 ;
-(void)updateSections;
-(CKShareParticipantArrayController *)participantArrayController;
-(_UIShareOverviewActionController *)addPeopleViewController;
-(void)setModelSnapshot:(NSOrderedSet *)arg1 ;
-(void)showSettingsAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAddPeopleViewController:(_UIShareOverviewActionController *)arg1 ;
-(void)updatePermissionOptions;
-(void)_dismissAddPeople:(id)arg1 ;
-(void)_updateOverrideTraitsForModallyPresentedAddPeopleController;
-(void)addPeople:(id)arg1 ;
-(id)viewControllerShare:(id)arg1 ;
-(NSOrderedSet *)modelSnapshot;
-(void)showParticipantInfo:(id)arg1 ;
-(void)copyLink:(id)arg1 ;
-(void)sendLink:(id)arg1 ;
-(void)stopSharing:(id)arg1 ;
-(void)showSettings:(id)arg1 ;
-(void)leaveShare:(id)arg1 ;
-(void)settingsControllerDidChange:(id)arg1 ;
-(void)participantInfoViewControllerDidChangeParticipant:(id)arg1 ;
-(void)participantInfoViewControllerLeaveShare:(id)arg1 ;
-(void)participantInfoViewControllerRemoveParticipant:(id)arg1 ;
-(unsigned)participantInfoViewControllerAllowedPermissions:(id)arg1 ;
-(void)willNavigateFromViewController:(id)arg1 ;
-(void)presentReachabilityViewController:(id)arg1 animated:(char)arg2 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BRShareSettings *)settings;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSettings:(BRShareSettings *)arg1 ;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
-(id)_sections;
-(void)removeParticipant:(id)arg1 ;
-(void)updateThumbnail;
@end
