/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintMoreOptionsTableViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;
	int _stapleRow;

}
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)showCancelButton;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)updateStaple:(id)arg1 ;
@end

