/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/RemindersListModel.h>

@class NSArray, NSMutableDictionary;

@interface RemindersScheduledListModel : RemindersListModel {

	NSArray* _days;
	int _todayIndex;
	int _numCompletedTodayStable;
	int _numUncompletedTodayStable;
	NSMutableDictionary* _mergedReminders;

}
-(void)reloadSynchronously:(char)arg1 ;
-(int)displayedNumberOfIncompleteReminders;
-(int)displayedNumberOfOverdueReminders;
-(id)reminderAtIndexPath:(id)arg1 ;
-(int)numberOfCompletedReminders;
-(int)numberOfIncompleteReminders;
-(char)invalidateMaintainedReminders;
-(char)deleteReminder:(id)arg1 ;
-(void)checkOrUncheckReminder:(id)arg1 ;
-(void)addReminder:(id)arg1 postponeSave:(char)arg2 ;
-(void)faultReminder:(id)arg1 ;
-(char)matchesReminder:(id)arg1 ;
-(id)predicateForCountingReminders;
-(id)fetchProtectedData;
-(char)shouldInvalidateReminder:(id)arg1 ;
-(int)displayedNumberOfCompletedReminders;
-(int)indexForToday;
-(int)numberOfUncompletedRemindersAtDayIndex:(int)arg1 ;
-(int)numberOfCompletedRemindersAtDayIndex:(int)arg1 ;
-(id)dateForScheduledRemindersAtDayIndex:(int)arg1 ;
-(char)containsDate:(id)arg1 atIndex:(int*)arg2 ;
-(int)indexForDate:(id)arg1 ;
-(int)numberOfDaysWithScheduledReminders;
-(int)numberOfCompletedRemindersAtDayIndex:(int)arg1 forDisplay:(char)arg2 ;
-(int)numberOfScheduledRemindersAtDayIndex:(int)arg1 ;
-(id)_days;
-(int)indexForToday:(char)arg1 ;
-(id)remindersOnDay:(int)arg1 ;
-(id)dictionaryForDate:(id)arg1 ;
-(int)numberOfCompletedRemindersForDisplay:(char)arg1 ;
-(int)numberOfUncompletedRemindersAtDayIndex:(int)arg1 forDisplay:(char)arg2 onlyOverdue:(char)arg3 ;
-(int)numberOfIncompleteRemindersForDisplay:(char)arg1 ;
-(int)numberOfUncompletedRemindersAtDayIndex:(int)arg1 forDisplay:(char)arg2 ;
-(void)_scheduledTaskCacheChanged;
-(id)propertiesToFetch;
-(void)dealloc;
-(id)initWithEventStore:(id)arg1 ;
@end

