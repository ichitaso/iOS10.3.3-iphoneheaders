/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SharingViewService.app/SharingViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIActivityIndicatorView, UIView, NSUUID, UIButton, UILabel, UIImageView, AppleTVSetupViewControllerProxy, NSDictionary, NSString;

@interface AppleTVSetupStartViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _containerView;
	NSUUID* _deviceIdentifier;
	UIButton* _dismissButton;
	UILabel* _infoLabel;
	UIImageView* _imageView;
	UILabel* _progressLabel;
	UIButton* _setUpButton;
	char _settingUp;
	int _testMode;
	AppleTVSetupViewControllerProxy* _proxyViewController;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) AppleTVSetupViewControllerProxy * proxyViewController;              //@synthesize proxyViewController=_proxyViewController - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSetupStateChanged:(int)arg1 ;
-(void)setProxyViewController:(AppleTVSetupViewControllerProxy *)arg1 ;
-(AppleTVSetupViewControllerProxy *)proxyViewController;
-(void)handleSetUpButton:(id)arg1 ;
-(void)handleDismissButton:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end

