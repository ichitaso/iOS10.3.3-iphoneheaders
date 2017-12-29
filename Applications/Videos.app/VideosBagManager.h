/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableSet, NSSet;

@interface VideosBagManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSMutableSet* _checkInPersistentIdentifiers;
	NSMutableSet* _syncPersistentIdentifiers;

}

@property (copy,readonly) NSMutableSet * checkInPersistentIdentifiers;              //@synthesize checkInPersistentIdentifiers=_checkInPersistentIdentifiers - In the implementation block
@property (copy,readonly) NSMutableSet * syncPersistentIdentifiers;                 //@synthesize syncPersistentIdentifiers=_syncPersistentIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mediaItemsNeedingCheckIn; 
@property (nonatomic,copy,readonly) NSSet * mediaItemsNeedingSync; 
-(NSMutableSet *)checkInPersistentIdentifiers;
-(NSMutableSet *)syncPersistentIdentifiers;
-(void)_removeItem:(id)arg1 fromStore:(id)arg2 ;
-(void)_addMediaItem:(id)arg1 toStore:(id)arg2 ;
-(id)_populateItemsNeedingCheckin;
-(id)_populateItemsNeedingSync;
-(id)_nonLocalRentals:(char)arg1 ;
-(NSSet *)mediaItemsNeedingCheckIn;
-(NSSet *)mediaItemsNeedingSync;
-(void)checkingIn:(id)arg1 ;
-(void)checkingOut:(id)arg1 ofType:(int)arg2 ;
-(void)deferredCheckIn:(id)arg1 ;
-(void)loadRentalsNeedingCheckin:(/*^block*/id)arg1 ;
-(void)needsSync:(id)arg1 ;
-(void)synced:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

