/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersEditorExtension.appex/RemindersEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersEditorExtension/RemindersEditorExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersRecurrenceTypeViewControllerDelegate;
@class UITableView, NSIndexPath, EKRecurrenceRule, EKSource, NSDate, NSTimeZone, EKUICustomRecurrenceViewController, NSString;

@interface RemindersRecurrenceTypeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _table;
	int _repeatType;
	int _originalRepeatType;
	NSIndexPath* _checkedItem;
	char _useClearBackground;
	id<RemindersRecurrenceTypeViewControllerDelegate> _delegate;
	EKRecurrenceRule* _recurrenceRule;
	EKSource* _source;
	NSDate* _reminderDate;
	NSTimeZone* _reminderTimeZone;
	EKUICustomRecurrenceViewController* _customRecurrenceViewController;
	NSString* _summaryString;

}

@property (retain) EKUICustomRecurrenceViewController * customRecurrenceViewController;                      //@synthesize customRecurrenceViewController=_customRecurrenceViewController - In the implementation block
@property (assign,nonatomic) int repeatType;                                                                 //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,copy) NSString * summaryString;                                                         //@synthesize summaryString=_summaryString - In the implementation block
@property (assign,nonatomic,__weak) id<RemindersRecurrenceTypeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKRecurrenceRule * recurrenceRule;                                              //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (nonatomic,retain) EKSource * source;                                                              //@synthesize source=_source - In the implementation block
@property (retain) NSDate * reminderDate;                                                                    //@synthesize reminderDate=_reminderDate - In the implementation block
@property (retain) NSTimeZone * reminderTimeZone;                                                            //@synthesize reminderTimeZone=_reminderTimeZone - In the implementation block
@property (assign) char useClearBackground;                                                                  //@synthesize useClearBackground=_useClearBackground - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)getRepeatTypeForReminder:(id)arg1 customRepeatString:(id*)arg2 repeatEnd:(id*)arg3 ;
-(NSDate *)reminderDate;
-(char)useClearBackground;
-(NSTimeZone *)reminderTimeZone;
-(void)_updateRecurrenceType;
-(void)setReminderDate:(NSDate *)arg1 ;
-(void)setReminderTimeZone:(NSTimeZone *)arg1 ;
-(void)setUseClearBackground:(char)arg1 ;
-(void)setSummaryString:(NSString *)arg1 ;
-(id)init;
-(void)setDelegate:(id<RemindersRecurrenceTypeViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<RemindersRecurrenceTypeViewControllerDelegate>)delegate;
-(void)setSource:(EKSource *)arg1 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidUnload;
-(EKSource *)source;
-(int)repeatType;
-(void)setRepeatType:(int)arg1 ;
-(NSString *)summaryString;
-(void)_checkItemAtIndexPath:(id)arg1 ;
-(id)_recurrenceCellForIndexPath:(id)arg1 ;
-(EKRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRuleFromRepeatType:(int)arg1 ;
-(void)setCustomRecurrenceViewController:(EKUICustomRecurrenceViewController *)arg1 ;
-(EKUICustomRecurrenceViewController *)customRecurrenceViewController;
-(void)setRecurrenceRule:(EKRecurrenceRule *)arg1 ;
-(CGSize)calculatePreferredContentSize;
@end

