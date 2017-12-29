/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/_WDDataMetadataSection.h>

@class WDControllerManager, HKSample, NSArray, NSMutableDictionary;

@interface _WDDataMetadataSubSampleTypeSection : _WDDataMetadataSection {

	WDControllerManager* _controllerManager;
	HKSample* _sample;
	NSArray* _subSampleTypes;
	NSMutableDictionary* _aggregationValue;

}

@property (readonly) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
@property (readonly) HKSample * sample;                                    //@synthesize sample=_sample - In the implementation block
@property (readonly) NSArray * subSampleTypes;                             //@synthesize subSampleTypes=_subSampleTypes - In the implementation block
@property (retain) NSMutableDictionary * aggregationValue;                 //@synthesize aggregationValue=_aggregationValue - In the implementation block
-(WDControllerManager *)controllerManager;
-(id)cellForIndex:(unsigned)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned)arg1 navigationController:(id)arg2 animated:(char)arg3 ;
-(id)initWithSectionTitle:(id)arg1 controllerManager:(id)arg2 sample:(id)arg3 subSampleTypes:(id)arg4 fixedAggregateValues:(id)arg5 aggregateQueryFinishedBlock:(/*^block*/id)arg6 ;
-(id)_subSampleAggregatePredicate:(id)arg1 ;
-(id)_formattedValueWithUnits:(id)arg1 sampleType:(id)arg2 ;
-(void)_updateAggregateValue:(id)arg1 sampleType:(id)arg2 aggregateQueryFinishedBlock:(/*^block*/id)arg3 ;
-(void)_submitSumAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(void)_submitAverageAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(void)_submitCountStandHourQueryForSampleType:(id)arg1 aggregateQueryFinishedBlock:(/*^block*/id)arg2 ;
-(void)_submitSubSampleAggregateQueriesWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)subSampleTypes;
-(NSMutableDictionary *)aggregationValue;
-(void)setAggregationValue:(NSMutableDictionary *)arg1 ;
-(unsigned)numberOfRowsInSection;
-(HKSample *)sample;
@end
