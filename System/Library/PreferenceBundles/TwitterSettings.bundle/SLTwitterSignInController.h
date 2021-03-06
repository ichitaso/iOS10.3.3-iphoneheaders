/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <TwitterSettings/SLTwitterAccountCreationDelegate.h>

@class PSSpecifier, ACAccount, PSSetupController, NSString;

@interface SLTwitterSignInController : ACUIViewController <SLTwitterAccountCreationDelegate> {

	PSSpecifier* _createNewAccountGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	ACAccount* _account;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loginSpecifiers;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(id)_createNewAccountButtonSpecifier;
-(void)_signInButtonTapped:(id)arg1 ;
-(void)_authenticateAccount;
-(void)_handleSaveCompletionWithSuccess:(char)arg1 error:(id)arg2 ;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateSignInButton;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)returnPressedAtEnd;
-(id)specifiers;
@end

