/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDSampleListDataProvider.h>

@interface WDDocumentListDataProvider : WDSampleListDataProvider
-(id)sampleTypes;
-(id)customCellForObject:(id)arg1 viewController:(id)arg2 tableView:(id)arg3 ;
-(float)customCellHeight;
-(int)cellStyleForDataListViewController:(id)arg1 ;
-(id)dataListViewController:(id)arg1 titleForSection:(unsigned)arg2 ;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(int)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)refineSamplesWithCompletion:(/*^block*/id)arg1 ;
@end

