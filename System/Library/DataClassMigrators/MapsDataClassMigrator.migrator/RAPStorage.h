/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSArray;

@interface RAPStorage : NSObject {

	NSURL* _directoryURL;
	NSString* _pathExtension;
	double _itemTimeToLive;

}

@property (assign,nonatomic) double itemTimeToLive;                                               //@synthesize itemTimeToLive=_itemTimeToLive - In the implementation block
@property (nonatomic,readonly) NSArray * allItemIdentifiersByDescendingCreationDate; 
@property (nonatomic,readonly) char containsItems; 
+(double)standardTimeToLive;
-(void)garbageCollectIfNeeded;
-(char)containsItems;
-(id)initWithStorageDirectoryURL:(id)arg1 ;
-(id)dataForItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)saveItemWithData:(id)arg1 forIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)orphanedIdentifiersAfterRemovingItemsOutsideOfIdentifiers:(id)arg1 ;
-(double)itemTimeToLive;
-(void)setItemTimeToLive:(double)arg1 ;
-(id)_allItemIdentifiersByCreationDateSortedAscending:(char)arg1 dates:(out id*)arg2 ;
-(char)_removeItemWithIdentifier:(id)arg1 triggeringGarbageCollection:(char)arg2 error:(id*)arg3 ;
-(id)_itemURLForIdentifier:(id)arg1 ;
-(void)_iterateAllItemIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)_iterateAllItemIdentifiersIncludingURLPropertiesForKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)removeItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithStorageDirectoryURL:(id)arg1 pathExtension:(id)arg2 ;
-(id)initByUsingOrCreatingStorageDirectoryAtURL:(id)arg1 error:(out id*)arg2 ;
-(id)creationDateForItemWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(NSArray *)allItemIdentifiersByDescendingCreationDate;
-(id)init;
-(void)removeAllItems;
@end

