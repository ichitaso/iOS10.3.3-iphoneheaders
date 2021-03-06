/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <Health/WDUserActivityResponder.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKIDIntroductionCellDelegate.h>
#import <libobjc.A.dylib/HKIDUpdatedAndEditCellDelegate.h>

@class HKHealthStore, _HKMedicalIDData, WDControllerManager, UIScrollView, UIStackView, UITableView, HKMedicalIDViewController, UIAlertController, SOSContactsManager, NSString;

@interface WDMedicalIDViewController : HKViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder, UITableViewDataSource, UITableViewDelegate, HKIDIntroductionCellDelegate, HKIDUpdatedAndEditCellDelegate> {

	HKHealthStore* _healthStore;
	_HKMedicalIDData* _medicalIDData;
	char _medicalIDIsNew;
	WDControllerManager* _controllerManager;
	UIScrollView* _introView;
	UIStackView* _introStackView;
	char _loadingMedicalID;
	UITableView* _tableView;
	char _shouldShowConsolidationAlert;
	HKMedicalIDViewController* _currentMedicalIDViewController;
	UIAlertController* _consolidationAlertController;
	SOSContactsManager* _sosContactsManager;

}

@property (assign,nonatomic,__weak) HKMedicalIDViewController * currentMedicalIDViewController;              //@synthesize currentMedicalIDViewController=_currentMedicalIDViewController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * consolidationAlertController;                        //@synthesize consolidationAlertController=_consolidationAlertController - In the implementation block
@property (nonatomic,retain) SOSContactsManager * sosContactsManager;                                        //@synthesize sosContactsManager=_sosContactsManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateActivityForViewDidAppear;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)_loadMedicalIDDataIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_showContactsConsolidationAlert;
-(void)_handleFetchedMedicalIDData:(id)arg1 ;
-(void)_showMedicalIDView;
-(SOSContactsManager *)sosContactsManager;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(id)_createMedicalIDDataFromMeCardAndHealthKit;
-(void)_showMedicalIDEditor;
-(void)_createMedicalIDTapped:(id)arg1 ;
-(void)_organDonationSignupButtonTapped:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 controllerManager:(id)arg2 ;
-(void)_checkForEmergencyContactConsolidationNeeds;
-(HKMedicalIDViewController *)currentMedicalIDViewController;
-(void)setCurrentMedicalIDViewController:(HKMedicalIDViewController *)arg1 ;
-(UIAlertController *)consolidationAlertController;
-(void)setConsolidationAlertController:(UIAlertController *)arg1 ;
-(void)setSosContactsManager:(SOSContactsManager *)arg1 ;
-(void)dealloc;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)medicalIDViewControllerDidAppear:(id)arg1 ;
-(void)updatedAndEditCellDidTapEditButton:(id)arg1 ;
-(void)introductionCellDidTapLinkButton:(id)arg1 ;
-(void)introductionCellDidTapActionButton:(id)arg1 ;
@end

