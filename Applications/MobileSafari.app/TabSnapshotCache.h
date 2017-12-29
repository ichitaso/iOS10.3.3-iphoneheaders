/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSString, NSObject;

@interface TabSnapshotCache : NSObject {

	NSMapTable* _delegateToContextMap;
	unsigned _currentlyRequestedSnapshotCount;
	NSMutableDictionary* _snapshots;
	char _updating;
	NSString* _thumbnailCacheDirectoryPath;
	NSObject*<OS_dispatch_queue> _fileSystemAccessQueue;
	char _currentlyRequestingNextSnapshot;
	char _needsRequestNextSnapshot;

}

@property (nonatomic,copy) NSString * thumbnailCacheDirectoryPath; 
@property (getter=isFinishedUpdating,nonatomic,readonly) char finishedUpdating; 
+(unsigned)maximumSnapshotCacheCapacity;
+(void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)arg1 ;
+(id)defaultSnapshotCache;
+(void)initialize;
-(void)_saveSnapshotForIdentifier:(id)arg1 ;
-(id)snapshotWithIdentifier:(id)arg1 ;
-(void)requestNextSnapshotIfNecessary;
-(void)setIdentifiersToCache:(id)arg1 forDelegate:(id)arg2 ;
-(char)hasValidSnapshotWithIdentifier:(id)arg1 ;
-(void)invalidateSnapshotWithIdentifier:(id)arg1 ;
-(void)setUpdating:(char)arg1 forDelegate:(id)arg2 ;
-(void)setCapacity:(unsigned)arg1 forDelegate:(id)arg2 ;
-(char)isFinishedUpdating;
-(void)setThumbnailCacheDirectoryPath:(NSString *)arg1 ;
-(id)_pathForSavedSnapshotWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(id)_pathForSavedPNGSnapshotWithIdentifier:(id)arg1 ;
-(id)identifiersToCacheForDelegate:(id)arg1 ;
-(id)_contextForDelegate:(id)arg1 ;
-(id)_pathForSavedSnapshotWithIdentifier:(id)arg1 ;
-(void)_beginUpdatingStateForIdentifier:(id)arg1 ;
-(void)_finishUpdatingToState:(int)arg1 forIdentifier:(id)arg2 ;
-(void)_finishUpdatingToState:(int)arg1 cachedSnapshot:(id)arg2 forIdentifier:(id)arg3 ;
-(void)_sendDidFinishUpdatingToDelegateIfNeeded;
-(id)_allIdentifiersToCache;
-(void)_determineInitialStateForIdentifier:(id)arg1 ;
-(void)_requestSavedSnapshotForIdentifier:(id)arg1 ;
-(void)_requestNextSnapshotIfNecessaryForDelegate:(id)arg1 ;
-(NSString *)thumbnailCacheDirectoryPath;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
@end

