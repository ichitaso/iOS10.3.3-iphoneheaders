/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RemindersListModelDelegate;
#import <Reminders/Reminders-Structs.h>
@class EKEventStore, NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject, NSMutableIndexSet, EKCalendar, EKCalendarDate, NSArray;

@interface RemindersListModel : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _remindersToSave;
	NSMutableArray* _recentlyCheckedReminders;
	NSMutableArray* _recentlyUncheckedReminders;
	NSMutableDictionary* _recentlyUncheckedDates;
	NSObject*<OS_dispatch_queue> _dataLock;
	NSMutableArray* _reminders;
	char _hasPerformedFirstReload;
	char _showsCompletedReminders;
	NSMutableIndexSet* _alreadyFaultedIndexes;
	NSMutableIndexSet* _indexesForFaulting;
	NSRange _lastSeenReminderRange;
	unsigned _reloadCount;
	char _isPaused;
	char _needsReloadOnResume;
	char _isPausedByForce;
	char _isReloadInProgress;
	char _isListEmpty;
	char _isListEmptyIsValid;
	int _numberOfIncompleteReminders;
	char _needsReload;
	EKCalendar* _calendar;
	EKCalendarDate* _dueDate;
	id<RemindersListModelDelegate> _delegate;
	int _numberOfCompletedReminders;
	int _displayedNumberOfOverdueReminders;
	NSArray* _recentlyAddedReminders;

}

@property (nonatomic,retain) NSArray * recentlyAddedReminders;                            //@synthesize recentlyAddedReminders=_recentlyAddedReminders - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) EKCalendarDate * dueDate;                                    //@synthesize dueDate=_dueDate - In the implementation block
@property (assign,nonatomic,__weak) id<RemindersListModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsCompletedReminders;                                //@synthesize showsCompletedReminders=_showsCompletedReminders - In the implementation block
@property (assign,nonatomic) char needsReload;                                            //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,nonatomic) int numberOfCompletedReminders;                              //@synthesize numberOfCompletedReminders=_numberOfCompletedReminders - In the implementation block
@property (nonatomic,readonly) int displayedNumberOfCompletedReminders; 
@property (readonly) int numberOfIncompleteReminders; 
@property (readonly) int displayedNumberOfIncompleteReminders; 
@property (assign,nonatomic) int displayedNumberOfOverdueReminders;                       //@synthesize displayedNumberOfOverdueReminders=_displayedNumberOfOverdueReminders - In the implementation block
@property (readonly) NSArray * recentlyCheckedReminders;                                  //@synthesize recentlyCheckedReminders=_recentlyCheckedReminders - In the implementation block
@property (readonly) NSArray * recentlyUncheckedReminders;                                //@synthesize recentlyUncheckedReminders=_recentlyUncheckedReminders - In the implementation block
-(char)hasPerformedFirstReload;
-(void)reloadSynchronously:(char)arg1 ;
-(void)saveUnsavedReminders;
-(int)displayedNumberOfIncompleteReminders;
-(int)displayedNumberOfOverdueReminders;
-(char)needsReloadForChangedObjectIDs:(id)arg1 ;
-(void)updateOverdueReminders;
-(int)numberOfCompletedReminders;
-(char)showsCompletedReminders;
-(NSArray *)recentlyAddedReminders;
-(int)numberOfIncompleteReminders;
-(id)reminderAtIndex:(int)arg1 ;
-(int)numberOfReminders;
-(char)canAccessPropertiesOfReminderAtIndex:(int)arg1 ;
-(int)indexOfReminder:(id)arg1 protected:(char)arg2 ;
-(void)setPausedByForce:(char)arg1 ;
-(char)hasRequestedFirstReload;
-(char)invalidateMaintainedReminders;
-(void)setShowsCompletedReminders:(char)arg1 ;
-(void)clearRecentlyAddedReminders;
-(char)deleteReminder:(id)arg1 ;
-(void)checkOrUncheckReminder:(id)arg1 ;
-(char)saveReminderImmediately:(id)arg1 ;
-(void)addReminder:(id)arg1 postponeSave:(char)arg2 ;
-(void)moveReminderAtIndex:(int)arg1 toIndex:(int)arg2 ;
-(char)willDisplayRemindersInRange:(NSRange)arg1 ;
-(void)faultReminder:(id)arg1 ;
-(void)setNumberOfCompletedReminders:(int)arg1 ;
-(id)storeProtectedData:(id)arg1 rangeAlreadyFaulted:(NSRange)arg2 ;
-(char)protectedCanReminderBeInserted:(id)arg1 ;
-(void)protectedRemoveReminderAtIndex:(int)arg1 ;
-(char)matchesReminder:(id)arg1 ;
-(id)predicateForCountingReminders;
-(id)fetchProtectedData;
-(char)shouldInvalidateReminder:(id)arg1 ;
-(char)_hasBeenCanceled:(unsigned)arg1 ;
-(void)_fetchPropertiesForReminders:(id)arg1 ;
-(char)hasBeenCanceled:(unsigned)arg1 ;
-(NSRange)_faultStartingChunk:(id)arg1 ;
-(void)setDisplayedNumberOfOverdueReminders:(int)arg1 ;
-(void)loadRemindersInRange:(NSRange)arg1 reloadNumber:(unsigned)arg2 ;
-(char)_protectedNeedsLoadAheadForRange:(NSRange)arg1 inForwardDirection:(char)arg2 ;
-(void)_protectedLoadAheadForRange:(NSRange)arg1 reloadNumber:(unsigned)arg2 inForwardDirection:(char)arg3 ;
-(char)_protectedWillDisplayRemindersInRange:(NSRange)arg1 ;
-(void)_scheduleSaveForReminder:(id)arg1 ;
-(void)_protectedInsertReminder:(id)arg1 atIndex:(int)arg2 ;
-(void)addRecentlyAddedReminder:(id)arg1 ;
-(void)_attemptToResumeReloads;
-(void)removeRecentlyAddedReminder:(id)arg1 ;
-(void)_adjustOrderOnReminders:(id)arg1 boundaryOrder:(unsigned)arg2 reverse:(char)arg3 ;
-(void)_adjustOrderOnReminders:(id)arg1 reverse:(char)arg2 ;
-(void)_reorderReminder:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 ;
-(char)isListEmpty;
-(int)displayedNumberOfCompletedReminders;
-(void)addReminder:(id)arg1 ;
-(char)reminderWasSavedAtIndex:(int)arg1 ;
-(void)setRecentlyAddedReminders:(NSArray *)arg1 ;
-(NSArray *)recentlyCheckedReminders;
-(NSArray *)recentlyUncheckedReminders;
-(id)propertiesToFetch;
-(id)init;
-(void)setDelegate:(id<RemindersListModelDelegate>)arg1 ;
-(void)reload;
-(id<RemindersListModelDelegate>)delegate;
-(void)resume;
-(id)timeZone;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(void)pause;
-(char)isPaused;
-(void)setNeedsReload:(char)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(EKCalendarDate *)dueDate;
-(char)needsReload;
-(void)setDueDate:(EKCalendarDate *)arg1 ;
@end

