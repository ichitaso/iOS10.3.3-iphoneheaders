/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/PlugIns/CalendarWidget.appex/CalendarWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CalendarOccurrencesCollection, EKTimedEventStorePurger;

@interface CalendarWidgetModel : NSObject {

	NSObject*<OS_dispatch_queue> _eventLoadingQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CalendarOccurrencesCollection* _loadedEventCollection;
	char _hasEverCompletedFetch;
	char _active;
	EKTimedEventStorePurger* _eventStorePurger;

}

@property (assign,nonatomic) char hasEverCompletedFetch;                                           //@synthesize hasEverCompletedFetch=_hasEverCompletedFetch - In the implementation block
@property (nonatomic,retain) EKTimedEventStorePurger * eventStorePurger;                           //@synthesize eventStorePurger=_eventStorePurger - In the implementation block
@property (nonatomic,readonly) CalendarOccurrencesCollection * loadedEventCollection; 
@property (assign,nonatomic) char active;                                                          //@synthesize active=_active - In the implementation block
-(char)hasEverCompletedFetch;
-(void)reloadEvents:(id)arg1 ;
-(CalendarOccurrencesCollection *)loadedEventCollection;
-(void)setEventStorePurger:(EKTimedEventStorePurger *)arg1 ;
-(EKTimedEventStorePurger *)eventStorePurger;
-(void)_fetchUpcomingOccurrences:(id)arg1 ;
-(void)setHasEverCompletedFetch:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)active;
-(void)setActive:(char)arg1 ;
-(id)_selectedCalendars;
-(void)_timeZoneChanged:(id)arg1 ;
@end

