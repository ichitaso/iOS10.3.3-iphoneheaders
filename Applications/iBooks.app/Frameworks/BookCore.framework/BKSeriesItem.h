/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface BKSeriesItem : NSManagedObject

@property (nonatomic,retain) NSString * adamId; 
@property (nonatomic,retain) NSString * sortTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * sortAuthor; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,retain) NSNumber * position; 
@property (nonatomic,retain) NSNumber * popularity; 
@property (nonatomic,retain) NSString * seriesAdamId; 
@property (nonatomic,retain) NSString * seriesTitle; 
@property (nonatomic,retain) NSNumber * isExplicit; 
@property (nonatomic,retain) NSNumber * isContainer; 
@property (nonatomic,retain) NSString * sequenceDisplayName; 
@property (nonatomic,retain) NSString * genre; 
+(id)predicateForAllItemsAndContainersInSeries:(id)arg1 ;
+(id)insertSeriesContainerWithSeriesAdamId:(id)arg1 intoManagedObjectContext:(id)arg2 ;
+(id)predicateForAllSeriesItems;
+(id)predicateForAllItemsAndContainerWithAdamIdInList:(id)arg1 ;
+(id)insertSeriesItemWithAdamId:(id)arg1 seriesAdamId:(id)arg2 intoManagedObjectContext:(id)arg3 ;
+(id)seriesItem;
+(id)predicateForItemWithAdamId:(id)arg1 ;
+(id)predicateForAllSeriesContainerItems;
+(id)predicateForContainerWithSeriesId:(id)arg1 ;
+(id)fetchRequest;
@end
