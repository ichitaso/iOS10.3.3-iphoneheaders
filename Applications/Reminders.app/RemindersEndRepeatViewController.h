/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersEndRepeatControllerDelegate;
@class UITableView, NSDate, UITableViewCell, UIDatePicker, NSString;

@interface RemindersEndRepeatViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSDate* _endRepeatDate;
	NSDate* _originalEndRepeatDate;
	NSDate* _alertDate;
	int _repeatType;
	char _isShowingDatePickerCell;
	UITableViewCell* _datePickerCell;
	UIDatePicker* _datePicker;
	char _useClearBackground;
	id<RemindersEndRepeatControllerDelegate> _delegate;

}

@property (retain) id<RemindersEndRepeatControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pickerChanged:(id)arg1 ;
-(void)repeatForeverTapped;
-(id)initWithEndDate:(id)arg1 repeatType:(int)arg2 firstAlertDate:(id)arg3 clearBackground:(char)arg4 ;
-(id)endRepeatDate;
-(id)defaultDate;
-(void)cancel;
-(void)setDelegate:(id<RemindersEndRepeatControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<RemindersEndRepeatControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)done;
-(CGSize)calculatePreferredContentSize;
@end

