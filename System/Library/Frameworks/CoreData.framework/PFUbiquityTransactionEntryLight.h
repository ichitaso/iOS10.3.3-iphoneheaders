/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityGlobalObjectID, NSString, NSNumber, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSDate;

@interface PFUbiquityTransactionEntryLight : NSObject {

	PFUbiquityGlobalObjectID* _globalID;
	int _transactionType;
	NSString* _actingPeerID;
	NSString* _storeName;
	NSNumber* _transactionNumber;
	PFUbiquityLocation* _transactionLogLocation;
	PFUbiquityKnowledgeVector* _kv;
	NSDate* _transactionDate;

}

@property (nonatomic,retain) PFUbiquityGlobalObjectID * globalID;                      //@synthesize globalID=_globalID - In the implementation block
@property (assign,nonatomic) int transactionType;                                      //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) NSString * actingPeerID;                                  //@synthesize actingPeerID=_actingPeerID - In the implementation block
@property (nonatomic,retain) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;                             //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * transactionLogLocation;              //@synthesize transactionLogLocation=_transactionLogLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * knowledgeVector;              //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                                 //@synthesize transactionDate=_transactionDate - In the implementation block
-(NSString *)storeName;
-(PFUbiquityLocation *)transactionLogLocation;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(NSNumber *)transactionNumber;
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setActingPeerID:(NSString *)arg1 ;
-(void)setGlobalID:(PFUbiquityGlobalObjectID *)arg1 ;
-(PFUbiquityGlobalObjectID *)globalID;
-(void)setTransactionLogLocation:(PFUbiquityLocation *)arg1 ;
-(NSString *)actingPeerID;
-(id)initWithTransactionEntry:(id)arg1 ubiquityRootLocation:(id)arg2 andGlobalIDCache:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(int)transactionType;
-(void)setTransactionType:(int)arg1 ;
@end

