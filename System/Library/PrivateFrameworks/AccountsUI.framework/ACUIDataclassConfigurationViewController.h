/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:52:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSMutableArray, NSString, NSMutableDictionary, PSSpecifier, NSArray, ACAccount;

@interface ACUIDataclassConfigurationViewController : ACUIViewController {

	char _forceMailSetup;
	NSMutableArray* _dirtyDataclassCells;
	NSString* _accountIdentifier;
	NSMutableDictionary* _allDesiredDataclassActions;
	char _isMergingSyncData;
	PSSpecifier* _deleteButtonSpecifier;
	PSSpecifier* _accountSummaryCellSpecifier;
	NSArray* _dataclassSpecifiers;
	NSArray* _otherSpecifiers;
	char _didShowDataclassActionPickerDuringRemoval;
	char _firstTimeSetup;
	char _shouldShowDeleteAccountButton;
	char _shouldEnableDeleteAccountButton;
	char _shouldEnableAccountSummaryCell;
	char _isMailSetupForced;
	NSArray* _preEnabledDataclasses;
	ACAccount* _account;
	PSSpecifier* _dataclassGroupSpecifier;
	/*^block*/id _configurationCompletion;

}

@property (assign,getter=isFirstTimeSetup,nonatomic) char firstTimeSetup;              //@synthesize firstTimeSetup=_firstTimeSetup - In the implementation block
@property (nonatomic,copy) NSArray * preEnabledDataclasses;                            //@synthesize preEnabledDataclasses=_preEnabledDataclasses - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PSSpecifier * dataclassGroupSpecifier;                    //@synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * deleteButtonSpecifier;                    //@synthesize deleteButtonSpecifier=_deleteButtonSpecifier - In the implementation block
@property (assign,nonatomic) char shouldShowDeleteAccountButton;                       //@synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton - In the implementation block
@property (assign,nonatomic) char shouldEnableDeleteAccountButton;                     //@synthesize shouldEnableDeleteAccountButton=_shouldEnableDeleteAccountButton - In the implementation block
@property (assign,nonatomic) char shouldEnableAccountSummaryCell;                      //@synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell - In the implementation block
@property (assign,nonatomic) char isMailSetupForced;                                   //@synthesize isMailSetupForced=_isMailSetupForced - In the implementation block
@property (nonatomic,copy) id configurationCompletion;                                 //@synthesize configurationCompletion=_configurationCompletion - In the implementation block
+(char)shouldPresentAsModalSheet;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)_accountIdentifier;
-(id)displayedAccountTypeString;
-(id)displayedShortAccountTypeString;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(void)setFirstTimeSetup:(char)arg1 ;
-(void)forceMailSetup;
-(void)setPreEnabledDataclasses:(NSArray *)arg1 ;
-(void)setConfigurationCompletion:(id)arg1 ;
-(void)setShouldEnableAccountSummaryCell:(char)arg1 ;
-(void)setShouldEnableDeleteAccountButton:(char)arg1 ;
-(void)setShouldShowDeleteAccountButton:(char)arg1 ;
-(char)isFirstTimeSetup;
-(id)_navigationTitle;
-(char)shouldVerifyBeforeAccountSave;
-(id)configurationCompletion;
-(id)specifierForAccountSummaryCell;
-(id)_specifiersForDataclasses:(id)arg1 ;
-(char)shouldShowOtherSpecifiersDuringFirstSetup;
-(id)otherSpecifiers;
-(char)shouldShowDeleteAccountButton;
-(id)titleForDeleteButton;
-(char)shouldEnableDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(id)valueForAccountSummaryCell;
-(char)shouldEnableAccountSummaryCell;
-(id)_orderDataclassList:(id)arg1 ;
-(void)setDataclassGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)dataclassGroupSpecifier;
-(char)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)dataclassSwitchStateForSpecifier:(id)arg1 ;
-(NSArray *)preEnabledDataclasses;
-(void)_markDataclassSwitchCellAsDirty:(id)arg1 ;
-(void)_setDataclass:(id)arg1 enabled:(char)arg2 ;
-(char)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(void)resetDirtyDataclassSwitchCells;
-(void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
-(id)_activityInProgressTextForDataclass:(id)arg1 isBeingEnabled:(char)arg2 ;
-(void)_showDelayedActivityInProgressUIWithMessage:(id)arg1 ;
-(char)_confirmKeepLocalDataForDataclasses:(id)arg1 ;
-(char)_confirmDeleteLocalDataForDataclasses:(id)arg1 ;
-(void)_notifyOfAccountSetupCompletion;
-(char)_isShowingDeleteAccountButton;
-(char)_promptUserToConfirmAccountDeletion;
-(char)isAppleMailAccount:(id)arg1 ;
-(char)_confirmSyncDelete;
-(int)_promptUserToConfirmAccountSyncDeletion;
-(id)deviceMessage;
-(id)messageForAccountDeletionProgressUI;
-(int)deleteButtonIndex;
-(char)isMailSetupForced;
-(void)reloadDynamicSpecifiersWithAnimation:(char)arg1 ;
-(void)setDataclass:(id)arg1 enabled:(char)arg2 ;
-(void)appendDeleteAccountButton;
-(PSSpecifier *)deleteButtonSpecifier;
-(void)setIsMailSetupForced:(char)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(char)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(int)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

