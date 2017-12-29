/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDPortraitDataProviderObserver.h>
#import <Health/WDChartRendererDataSource.h>
#import <Health/WDActivitySummaryDataProviderObserver.h>
#import <Health/WDActivitySummaryChartRendererDataSource.h>
#import <Health/WDDashboardCellPrimaryValueSource.h>
#import <Health/WDDashboardCellSecondaryValueSource.h>
#import <Health/WDDashboardCellChartSource.h>

@protocol WDDashboardCellPrimaryValueSourceDelegate, WDDashboardCellSecondaryValueSourceDelegate, WDDashboardCellChartSourceDelegate;
@class NSAttributedString, NSDate, WDChartRenderer, WDPortraitActivitySummaryChartDataProvider, WDActivitySummaryChartRenderer, NSDictionary, HKUnitController, WDControllerManager, WDPortraitDataProvider, WDPortraitChartDataProvider, HKDataUnit, HKDataCategory, NSString;

@interface WDDashboardChartItem : NSObject <WDPortraitDataProviderObserver, WDChartRendererDataSource, WDActivitySummaryDataProviderObserver, WDActivitySummaryChartRendererDataSource, WDDashboardCellPrimaryValueSource, WDDashboardCellSecondaryValueSource, WDDashboardCellChartSource> {

	NSDictionary* _dataPoints;
	char _isActive;
	HKUnitController* _unitController;
	WDControllerManager* _controllerManager;
	WDPortraitDataProvider* _currentValueDataProvider;
	WDPortraitDataProvider* _secondaryValueDataProvider;
	WDPortraitChartDataProvider* _chartDataProvider;
	WDPortraitActivitySummaryChartDataProvider* _activitySummaryProvider;
	char _localeDidChange;
	HKDataUnit* _dataUnit;
	id<WDDashboardCellPrimaryValueSourceDelegate> _primaryValueSourceDelegate;
	id<WDDashboardCellSecondaryValueSourceDelegate> _secondaryValueSourceDelegate;
	id<WDDashboardCellChartSourceDelegate> _chartSourceDelegate;
	HKDataCategory* _dataCategory;
	NSDate* _startDate;
	NSDate* _endDate;
	int _timeScope;
	WDActivitySummaryChartRenderer* _activitySummaryRenderer;
	WDChartRenderer* _chartRenderer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;                  //@synthesize primaryValueSourceDelegate=_primaryValueSourceDelegate - In the implementation block
@property (nonatomic,readonly) HKDataUnit * dataUnit;                                                                          //@synthesize dataUnit=_dataUnit - In the implementation block
@property (nonatomic,readonly) HKDataCategory * dataCategory;                                                                  //@synthesize dataCategory=_dataCategory - In the implementation block
@property (nonatomic,readonly) NSString * primaryValueContextualText; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (assign,nonatomic,__weak) id<WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;              //@synthesize secondaryValueSourceDelegate=_secondaryValueSourceDelegate - In the implementation block
@property (nonatomic,readonly) NSAttributedString * secondaryValue; 
@property (nonatomic,readonly) int timeScope;                                                                                  //@synthesize timeScope=_timeScope - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                                               //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic,__weak) id<WDDashboardCellChartSourceDelegate> chartSourceDelegate;                                //@synthesize chartSourceDelegate=_chartSourceDelegate - In the implementation block
@property (nonatomic,readonly) WDChartRenderer * chartRenderer;                                                                //@synthesize chartRenderer=_chartRenderer - In the implementation block
@property (nonatomic,readonly) WDPortraitActivitySummaryChartDataProvider * activitySummaryProvider;                           //@synthesize activitySummaryProvider=_activitySummaryProvider - In the implementation block
@property (nonatomic,readonly) WDActivitySummaryChartRenderer * activitySummaryRenderer;                                       //@synthesize activitySummaryRenderer=_activitySummaryRenderer - In the implementation block
@property (assign,nonatomic) char localeDidChange;                                                                             //@synthesize localeDidChange=_localeDidChange - In the implementation block
-(id)unitController;
-(WDChartRenderer *)chartRenderer;
-(id)initWithDataUnit:(id)arg1 useAlternateCurrentValue:(char)arg2 dataCategory:(id)arg3 controllerManager:(id)arg4 healthStore:(id)arg5 ;
-(void)setLocaleDidChange:(char)arg1 ;
-(void)setChartSourceDelegate:(id<WDDashboardCellChartSourceDelegate>)arg1 ;
-(WDActivitySummaryChartRenderer *)activitySummaryRenderer;
-(void)updateDateRangeWithDateCache:(id)arg1 timeScope:(int)arg2 ;
-(WDPortraitActivitySummaryChartDataProvider *)activitySummaryProvider;
-(void)dataProviderDidUpdateValues:(id)arg1 ;
-(id)activitySummaryChartPointsForRenderer:(id)arg1 ;
-(char)activitySummaryDataSourceIsLoadingForRenderer:(id)arg1 ;
-(int)activitySummaryTimeScopeForRenderer:(id)arg1 ;
-(id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2 ;
-(id<WDDashboardCellPrimaryValueSourceDelegate>)primaryValueSourceDelegate;
-(void)setPrimaryValueSourceDelegate:(id<WDDashboardCellPrimaryValueSourceDelegate>)arg1 ;
-(NSString *)primaryValueContextualText;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1 ;
-(char)dataForChartRendererIsFinishedLoading:(id)arg1 ;
-(void)adjustChartBoundsWithMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(int*)arg5 ;
-(unsigned)numberOfSeriesInChartRenderer:(id)arg1 ;
-(id)chartRenderer:(id)arg1 seriesAtIndex:(unsigned)arg2 ;
-(unsigned)chartRenderer:(id)arg1 numberOfDataPointsForSeriesAtIndex:(unsigned)arg2 ;
-(id)chartRenderer:(id)arg1 dataPointAtIndex:(unsigned)arg2 forSeriesAtIndex:(unsigned)arg3 ;
-(void)invalidateChart;
-(void)_setStartDate:(id)arg1 endDate:(id)arg2 timeScope:(int)arg3 ;
-(id<WDDashboardCellChartSourceDelegate>)chartSourceDelegate;
-(id<WDDashboardCellSecondaryValueSourceDelegate>)secondaryValueSourceDelegate;
-(UIEdgeInsets)_chartInsetsForTimeScope:(int)arg1 ;
-(void)setSecondaryValueSourceDelegate:(id<WDDashboardCellSecondaryValueSourceDelegate>)arg1 ;
-(char)shouldHideAverageLineForTimeScope:(int)arg1 ;
-(char)shouldHideMinMaxOnBackgroundForTimeScope:(int)arg1 ;
-(char)shouldHideChartForTimeScope:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDate *)lastUpdated;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(char)localeDidChange;
-(int)timeScope;
-(NSAttributedString *)secondaryValue;
-(HKDataUnit *)dataUnit;
-(HKDataCategory *)dataCategory;
@end
