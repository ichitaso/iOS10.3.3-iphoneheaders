/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, SynchronizedMutableDictionary;

@interface FMFContactsController : NSObject {

	char _preferNicknames;
	CNContactStore* _contactStore;
	SynchronizedMutableDictionary* _recordCache;
	double _lastABUpdateTime;

}

@property (nonatomic,retain) SynchronizedMutableDictionary * recordCache;              //@synthesize recordCache=_recordCache - In the implementation block
@property (assign,nonatomic) double lastABUpdateTime;                                  //@synthesize lastABUpdateTime=_lastABUpdateTime - In the implementation block
@property (assign,nonatomic) char preferNicknames;                                     //@synthesize preferNicknames=_preferNicknames - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                            //@synthesize contactStore=_contactStore - In the implementation block
+(id)newContactForHandle:(id)arg1 ;
+(id)sharedInstance;
-(char)doesContact:(id)arg1 containAnyEmailFrom:(id)arg2 ;
-(id)fmfContactWrapperForPerson:(id)arg1 ;
-(char)isNicknamePrefered;
-(double)lastABUpdateTime;
-(void)searchContactStoreForPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contactForHandle:(id)arg1 ;
-(void)setRecordCache:(SynchronizedMutableDictionary *)arg1 ;
-(void)setLastABUpdateTime:(double)arg1 ;
-(id)preferredContactForEmail:(id)arg1 ;
-(id)preferredContactForPhoneNumber:(id)arg1 ;
-(char)doesContact:(id)arg1 containPhoneNumber:(id)arg2 ;
-(char)doesContact:(id)arg1 containEmail:(id)arg2 ;
-(void)searchPersonsInContactStore:(id)arg1 ;
-(id)contactForPredicate:(id)arg1 ;
-(id)preferredContactFromContacts:(id)arg1 ;
-(char)doesContact:(id)arg1 containAnyPhoneNumberFrom:(id)arg2 ;
-(char)wasABUpdatedSince:(double)arg1 ;
-(id)fullNameForEmail:(id)arg1 ;
-(id)fullNameForPhoneNumber:(id)arg1 ;
-(void)flushCacheForPerson:(id)arg1 ;
-(void)personDidResolve;
-(id)init;
-(void)dealloc;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)flushCache;
-(id)reverseString:(id)arg1 ;
-(SynchronizedMutableDictionary *)recordCache;
-(void)setPreferNicknames:(char)arg1 ;
-(char)preferNicknames;
-(void)contactStoreDidChange;
@end

