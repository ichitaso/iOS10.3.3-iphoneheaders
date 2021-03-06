/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FTCallsViewController.h>
#import <FaceTime/PHFrecentCellDelegate.h>
#import <FaceTime/PHCallsTableViewControllerDelegate.h>

@class NSString;

@interface PHFrecentResultViewController : FTCallsViewController <PHFrecentCellDelegate, PHCallsTableViewControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performDial:(id)arg1 withService:(int)arg2 ;
-(id)additionalActionsForSearchResult:(id)arg1 ;
-(id)additionalActionsAlertTitleForSearchResult:(id)arg1 ;
-(void)showCallDetail:(id)arg1 ;
-(void)setRemoveButtonEnabled:(char)arg1 ;
-(void)callsTableViewControllerDidRefresh:(id)arg1 ;
-(void)dialResult:(id)arg1 audioOnlyCall:(char)arg2 fromButton:(id)arg3 ;
-(void)_callStatusChanged:(id)arg1 ;
-(int)recordIDForResult:(id)arg1 ;
-(id)dialRequestForCallProvider:(id)arg1 searchResult:(id)arg2 ;
-(id)dialRequestForRecentCall:(id)arg1 ;
-(void)_resetFrecentAlphaAndContentView;
-(id)presentingViewControllerForAvatarView;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

