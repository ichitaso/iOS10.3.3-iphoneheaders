/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityLocation, NSString, NSMutableSet, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, NSSet;

@interface PFUbiquityStoreExportContext : NSObject {

	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _localPeerID;
	NSString* _storeName;
	NSMutableSet* _transactionEntries;
	NSSQLCore* _store;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                   //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                      //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                        //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSSet * transactionEntries;                                  //@synthesize transactionEntries=_transactionEntries - In the implementation block
@property (nonatomic,retain) NSSQLCore * store;                                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;              //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(NSSet *)transactionEntries;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3 ;
-(id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setStore:(NSSQLCore *)arg1 ;
-(NSSQLCore *)store;
@end

