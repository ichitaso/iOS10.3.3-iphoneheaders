/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSArray, NSString, NSDictionary, NSDate;

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSArray* _accountPermissions;
	int _accountStatus;
	unsigned long long _acceptedStoreTermsVersion;
	int _carrierBundlingStatus;
	NSString* _cellularOperatorName;
	char _discoveryModeEligible;
	char _familyOrganizer;
	char _familySubscription;
	char _freeTrialIneligible;
	char _hasFamily;
	char _hasFamilyMembers;
	char _hasOfflineSlots;
	unsigned long long _latestStoreTermsVersion;
	NSString* _phoneNumber;
	NSDictionary* _rawResponseData;
	double _subscriptionExpirationTime;
	char _subscriptionPurchaser;
	char _hasOfflineSlot;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * accountPermissions;                                             //@synthesize accountPermissions=_accountPermissions - In the implementation block
@property (assign,nonatomic) int accountStatus;                                                      //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign,nonatomic) unsigned long long acceptedStoreTermsVersion;                           //@synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion - In the implementation block
@property (assign,nonatomic) int carrierBundlingStatus;                                              //@synthesize carrierBundlingStatus=_carrierBundlingStatus - In the implementation block
@property (nonatomic,copy) NSString * cellularOperatorName;                                          //@synthesize cellularOperatorName=_cellularOperatorName - In the implementation block
@property (assign,getter=isDiscoveryModeEligible,nonatomic) char discoveryModeEligible;              //@synthesize discoveryModeEligible=_discoveryModeEligible - In the implementation block
@property (assign,getter=isFamilyOrganizer,nonatomic) char familyOrganizer;                          //@synthesize familyOrganizer=_familyOrganizer - In the implementation block
@property (assign,getter=isFamilySubscription,nonatomic) char familySubscription;                    //@synthesize familySubscription=_familySubscription - In the implementation block
@property (assign,getter=isFreeTrialIneligible,nonatomic) char freeTrialIneligible;                  //@synthesize freeTrialIneligible=_freeTrialIneligible - In the implementation block
@property (assign,nonatomic) char hasFamily;                                                         //@synthesize hasFamily=_hasFamily - In the implementation block
@property (assign,nonatomic) char hasFamilyMembers;                                                  //@synthesize hasFamilyMembers=_hasFamilyMembers - In the implementation block
@property (assign,nonatomic) char hasOfflineSlots;                                                   //@synthesize hasOfflineSlots=_hasOfflineSlots - In the implementation block
@property (assign,nonatomic) unsigned long long latestStoreTermsVersion;                             //@synthesize latestStoreTermsVersion=_latestStoreTermsVersion - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * rawResponseData;                                           //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                                             //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) char subscribed; 
@property (nonatomic,copy) NSDate * subscriptionExpirationDate; 
@property (assign,getter=isSubscriptionPurchaser,nonatomic) char subscriptionPurchaser;              //@synthesize subscriptionPurchaser=_subscriptionPurchaser - In the implementation block
@property (nonatomic,readonly) char hasOfflineSlot;                                                  //@synthesize hasOfflineSlot=_hasOfflineSlot - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)subscriptionExpirationDate;
-(id)initWithUserDefaultsRepresentation:(id)arg1 ;
-(void)resetAccountBasedProperties;
-(void)resetCarrierBundlingProperties;
-(void)setAcceptedStoreTermsVersion:(unsigned long long)arg1 ;
-(void)setCellularOperatorName:(NSString *)arg1 ;
-(void)setDiscoveryModeEligible:(char)arg1 ;
-(void)setSubscriptionExpirationDate:(NSDate *)arg1 ;
-(void)setFamilyOrganizer:(char)arg1 ;
-(void)setFamilySubscription:(char)arg1 ;
-(void)setFreeTrialIneligible:(char)arg1 ;
-(void)setHasFamily:(char)arg1 ;
-(void)setHasFamilyMembers:(char)arg1 ;
-(void)setHasOfflineSlots:(char)arg1 ;
-(void)setLatestStoreTermsVersion:(unsigned long long)arg1 ;
-(void)setSubscriptionPurchaser:(char)arg1 ;
-(void)_setSubscribed:(char)arg1 ;
-(void)setAccountPermissions:(NSArray *)arg1 ;
-(void)setRawResponseData:(NSDictionary *)arg1 ;
-(NSArray *)accountPermissions;
-(NSString *)cellularOperatorName;
-(char)hasOfflineSlots;
-(char)isSubscriptionPurchaser;
-(id)copyUserDefaultsRepresentation;
-(void)setValuesUsingStatusDictionary:(id)arg1 ;
-(char)hasOfflineSlot;
-(NSString *)description;
-(NSString *)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(void)setSubscribed:(char)arg1 ;
-(int)carrierBundlingStatus;
-(char)isSubscribed;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setCarrierBundlingStatus:(int)arg1 ;
-(char)isDiscoveryModeEligible;
-(NSDictionary *)rawResponseData;
-(NSNumber *)accountIdentifier;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(int)accountStatus;
-(char)isFamilySubscription;
-(char)hasFamily;
-(char)isFamilyOrganizer;
-(char)hasFamilyMembers;
-(char)isFreeTrialIneligible;
-(unsigned long long)latestStoreTermsVersion;
-(unsigned long long)acceptedStoreTermsVersion;
-(void)setAccountStatus:(int)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
@end

