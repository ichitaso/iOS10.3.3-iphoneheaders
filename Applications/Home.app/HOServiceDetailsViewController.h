/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <Home/HUControlPanelControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <Home/HOServiceDetailsItemManagerDelegate.h>
#import <Home/HUSwitchCellDelegate.h>
#import <Home/HUNameAndIconEditorCellDelegate.h>
#import <Home/HUIconPickerViewControllerDelegate.h>
#import <Home/HOServiceGroupEditorViewControllerDelegate.h>
#import <Home/HOContainedServiceGridViewControllerDelegate.h>
#import <Home/HUEditRoomViewControllerPresentationDelegate.h>
#import <Home/HOTriggerEditorDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HUQuickControlDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate;
@class HUControlPanelController, HOServiceDetailsItemManager, HMHome, NSString;

@interface HOServiceDetailsViewController : HUItemTableViewController <HUControlPanelControllerDelegate, HUPresentationDelegate, HOServiceDetailsItemManagerDelegate, HUSwitchCellDelegate, HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate, HOServiceGroupEditorViewControllerDelegate, HOContainedServiceGridViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, HOTriggerEditorDelegate, HFAccessoryObserver, HUQuickControlDetailsPresentationDelegateHost> {

	char _requiresQuickControlDismissal;
	char _isServiceGroup;
	char _isAccessory;
	char _shouldTrackProgrammableSwitchActivations;
	id<HUPresentationDelegate> _presentationDelegate;
	HUControlPanelController* _controlPanelController;
	HOServiceDetailsItemManager* _detailsItemManager;
	HMHome* _home;
	NSString* _editingName;

}

@property (nonatomic,readonly) HUControlPanelController * controlPanelController;                  //@synthesize controlPanelController=_controlPanelController - In the implementation block
@property (assign,nonatomic,__weak) HOServiceDetailsItemManager * detailsItemManager;              //@synthesize detailsItemManager=_detailsItemManager - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) char isServiceGroup;                                                //@synthesize isServiceGroup=_isServiceGroup - In the implementation block
@property (nonatomic,readonly) char isAccessory;                                                   //@synthesize isAccessory=_isAccessory - In the implementation block
@property (nonatomic,readonly) char supportsCustomIconEditing; 
@property (nonatomic,copy) NSString * editingName;                                                 //@synthesize editingName=_editingName - In the implementation block
@property (nonatomic,readonly) NSString * savedName; 
@property (assign,nonatomic) char shouldTrackProgrammableSwitchActivations;                        //@synthesize shouldTrackProgrammableSwitchActivations=_shouldTrackProgrammableSwitchActivations - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;               //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic) char requiresQuickControlDismissal;                                   //@synthesize requiresQuickControlDismissal=_requiresQuickControlDismissal - In the implementation block
-(char)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(void)setShouldTrackProgrammableSwitchActivations:(char)arg1 ;
-(id)initWithServiceItem:(id)arg1 ;
-(char)shouldTrackProgrammableSwitchActivations;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(char)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2 ;
-(void)_cancelNameEdit;
-(id)_commitNameChange;
-(char)isServiceGroup;
-(id)_removeServiceGroup;
-(HOServiceDetailsItemManager *)detailsItemManager;
-(id)_removeAccessory;
-(NSString *)editingName;
-(NSString *)savedName;
-(id)_updateHomeKitName:(id)arg1 ;
-(void)setEditingName:(NSString *)arg1 ;
-(HUControlPanelController *)controlPanelController;
-(void)_setupProgrammableSwitchCell:(id)arg1 forItem:(id)arg2 ;
-(char)supportsCustomIconEditing;
-(char)_shouldShowDetailDisclosureForItem:(id)arg1 ;
-(void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2 ;
-(char)_allowRowSelectionForItem:(id)arg1 ;
-(void)addRoomButtonPressed:(id)arg1 ;
-(void)_updateAssociatedServiceTypeCells;
-(void)_presentTriggerEditorForProgrammableSwitchEventOptionItem:(id)arg1 ;
-(id)_characteristicsAffectedByControlItem:(id)arg1 ;
-(char)_shouldShowAddButtonForOptionItem:(id)arg1 ;
-(void)dismissTriggerActionEditorViewController:(id)arg1 ;
-(char)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2 ;
-(char)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2 ;
-(void)serviceGroupEditor:(id)arg1 didCreateServiceGroup:(id)arg2 ;
-(void)setDetailsItemManager:(HOServiceDetailsItemManager *)arg1 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(HFItem*<HFServiceLikeItem>)item;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(char)isAccessory;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)iconPickerDidCancel:(id)arg1 ;
-(void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(char)arg4 ;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(char)shouldHideHeaderAboveSection:(int)arg1 ;
-(char)shouldHideFooterBelowSection:(int)arg1 ;
-(void)finishPresentation:(id)arg1 animated:(char)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(char)arg2 ;
-(void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(unsigned)automaticDisablingReasonsForItem:(id)arg1 ;
-(char)requiresQuickControlDismissal;
-(void)setRequiresQuickControlDismissal:(char)arg1 ;
-(void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2 ;
-(void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2 ;
-(char)shouldManageTextFieldForItem:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(char)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)nameAndIconEditorCellDidTapIcon:(id)arg1 ;
@end

