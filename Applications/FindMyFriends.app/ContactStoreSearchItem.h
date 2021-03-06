/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDate, NSNumber, FMFContactWrapper;

@interface ContactStoreSearchItem : NSObject {

	NSString* _personId;
	NSString* _contactStoreUUID;
	NSArray* _handles;
	NSDate* _contactModifiedDate;
	NSNumber* _contactSearchDate;
	FMFContactWrapper* _contactWrapper;

}

@property (nonatomic,copy) NSString * personId;                               //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy) NSString * contactStoreUUID;                       //@synthesize contactStoreUUID=_contactStoreUUID - In the implementation block
@property (nonatomic,copy) NSArray * handles;                                 //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSDate * contactModifiedDate;                      //@synthesize contactModifiedDate=_contactModifiedDate - In the implementation block
@property (nonatomic,copy) NSNumber * contactSearchDate;                      //@synthesize contactSearchDate=_contactSearchDate - In the implementation block
@property (nonatomic,retain) FMFContactWrapper * contactWrapper;              //@synthesize contactWrapper=_contactWrapper - In the implementation block
-(NSString *)contactStoreUUID;
-(void)setContactStoreUUID:(NSString *)arg1 ;
-(FMFContactWrapper *)contactWrapper;
-(void)addHandlesForPerson:(id)arg1 ;
-(void)updatePersonWithDetails:(id)arg1 ;
-(void)setContactModifiedDate:(NSDate *)arg1 ;
-(void)setContactSearchDate:(NSNumber *)arg1 ;
-(id)handlesForPerson:(id)arg1 ;
-(NSDate *)contactModifiedDate;
-(NSNumber *)contactSearchDate;
-(void)setContactWrapper:(FMFContactWrapper *)arg1 ;
-(NSArray *)handles;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(id)initWithPerson:(id)arg1 ;
@end

