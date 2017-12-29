/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/PlugIns/CalendarWidget.appex/CalendarWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarWidget/CalendarWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <libobjc.A.dylib/EKDayViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <FMFTodayWidget/NCWidgetProviding.h>

@protocol OS_dispatch_semaphore;
@class UIView, EKDayView, UITableView, NSMutableDictionary, NSArray, UITapGestureRecognizer, UIButton, NSObject, NSString;

@interface CalendarWidgetViewController : UIViewController <EKDayViewDataSource, EKDayViewDelegate, UITableViewDelegate, UITableViewDataSource, NCWidgetProviding> {

	UIView* _contentView;
	int __shouldShowAsListView;
	EKDayView* _dayView;
	UITableView* _listView;
	CGRect _lastSeenFrame;
	UIView* _noEventsView;
	NSMutableDictionary* _cachedListViewCells;
	NSArray* _noEventsViewConstraints;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIButton* _remindMeAboutThisButton;
	char _currentlyVisible;
	int _currentDisplayMode;
	NSArray* _darwinNotificationListeners;
	/*^block*/id _refreshCompletionHandler;
	NSObject*<OS_dispatch_semaphore> _updateSnapshotSemaphore;

}

@property (nonatomic,copy) id refreshCompletionHandler;                                   //@synthesize refreshCompletionHandler=_refreshCompletionHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> updateSnapshotSemaphore;              //@synthesize updateSnapshotSemaphore=_updateSnapshotSemaphore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedModel;
-(void)_setUpDarwinNotificationListeners;
-(void)_shouldShowAsListViewChanged;
-(void)_tapGestureReceived:(id)arg1 ;
-(void)_removeAllDarwinNotificationListeners;
-(void)_databaseDidChange;
-(void)_occurrenceCacheDidChange;
-(void)_selectedCalendarsDidChange;
-(void)_significantTimeDidChange;
-(void)_updateTimeMarkerState;
-(unsigned)_visibleSecondForHour:(unsigned)arg1 ;
-(void)_noEventsViewTapped;
-(void)_remindMeAboutThisTapped;
-(char)_shouldShowAsListView;
-(id)_listView;
-(void)_refreshTodayView;
-(void)_updateBirthdayEvents;
-(char)_anyOccurrencesAvailable;
-(void)_loadAndShowAppropriateContentView;
-(float)_viewWidth;
-(float)_preferredListViewHeight;
-(float)_desiredTotalTopPadding;
-(void)_setTimeViewHourRangeToRender:(NSRange)arg1 ;
-(void)_adjustTopPadding;
-(float)_dayViewVisibleHeightRequired;
-(void)_eventFetchCompleted;
-(void)_showRemindMeAboutThisViewIfNeeded;
-(void)_setViewStatesForCachedEventCollection;
-(void)setUpdateSnapshotSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)updateSnapshotSemaphore;
-(char)_showingNoEventsView;
-(void)_hideRemindMeAboutThisViewIfNeeded;
-(void)_dayViewTappedEvent:(id)arg1 ;
-(void)_updateContentLayoutAndPreferredSize;
-(id)_fetchedVisibleTimedOccurences;
-(char)_shouldShowNoEventsView;
-(void)_setShowingNoEventsMode:(char)arg1 ;
-(void)_relayoutDayViewOccurrences;
-(id)_fetchedVisibleAllDayOccurences;
-(id)_dayContentView;
-(void)_stopHoldingDayContentViews;
-(void)_showNoEventsView;
-(void)_hideNoEventsView;
-(id)_noEventsView;
-(id)_eventsSortedByEarliestStartFirst:(id)arg1 ;
-(char)_shouldUseStartTimeFromEvent:(id)arg1 ;
-(float)_pointsPerHour;
-(id)_eventsSortedByFarthestEndLast:(id)arg1 ;
-(float)_preferredNoEventsViewHeight;
-(id)_startOfViewedTimeSpanWithOccurrences:(id)arg1 ;
-(id)_endOfViewedTimeSpanWithOccurrences:(id)arg1 ;
-(NSRange)_rangeLimitedToMidnight:(NSRange)arg1 ;
-(id)_fetchedVisibleOccurences;
-(char)_debugPrintOccurrencesVerbose;
-(void)_debugRefreshButtonPushed;
-(id)_dayView;
-(id)_currentDateComponents;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(char)tableView:(id)arg1 wantsHeaderForSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)_significantTimeChange:(id)arg1 ;
-(CGSize)preferredViewSize;
-(void)_localeChanged;
-(NSRange)_displayedHoursRange;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)_contentCategorySizeChanged:(id)arg1 ;
-(void)_updateContent;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(UIEdgeInsets)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
-(id)_now;
-(id)refreshCompletionHandler;
-(void)setRefreshCompletionHandler:(id)arg1 ;
@end

