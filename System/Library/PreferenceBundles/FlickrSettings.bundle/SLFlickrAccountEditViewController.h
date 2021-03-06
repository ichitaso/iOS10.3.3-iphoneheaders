/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/FlickrSettings.bundle/FlickrSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount;

@interface SLFlickrAccountEditViewController : ACUIViewController {

	ACAccount* _account;
	char _isPasswordDirty;

}
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_updatePasswordWithValueFromTextField;
-(void)_handlePasswordChangeWithResult:(char)arg1 error:(id)arg2 ;
-(void)_showAlertForError:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_updateDoneButton;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(id)specifiers;
@end

