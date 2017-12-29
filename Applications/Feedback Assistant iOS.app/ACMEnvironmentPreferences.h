/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMPreferences.h>
#import <Feedback Assistant iOS/ACMEnvironmentPreferences.h>
@class NSDictionary, NSString;


@protocol ACMEnvironmentPreferences <ACMBasePreferences>
@property (retain,readonly) NSDictionary * environmentSpecification; 
@property (retain,readonly) NSString * realm; 
@property (retain,readonly) id<ACMPrincipalPreferences> principalPreferences; 
@required
+(id)supportedRealms;
+(id)environmentPreferencesWithRealm:(id)arg1;
-(NSString *)realm;
-(id)provisionedDeviceIdentifier;
-(id)myAppleIDURL;
-(id)iForgotURL;
-(id)authenticateURLString;
-(id)principalPreferencesWithUserName:(id)arg1;
-(id)initWithRealm:(id)arg1;
-(id<ACMPrincipalPreferences>)principalPreferences;
-(id)realmName;
-(id)realmShortName;
-(id)verifyRecoveryKeyURLString;
-(id)defaultPublicKeyString;
-(id)publicKeyCertificateName;
-(void)setPublicKeyCertificateName:(id)arg1;
-(id)environmentSpecificationForRealm:(id)arg1;
-(NSDictionary *)environmentSpecification;
-(id)verifyTicketURLString;
-(id)getTrustedDevicesURLString;
-(id)generateAndSendSecCodeURLString;
-(id)verifySecurityCodeURLString;
-(id)serverHosts;
-(id)serverAttemptsDelays;
-(id)publicKeyVersion;
-(void)setPublicKeyVersion:(id)arg1;

@end


@protocol ACMPrincipalPreferences;
@class NSDictionary, NSString;

@interface ACMEnvironmentPreferences : ACMPreferences <ACMEnvironmentPreferences> {

	NSDictionary* _environmentSpecification;
	id<ACMPrincipalPreferences> _principalPreferences;

}

@property (retain) NSDictionary * environmentSpecification;                       //@synthesize environmentSpecification=_environmentSpecification - In the implementation block
@property (retain) id<ACMPrincipalPreferences> principalPreferences;              //@synthesize principalPreferences=_principalPreferences - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (retain,readonly) NSString * realm; 
+(id)supportedRealms;
+(id)environmentPreferencesWithRealm:(id)arg1 ;
+(id)environmentSpecifications;
+(char)isSupportedRealm:(id)arg1 ;
-(void)dealloc;
-(NSString *)realm;
-(id)provisionedDeviceIdentifier;
-(id)myAppleIDURL;
-(id)iForgotURL;
-(id)authenticateURLString;
-(id)principalPreferencesWithUserName:(id)arg1 ;
-(id)initWithRealm:(id)arg1 ;
-(void)setEnvironmentSpecification:(NSDictionary *)arg1 ;
-(void)setPrincipalPreferences:(id<ACMPrincipalPreferences>)arg1 ;
-(id<ACMPrincipalPreferences>)principalPreferences;
-(id)createPrincipalPreferencesWithUserName:(id)arg1 ;
-(id)realmName;
-(id)realmShortName;
-(id)verifyRecoveryKeyURLString;
-(id)defaultPublicKeyString;
-(id)publicKeyCertificateName;
-(void)setPublicKeyCertificateName:(id)arg1 ;
-(id)environmentSpecificationForRealm:(id)arg1 ;
-(NSDictionary *)environmentSpecification;
-(id)verifyTicketURLString;
-(id)getTrustedDevicesURLString;
-(id)generateAndSendSecCodeURLString;
-(id)verifySecurityCodeURLString;
-(id)serverHosts;
-(id)serverAttemptsDelays;
-(id)publicKeyVersion;
-(void)setPublicKeyVersion:(id)arg1 ;
@end

