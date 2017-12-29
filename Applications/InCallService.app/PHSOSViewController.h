/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <InCallService/PHSOSNumbersViewControllerDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <InCallService/PHSpringBoardBehavior.h>

@class NSArray, PHBottomBarButton, PHCountdownView, PHSlidingView, PHSOSNumbersViewController, UINavigationController, UILabel, UIView, HKHealthStore, NSString;

@interface PHSOSViewController : UIViewController <PHSOSNumbersViewControllerDelegate, HKMedicalIDViewControllerDelegate, PHSpringBoardBehavior> {

	int _sosMode;
	NSArray* _sosNumbers;
	PHBottomBarButton* _cancelButton;
	PHCountdownView* _countdownView;
	PHSlidingView* _slidingView;
	PHSOSNumbersViewController* _sosNumbersViewController;
	UINavigationController* _medicalIDNavigationController;
	UILabel* _infoLabel;
	UIView* _currentView;
	HKHealthStore* _healthStore;
	/*^block*/id _showMedicalIDBlock;
	/*^block*/id _showMedicalIDAfterECBMBlock;
	double _countdownStartedTime;
	double _countdownPausedTime;

}

@property (nonatomic,retain) NSArray * sosNumbers;                                                //@synthesize sosNumbers=_sosNumbers - In the implementation block
@property (nonatomic,retain) PHBottomBarButton * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) PHCountdownView * countdownView;                                     //@synthesize countdownView=_countdownView - In the implementation block
@property (nonatomic,retain) PHSlidingView * slidingView;                                         //@synthesize slidingView=_slidingView - In the implementation block
@property (nonatomic,retain) PHSOSNumbersViewController * sosNumbersViewController;               //@synthesize sosNumbersViewController=_sosNumbersViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * medicalIDNavigationController;              //@synthesize medicalIDNavigationController=_medicalIDNavigationController - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                 //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                                //@synthesize currentView=_currentView - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,copy) id showMedicalIDBlock;                                                 //@synthesize showMedicalIDBlock=_showMedicalIDBlock - In the implementation block
@property (nonatomic,copy) id showMedicalIDAfterECBMBlock;                                        //@synthesize showMedicalIDAfterECBMBlock=_showMedicalIDAfterECBMBlock - In the implementation block
@property (assign,nonatomic) double countdownStartedTime;                                         //@synthesize countdownStartedTime=_countdownStartedTime - In the implementation block
@property (assign,nonatomic) double countdownPausedTime;                                          //@synthesize countdownPausedTime=_countdownPausedTime - In the implementation block
@property (assign,nonatomic) int sosMode;                                                         //@synthesize sosMode=_sosMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)allowsMenuButtonDismissal;
-(char)allowsOtherAlertsToStackOnTop;
-(char)allowsBanners;
-(int)desiredButtonEvents;
-(void)callStateChangedNotification:(id)arg1 ;
-(void)addObservers;
-(void)emergencyCallbackModeChangedNotification:(id)arg1 ;
-(void)updateSOSNumbers:(id)arg1 ;
-(void)cancelMedicalIDBlock;
-(void)presentMedicalID;
-(void)loadMedicalIDWithCompletion:(/*^block*/id)arg1 ;
-(void)setShowMedicalIDBlock:(id)arg1 ;
-(void)setUpCancelButtonConstraints;
-(void)setSosMode:(int)arg1 ;
-(void)setCountdownStartedTime:(double)arg1 ;
-(void)hideMedicalIDWithCompletion:(/*^block*/id)arg1 ;
-(void)setNotifyCountdownOrMedicalIDMode;
-(void)showSOSNumbersList;
-(void)showSOSDialCountdown;
-(void)showSOSDialSliding;
-(void)showSOSDialCancelled;
-(void)showSOSNotificationCountdown;
-(void)showSOSNotified;
-(void)showSOSNotificationCanceled;
-(id)showMedicalIDBlock;
-(NSArray *)sosNumbers;
-(id)initWithSOSNumbers:(id)arg1 ;
-(PHSOSNumbersViewController *)sosNumbersViewController;
-(void)transitionToView:(id)arg1 animated:(char)arg2 ;
-(void)setUpSOSNumbersListViewConstraints;
-(PHCountdownView *)countdownView;
-(void)setUpCountdownViewConstraints;
-(void)dialSOSNumberAtIndex:(int)arg1 ;
-(PHSlidingView *)slidingView;
-(void)setUpSlidingViewConstraints;
-(void)setUpInfoLabelConstraints;
-(void)notifyEmergencyContacts;
-(void)setCurrentView:(UIView *)arg1 ;
-(int)sosMode;
-(void)setCountdownPausedTime:(double)arg1 ;
-(void)showConfirmationAlert;
-(double)countdownPausedTime;
-(double)countdownStartedTime;
-(id)showMedicalIDAfterECBMBlock;
-(void)setShowMedicalIDAfterECBMBlock:(id)arg1 ;
-(void)sosNumbersViewController:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSosNumbers:(NSArray *)arg1 ;
-(void)setCountdownView:(PHCountdownView *)arg1 ;
-(void)setSlidingView:(PHSlidingView *)arg1 ;
-(void)setSosNumbersViewController:(PHSOSNumbersViewController *)arg1 ;
-(UINavigationController *)medicalIDNavigationController;
-(void)setMedicalIDNavigationController:(UINavigationController *)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setCancelButton:(PHBottomBarButton *)arg1 ;
-(PHBottomBarButton *)cancelButton;
-(void)buttonPressed:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(UIView *)currentView;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)willStartSendingLocationUpdate;
@end
