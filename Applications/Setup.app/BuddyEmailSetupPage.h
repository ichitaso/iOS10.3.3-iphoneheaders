/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BuddyTableViewCell, NSString;

@interface BuddyEmailSetupPage : BuddyTableViewController <UITextFieldDelegate> {

	BuddyTableViewCell* _username;
	BuddyTableViewCell* _password;
	NSString* _email;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tryAgain;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)delegate;
-(void)setEnabled:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)done;
-(char)textFieldShouldReturn:(id)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
@end

