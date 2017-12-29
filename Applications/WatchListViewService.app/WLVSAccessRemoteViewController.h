/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/WatchListViewService.app/WatchListViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class WLKUIAccessViewController, NSArray, NSString;

@interface WLVSAccessRemoteViewController : SBUIRemoteAlertServiceViewController {

	WLKUIAccessViewController* _accessViewController;
	NSArray* _bundleIDs;
	NSString* _accountName;

}
+(char)_isSecureForRemoteViewService;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)_dismiss;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
@end

