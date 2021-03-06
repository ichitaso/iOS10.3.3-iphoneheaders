/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <libobjc.A.dylib/PSMagnifyControllerDelegate.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class UIButton, UIImageView, UILabel, PSMagnifyController, NSString;

@interface BuddyMagnifyController : BuddyTableViewController <PSMagnifyControllerDelegate, BuddyController> {

	UIButton* _chooseButton;
	UIImageView* _exampleImageView;
	UILabel* _standardExampleLabel;
	UILabel* _zoomedExampleLabel;
	UIButton* _standardButton;
	UIButton* _zoomedButton;
	PSMagnifyController* _magnifyController;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)commitMagnifyModeIfNeeded;
+(char)controllerNeedsToRun;
+(void)skip;
-(void)nextPressed:(id)arg1 ;
-(void)tappedImage:(id)arg1 ;
-(void)showMagnifyControllerWithZoomedSelected:(char)arg1 ;
-(char)wantsNextButton;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)controllerDone;
-(void)magnifyController:(id)arg1 didFinishWithDisplayMode:(id)arg2 ;
@end

