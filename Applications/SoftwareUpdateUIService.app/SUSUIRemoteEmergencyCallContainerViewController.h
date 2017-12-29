/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SoftwareUpdateUIService.app/SoftwareUpdateUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <SoftwareUpdateUIService/SUSUIRemoteEmergencyCallViewControllerDelegate.h>

@class SUSUIRemoteEmergencyCallViewController, SUSUIRemoteEmergencyCallAlertAction, NSString;

@interface SUSUIRemoteEmergencyCallContainerViewController : SBUIRemoteAlertServiceViewController <SUSUIRemoteEmergencyCallViewControllerDelegate> {

	SUSUIRemoteEmergencyCallViewController* _emergencyVC;
	SUSUIRemoteEmergencyCallAlertAction* _action;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSecureForRemoteViewService;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(void)_fireActionWithResponseIfNecessary:(char)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setRootViewController:(id)arg1 ;
-(void)handleLockButtonPressed;
@end

