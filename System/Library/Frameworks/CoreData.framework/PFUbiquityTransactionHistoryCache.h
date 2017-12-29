/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, NSPersistentStore, NSPersistentStoreCoordinator, NSMutableDictionary, NSRecursiveLock, NSMutableArray, PFUbiquityKnowledgeVector, PFUbiquityGlobalObjectIDCache, NSArray;

@interface PFUbiquityTransactionHistoryCache : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _rootLocation;
	NSString* _storeName;
	NSPersistentStore* _privateStore;
	NSPersistentStoreCoordinator* _privatePSC;
	NSMutableDictionary* _peerIDToHistoryArray;
	NSMutableDictionary* _globalIDToHistoryArray;
	NSRecursiveLock* _peerIDToHistoryArrayLock;
	NSMutableArray* _entriesToWrite;
	PFUbiquityKnowledgeVector* _cacheKV;
	PFUbiquityKnowledgeVector* _minCacheKV;
	PFUbiquityGlobalObjectIDCache* _globalIDCache;
	char _hasScheduledWriteBlock;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize rootLocation=_rootLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityGlobalObjectIDCache * globalIDCache;              //@synthesize globalIDCache=_globalIDCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * cacheKV;                      //@synthesize cacheKV=_cacheKV - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * minCacheKV;                   //@synthesize minCacheKV=_minCacheKV - In the implementation block
@property (nonatomic,readonly) NSArray * cachedGlobalIDs; 
-(PFUbiquityLocation *)ubiquityRootLocation;
-(char)cacheTransactionHistory:(id*)arg1 ;
-(PFUbiquityKnowledgeVector *)cacheKV;
-(PFUbiquityKnowledgeVector *)minCacheKV;
-(char)purgeCacheAndWritePendingEntries:(char)arg1 error:(id*)arg2 ;
-(char)writePendingEntries:(id*)arg1 ;
-(id)cachedTransactionHistoryForGlobalID:(id)arg1 ;
-(char)addTransactionEntryLight:(id)arg1 needsWrite:(char)arg2 error:(id*)arg3 ;
-(char)addTransactionEntryLights:(id)arg1 error:(id*)arg2 ;
-(PFUbiquityGlobalObjectIDCache *)globalIDCache;
-(id)describeCaches;
-(id)describeCachesVerbose;
-(char)addTransactionEntry:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 privateStore:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(NSArray *)cachedGlobalIDs;
-(void)setGlobalIDCache:(PFUbiquityGlobalObjectIDCache *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

