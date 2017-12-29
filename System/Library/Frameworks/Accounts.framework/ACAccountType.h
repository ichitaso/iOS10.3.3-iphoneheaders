/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, ACAccountStore, NSSet;

@interface ACAccountType : NSObject <NSSecureCoding> {

	NSString* _accountTypeDescription;
	NSString* _identifier;
	NSString* _credentialType;
	NSURL* _objectID;
	int _visibility;
	NSString* _credentialProtectionPolicy;
	ACAccountStore* _accountStore;
	int _supportsAuthentication;
	char _supportsMultipleAccounts;
	NSSet* _supportedDataclasses;
	NSSet* _syncableDataclasses;
	NSSet* _accessKeys;
	char _encryptAccountProperties;
	NSString* _owningBundleID;

}

@property (nonatomic,retain) NSURL * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) int visibility; 
@property (nonatomic,copy) id credentialProtectionPolicy; 
@property (nonatomic,retain) NSString * credentialType;                         //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic,__weak) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) int supportsAuthentication;                        //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (assign,nonatomic) char supportsMultipleAccounts;                     //@synthesize supportsMultipleAccounts=_supportsMultipleAccounts - In the implementation block
@property (nonatomic,retain) NSString * owningBundleID;                         //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (nonatomic,readonly) NSSet * supportedDataclasses;                    //@synthesize supportedDataclasses=_supportedDataclasses - In the implementation block
@property (nonatomic,readonly) NSSet * syncableDataclasses;                     //@synthesize syncableDataclasses=_syncableDataclasses - In the implementation block
@property (nonatomic,readonly) NSSet * accessKeys;                              //@synthesize accessKeys=_accessKeys - In the implementation block
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) char encryptAccountProperties;                   //@synthesize encryptAccountProperties=_encryptAccountProperties - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeDescription;               //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char accessGranted; 
+(char)supportsSecureCoding;
+(id)allIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)fullDescription;
-(void)setVisibility:(int)arg1 ;
-(int)supportsAuthentication;
-(void)setSupportsAuthentication:(int)arg1 ;
-(id)credentialProtectionPolicy;
-(void)setSupportsMultipleAccounts:(char)arg1 ;
-(void)setCredentialProtectionPolicy:(id)arg1 ;
-(NSSet *)syncableDataclasses;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2 ;
-(char)supportsMultipleAccounts;
-(char)encryptAccountProperties;
-(NSSet *)accessKeys;
-(id)initWithManagedAccountType:(id)arg1 ;
-(NSString *)owningBundleID;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSSet *)supportedDataclasses;
-(ACAccountStore *)accountStore;
-(char)accessGranted;
-(NSString *)accountTypeDescription;
-(int)visibility;
-(NSURL *)objectID;
-(id)initWithIdentifier:(id)arg1 description:(id)arg2 ;
-(void)setObjectID:(NSURL *)arg1 ;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
@end

