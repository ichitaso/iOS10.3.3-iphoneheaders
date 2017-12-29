/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSPQuery, NSMutableDictionary, NSMutableArray, NSArray;

@interface Recents : NSObject {

	MSPQuery* _historyQuery;
	char _loadingCoreRecents;
	char _needsReload;
	NSMutableDictionary* _coreRecentsMapItemCache;
	NSMutableArray* _coreRecentsNoResultCacheIDs;
	NSArray* _systemRecents;
	NSArray* _orderedRecents;

}

@property (nonatomic,readonly) NSArray * systemRecents;               //@synthesize systemRecents=_systemRecents - In the implementation block
@property (nonatomic,readonly) NSArray * orderedRecents;              //@synthesize orderedRecents=_orderedRecents - In the implementation block
+(void)beginPrecachingRecentsIfNeeded;
+(id)sharedRecents;
-(id)cachedMapItemForContactID:(long long)arg1 ;
-(void)_applicationActivating;
-(void)_historyChanged;
-(void)setNeedsCoreRecentsReload;
-(void)loadCoreRecentsOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_combineRecents;
-(void)deleteCoreRecentContact:(id)arg1 ;
-(void)recordCoreRecentContact:(id)arg1 ;
-(NSArray *)systemRecents;
-(NSArray *)orderedRecents;
-(id)init;
-(void)dealloc;
@end

