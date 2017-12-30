/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:19 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/PlugIns/AAUIFollowUpExtension.appex/AAUIFollowUpExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFollowUpUI/FLExtensionViewController.h>
#import <AAUIFollowUpExtension/AAUISignInControllerDelegate.h>
#import <AAUIFollowUpExtension/AAUIGenericTermsRemoteUIDelegate.h>

@class FLFollowUpItem, AAFollowUpController, AAUIGenericTermsRemoteUI, NSString;

@interface AAUIFollowUpExtensionViewController : FLExtensionViewController <AAUISignInControllerDelegate, AAUIGenericTermsRemoteUIDelegate> {

	FLFollowUpItem* _followUpItem;
	AAFollowUpController* _followUpController;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_presentSignInController;
-(void)_showGenericTermsUI;
-(void)viewDidAppear:(char)arg1 ;
-(id)_followUpController;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(char)arg2 error:(id)arg3 ;
-(void)signInControllerDidCancel:(id)arg1 ;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
