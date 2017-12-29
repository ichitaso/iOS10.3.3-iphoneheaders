/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSManagedObjectContext, NSString, NSArray;

@interface NSFetchedResultsController : NSObject {

	NSFetchRequest* _fetchRequest;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _sectionNameKeyPath;
	NSString* _sectionNameKey;
	NSString* _cacheName;
	void* _cache;
	struct {
		unsigned _sendObjectChangeNotifications : 1;
		unsigned _sendSectionChangeNotifications : 1;
		unsigned _sendDidChangeContentNotifications : 1;
		unsigned _sendWillChangeContentNotifications : 1;
		unsigned _sendSectionIndexTitleForSectionName : 1;
		unsigned _changedResultsSinceLastSave : 1;
		unsigned _hasMutableFetchedResults : 1;
		unsigned _hasBatchedArrayResults : 1;
		unsigned _hasSections : 1;
		unsigned _usesNonpersistedProperties : 1;
		unsigned _includesSubentities : 1;
		unsigned _reservedFlags : 21;
	}  _flags;
	id _delegate;
	id _sortKeys;
	id _fetchedObjects;
	id _sections;
	id _sectionsByName;
	id _sectionIndexTitles;
	id _sectionIndexTitlesSections;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSString * sectionNameKeyPath;                              //@synthesize sectionNameKeyPath=_sectionNameKeyPath - In the implementation block
@property (nonatomic,readonly) NSString * cacheName;                                       //@synthesize cacheName=_cacheName - In the implementation block
@property (assign,nonatomic) id<NSFetchedResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sections; 
+(id)_CoreDataSectionCachesPath;
+(void)deleteCacheWithName:(id)arg1 ;
+(unsigned)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(int)arg3 highIdx:(int)arg4 sortDescriptors:(id)arg5 ;
+(void)initialize;
-(char)_keyPathContainsNonPersistedProperties:(id)arg1 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)_managedObjectContextDidChange:(id)arg1 ;
-(void)_managedObjectContextDidChangeObjectIDs:(id)arg1 ;
-(char)_restoreCachedSectionInfo;
-(char)_computeSectionInfo:(id)arg1 error:(id*)arg2 ;
-(void)_recursivePerformBlockAndWait:(/*^block*/id)arg1 withContext:(id)arg2 ;
-(id)_sectionNameForObject:(id)arg1 ;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4 ;
-(char)performFetch:(id*)arg1 ;
-(id)_fetchedObjects;
-(id)indexPathForObject:(id)arg1 ;
-(id)sectionIndexTitleForSectionName:(id)arg1 ;
-(int)sectionForSectionIndexTitle:(id)arg1 atIndex:(int)arg2 ;
-(NSString *)sectionNameKeyPath;
-(NSString *)cacheName;
-(id)_sectionCachePath;
-(char)_computeSectionInfoWithGroupBy:(id)arg1 error:(id*)arg2 ;
-(id)_resolveSectionIndexTitleForSectionName:(id)arg1 ;
-(void)_makeMutableFetchedObjects;
-(unsigned)_indexOfFetchedID:(id)arg1 ;
-(char)_objectInResults:(id)arg1 ;
-(id)_createNewSectionForObject:(id)arg1 ;
-(void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_updateSectionOffsetsStartingAtSection:(id)arg1 ;
-(id)_indexPathForIndex:(unsigned)arg1 ;
-(unsigned)_sectionNumberForIndex:(unsigned)arg1 ;
-(void)_removeObjectInFetchedObjectsAtIndex:(unsigned)arg1 ;
-(char)_updateFetchedObjectsWithDeleteChange:(id)arg1 ;
-(char)_updateFetchedObjectsWithInsertChange:(id)arg1 ;
-(id)_fetchedObjectsArrayOfObjectIDs;
-(void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3 ;
-(void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3 ;
-(void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(id)arg7 ;
-(char)_updateFetchedObjectsWithInsertedObjects:(id)arg1 deletedObjects:(id)arg2 updatedObjects:(id)arg3 ;
-(void)_lowerMoveOperationsToUpdatesForSection:(id)arg1 withInsertedObjects:(id)arg2 deletedObjects:(id)arg3 updatedObjects:(id)arg4 ;
-(void)_core_managedObjectContextDidChange:(id)arg1 ;
-(void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long*)arg2 ;
-(char)_updateCachedStoreInfo;
-(char)_hasFetchedObjects;
-(void)_dumpSectionInfo;
-(void)setDelegate:(id<NSFetchedResultsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(id)_sections;
-(NSArray *)sectionIndexTitles;
-(NSArray *)sections;
-(NSManagedObjectContext *)managedObjectContext;
-(NSFetchRequest *)fetchRequest;
-(NSArray *)fetchedObjects;
-(id)objectAtIndexPath:(id)arg1 ;
@end

