/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, _CDContact, NSString, NSSet;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _reasons;
	_CDContact* _contact;
	NSString* _account;
	NSString* _bundleId;
	int _mechanism;
	int _similarOutgoingInteractionsCount;
	int _similarIncomingInteractionsCount;
	int _similarBidirectionalInteractionsCount;
	double _score;

}

@property (retain) _CDContact * contact;                                   //@synthesize contact=_contact - In the implementation block
@property (retain) NSString * account;                                     //@synthesize account=_account - In the implementation block
@property (retain) NSString * bundleId;                                    //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) int mechanism;                                          //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) double score;                                           //@synthesize score=_score - In the implementation block
@property (retain) NSSet * reasons; 
@property (assign) int similarOutgoingInteractionsCount;                   //@synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount - In the implementation block
@property (assign) int similarIncomingInteractionsCount;                   //@synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount - In the implementation block
@property (assign) int similarBidirectionalInteractionsCount;              //@synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)descriptionOfReasons:(id)arg1 ;
-(void)setMechanism:(int)arg1 ;
-(void)addReasons:(id)arg1 ;
-(int)similarOutgoingInteractionsCount;
-(void)setSimilarOutgoingInteractionsCount:(int)arg1 ;
-(int)similarIncomingInteractionsCount;
-(void)setSimilarIncomingInteractionsCount:(int)arg1 ;
-(int)similarBidirectionalInteractionsCount;
-(void)setSimilarBidirectionalInteractionsCount:(int)arg1 ;
-(void)setScore:(double)arg1 ;
-(int)mechanism;
-(void)addReason:(int)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSSet *)reasons;
-(void)setReasons:(NSSet *)arg1 ;
-(_CDContact *)contact;
-(double)score;
-(void)setContact:(_CDContact *)arg1 ;
@end

