/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics.BaseTableViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface Diagnostics.DashboardViewController : Diagnostics.BaseTableViewController <UIGestureRecognizerDelegate> {

	 sectionPadding;
	 cardCellEstimatedHeight;
	 statusBarPadding;
	 entries;
	 currentTheme;
	 activeDeviceCount;
	 headerView;
	 emptyHeaderView;
	 swipedCell;
	 statusBarEffectView;

}
-(void)setupViewAttributes;
-(void)setupViewHierarchy;
-(void)updateThemeIfNeeded;
-(void)prepareSelectableCardsWithCompletion:(/*^block*/id)arg1 ;
-(void)startRequiredCards;
-(void)barButtonItemTappedWithSender:(id)arg1 ;
-(void)swipeGestureRecognized:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)initWithStyle:(int)arg1 ;
@end

