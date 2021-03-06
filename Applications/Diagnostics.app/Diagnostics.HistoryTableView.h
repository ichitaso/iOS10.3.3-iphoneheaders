/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/Diagnostics.BaseTableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@interface Diagnostics.HistoryTableView : Diagnostics.BaseTableView <UITableViewDelegate, UITableViewDataSource> {

	 fontSizeEmptyHistory;
	 cellRowEstimatedHeight;
	 emptyHistoryLabelMargin;
	 bottomMargin;
	 separatorHeight;
	 cellReuseIdentifier;
	 historyHeader;
	 emptyHistoryLabel;
	 prototypeCell;
	 forceEmpty;
	 historyEntries;
	 containerLayoutUpdateHandler;
	 hasExplicitHeight;
	 headerHeight;
	 emptyHistoryHeight;
	 tableHeightConstraint;

}

@property (assign,nonatomic) char forceEmpty; 
@property (copy,nonatomic) id historyEntries; 
@property (copy,nonatomic) id containerLayoutUpdateHandler; 
@property (assign,nonatomic) char hasExplicitHeight; 
-(void)setupViewAttributes;
-(id)containerLayoutUpdateHandler;
-(void)setContainerLayoutUpdateHandler:(id)arg1 ;
-(char)hasExplicitHeight;
-(void)setHasExplicitHeight:(char)arg1 ;
-(void)setupViewHierarchy;
-(void)setupViewLayoutConstraints;
-(void)tintChangedWithTint:(id)arg1 ;
-(char)forceEmpty;
-(void)setForceEmpty:(char)arg1 ;
-(id)historyEntries;
-(void)setHistoryEntries:(id)arg1 ;
-(void)setEmptyHistoryWithTitle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)update;
-(void)registerForNotifications;
@end

