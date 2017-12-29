/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>
#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClient.h>

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
@optional
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 checkPrefetch:(char)arg3;

@required
-(void)invalidate;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 checkPrefetch:(char)arg4;
-(char)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
-(void)addPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)availableDataStores:(/*^block*/id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSHashTable, NSString;

@interface FBSApplicationDataStoreRepositoryClient : FBSSystemServiceFacilityClient <FBSApplicationDataStoreRepositoryClient> {

	NSMutableDictionary* _prefetchedKeyCounts;
	NSMutableDictionary* _prefetchedKeyValues;
	NSMutableDictionary* _pendingChangesToPrefetchedKeys;
	NSObject*<OS_dispatch_queue> _prefetchedDataQueue;
	NSObject*<OS_dispatch_queue> _observersQueue;
	NSHashTable* _observers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(char)arg4 ;
-(void)fireCompletion:(/*^block*/id)arg1 arrayResults:(id)arg2 error:(id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3 ;
-(void)_setChangeInFlight:(char)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3 ;
-(void)_handleStoreInvalidated:(id)arg1 ;
-(char)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)_allPrefetchedChangesInFlightForApplication:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_observers;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 checkPrefetch:(char)arg4 ;
-(char)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3 ;
-(void)addPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)availableDataStores:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleValueChanged:(id)arg1 ;
-(id)clientCallbackQueue;
@end

