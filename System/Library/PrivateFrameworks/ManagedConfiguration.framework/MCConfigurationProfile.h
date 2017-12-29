/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCProfile.h>

@class NSArray, MCProfileServiceProfile, NSNumber;

@interface MCConfigurationProfile : MCProfile {

	NSArray* _payloads;
	NSArray* _managedPayloads;
	char _isCloudProfile;
	char _isCloudLocked;
	char _isMDMProfile;
	MCProfileServiceProfile* _OTAProfile;
	NSNumber* _isCloudProfileNum;
	NSNumber* _isCloudLockedNum;

}

@property (nonatomic,retain) NSNumber * isCloudProfileNum;                      //@synthesize isCloudProfileNum=_isCloudProfileNum - In the implementation block
@property (nonatomic,retain) NSNumber * isCloudLockedNum;                       //@synthesize isCloudLockedNum=_isCloudLockedNum - In the implementation block
@property (nonatomic,retain) MCProfileServiceProfile * OTAProfile;              //@synthesize OTAProfile=_OTAProfile - In the implementation block
@property (assign,nonatomic) char isCloudProfile;                               //@synthesize isCloudProfile=_isCloudProfile - In the implementation block
@property (assign,nonatomic) char isCloudLocked;                                //@synthesize isCloudLocked=_isCloudLocked - In the implementation block
@property (assign,nonatomic) char isMDMProfile;                                 //@synthesize isMDMProfile=_isMDMProfile - In the implementation block
-(id)stubDictionary;
-(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)_sortPayloads:(id)arg1 ;
-(id)payloadWithUUID:(id)arg1 ;
-(SecCertificateRef)copyCertificateFromPayloadWithUUID:(id)arg1 ;
-(id)_subjectSummaryFromCertificate:(SecCertificateRef)arg1 ;
-(id)initWithDictionary:(id)arg1 allowEmptyPayload:(char)arg2 outError:(id*)arg3 ;
-(void)_sortPayloads;
-(id)installationWarningsIncludeUnsignedProfileWarning:(char)arg1 ;
-(NSNumber *)isCloudProfileNum;
-(NSNumber *)isCloudLockedNum;
-(id)_localizedPayloadSummaryByType:(id)arg1 ;
-(id)managedPayloads;
-(id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1 ;
-(id)subjectSummaryFromCertificateWithPersistentID:(id)arg1 ;
-(char)isManagedByProfileService;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)earliestCertificateExpiryDate;
-(MCProfileServiceProfile *)OTAProfile;
-(void)setOTAProfile:(MCProfileServiceProfile *)arg1 ;
-(char)isCloudProfile;
-(void)setIsCloudProfile:(char)arg1 ;
-(char)isCloudLocked;
-(void)setIsCloudLocked:(char)arg1 ;
-(char)isMDMProfile;
-(void)setIsMDMProfile:(char)arg1 ;
-(void)setIsCloudProfileNum:(NSNumber *)arg1 ;
-(void)setIsCloudLockedNum:(NSNumber *)arg1 ;
-(id)description;
-(id)payloads;
@end

