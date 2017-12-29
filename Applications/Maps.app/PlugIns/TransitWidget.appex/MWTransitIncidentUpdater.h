/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MWTransitIncidentUpdaterObserver;
@class NSMutableOrderedSet, NSTimer, NSArray, NSOrderedSet;

@interface MWTransitIncidentUpdater : NSObject {

	NSMutableOrderedSet* _dates;
	NSTimer* _updateTimer;
	NSTimer* _autoRefreshTimer;
	NSArray* _lineItems;
	id<MWTransitIncidentUpdaterObserver> _observer;
	double _refreshInterval;

}

@property (nonatomic,copy,readonly) NSOrderedSet * updateDates; 
@property (nonatomic,copy,readonly) NSArray * lineItems;                                        //@synthesize lineItems=_lineItems - In the implementation block
@property (nonatomic,readonly) double refreshInterval;                                          //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (assign,nonatomic,__weak) id<MWTransitIncidentUpdaterObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(id)initWithTransitLineItems:(id)arg1 refreshInterval:(double)arg2 ;
-(NSOrderedSet *)updateDates;
-(id)_calculateUpdateDatesForIncidents;
-(void)_scheduleAutoRefreshTimer;
-(void)_schedulateNextUpdate;
-(void)_nextUpdateTimerFired:(id)arg1 ;
-(void)_autoRefreshTimerFired:(id)arg1 ;
-(NSArray *)lineItems;
-(void)invalidate;
-(void)dealloc;
-(void)setObserver:(id<MWTransitIncidentUpdaterObserver>)arg1 ;
-(id<MWTransitIncidentUpdaterObserver>)observer;
-(double)refreshInterval;
@end
