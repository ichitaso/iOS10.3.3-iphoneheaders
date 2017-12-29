/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Fitness/CHFilterPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Fitness/CHWorkoutsListViewControllerDelegate.h>

@class CHWorkoutsMonthListDataSource, CHWorkoutsListDataProvider, FIUIModel, UITableView, NSArray, UILabel, CHWorkoutsListViewController, NSString;

@interface CHWorkoutsMonthListViewController : UIViewController <CHFilterPickerDelegate, UINavigationControllerDelegate, CHWorkoutsListViewControllerDelegate> {

	CHWorkoutsMonthListDataSource* _dataSource;
	CHWorkoutsListDataProvider* _dataProvider;
	FIUIModel* _model;
	UITableView* _tableView;
	NSArray* _workoutTypeNames;
	NSArray* _workoutTypeIDs;
	UILabel* _titleLabel;
	int _currentYear;
	CHWorkoutsListViewController* _workoutsListViewController;

}

@property (nonatomic,readonly) CHWorkoutsListViewController * workoutsListViewController;              //@synthesize workoutsListViewController=_workoutsListViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_yearDateFormatter;
-(id)initWithDataProvider:(id)arg1 healthStore:(id)arg2 model:(id)arg3 ;
-(void)_setNavItemTitleToCurrentYear;
-(void)_showFiltersList;
-(void)_updateFiltersList;
-(void)_pushWorkoutListIfNecessary;
-(CHWorkoutsListViewController *)workoutsListViewController;
-(void)filterPicker:(id)arg1 didSelectFilterItem:(id)arg2 atIndex:(int)arg3 ;
-(void)filterPickerDidCancel:(id)arg1 ;
-(void)workoutsListViewController:(id)arg1 didScrollToDateComponents:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
@end

