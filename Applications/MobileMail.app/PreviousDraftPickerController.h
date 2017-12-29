/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileMail/MessageMiniMallObserver.h>
#import <MobileMail/MFSwipableTableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MessageMiniMall, PreviousDraftPickerHeaderView, UITableView, NSString;

@interface PreviousDraftPickerController : UIViewController <MessageMiniMallObserver, MFSwipableTableViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	/*^block*/id _actionBlock;
	MessageMiniMall* _mall;
	PreviousDraftPickerHeaderView* _headerView;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pulledToRefresh:(id)arg1 ;
-(void)miniMallMessageCountWillChange:(id)arg1 ;
-(void)miniMallMessageCountDidChange:(id)arg1 ;
-(void)miniMallMessagesAtIndexPathsChanged:(id)arg1 ;
-(void)miniMallStartFetch:(id)arg1 ;
-(void)miniMallFinishedFetch:(id)arg1 ;
-(void)miniMallCurrentMessageRemoved:(id)arg1 ;
-(void)miniMallDidLoadMessages:(id)arg1 ;
-(void)miniMallGrowingMailboxesChanged:(id)arg1 ;
-(void)miniMallDidFinishSearch:(id)arg1 ;
-(id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2 ;
-(float)draftRowHeight;
-(void)updateContentSizeForViewInPopoverAllowShrink:(char)arg1 ;
-(id)_transformIndexPaths:(id)arg1 ;
-(void)_updateHeaderViewDraftsState;
-(void)_monitorActivityDidEnd:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)setActionBlock:(/*^block*/id)arg1 ;
-(void)_cancel:(id)arg1 ;
@end

