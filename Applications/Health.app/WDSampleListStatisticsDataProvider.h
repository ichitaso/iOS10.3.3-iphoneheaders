/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDDataListViewControllerDataProvider.h>

@class NSPredicate, NSMutableArray, NSMutableSet, HKSource, HKDataUnit, WDControllerManager, HKUnitController, NSArray, NSString;

@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider> {

	NSMutableArray* _data;
	NSMutableArray* _activeDataQueries;
	NSMutableSet* _activeQueryTypes;
	HKSource* _source;
	NSPredicate* defaultQueryPredicate;
	HKDataUnit* _dataUnit;
	WDControllerManager* _controllerManager;
	HKUnitController* _unitController;

}

@property (nonatomic,readonly) NSArray * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) HKDataUnit * dataUnit;                                //@synthesize dataUnit=_dataUnit - In the implementation block
@property (nonatomic,readonly) WDControllerManager * controllerManager;              //@synthesize controllerManager=_controllerManager - In the implementation block
@property (nonatomic,readonly) HKUnitController * unitController;                    //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) NSPredicate * defaultQueryPredicate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WDControllerManager *)controllerManager;
-(id)sampleTypes;
-(id)dataListViewController:(id)arg1 textForObject:(id)arg2 ;
-(id)initWithDataUnit:(id)arg1 controllerManager:(id)arg2 ;
-(void)dataListViewController:(id)arg1 shouldStartCollectingDataWithUpdateHandler:(/*^block*/id)arg2 ;
-(unsigned)dataListViewController:(id)arg1 numberOfObjectsForSection:(unsigned)arg2 ;
-(id)dataListViewController:(id)arg1 objectAtIndex:(unsigned)arg2 forSection:(unsigned)arg3 ;
-(id)customCellForObject:(id)arg1 viewController:(id)arg2 tableView:(id)arg3 ;
-(id)dataListViewController:(id)arg1 viewControllerForItemAtIndexPath:(id)arg2 ;
-(HKUnitController *)unitController;
-(float)customCellHeight;
-(unsigned)_statisticsOptionsForSampleType:(id)arg1 ;
-(NSPredicate *)defaultQueryPredicate;
-(void)setDefaultQueryPredicate:(NSPredicate *)arg1 ;
-(int)cellStyleForDataListViewController:(id)arg1 ;
-(unsigned)numberOfSectionsForDataListViewController:(id)arg1 ;
-(id)dataListViewController:(id)arg1 titleForSection:(unsigned)arg2 ;
-(id)dataListViewController:(id)arg1 secondaryTextForObject:(id)arg2 ;
-(char)textAdjustsFontSizeToFitWidth:(id)arg1 ;
-(void)dataListViewControllerShouldStopCollectingData:(id)arg1 ;
-(void)deleteObjectsAtIndexPath:(id)arg1 withSource:(id)arg2 healthStore:(id)arg3 options:(unsigned)arg4 completion:(/*^block*/id)arg5 ;
-(void)dataListViewController:(id)arg1 didRemoveObjectAtIndex:(unsigned)arg2 forSection:(unsigned)arg3 sectionRemoved:(char*)arg4 ;
-(void)dataListViewControllerDidDeleteAllData:(id)arg1 ;
-(void)dataListViewControllerIsNearEndOfScreen:(id)arg1 ;
-(NSArray *)data;
-(HKDataUnit *)dataUnit;
@end

