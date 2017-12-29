/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSNumber;

@interface MCCalDAVAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	NSString* _principalURL;
	char _useSSL;
	int _port;
	NSString* _accountPersistentUUID;
	NSNumber* _useSSLNum;
	NSNumber* _portNum;

}

@property (nonatomic,readonly) NSNumber * useSSLNum;                              //@synthesize useSSLNum=_useSSLNum - In the implementation block
@property (nonatomic,readonly) NSNumber * portNum;                                //@synthesize portNum=_portNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                        //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * username;                                   //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                   //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSString * principalURL;                    //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,readonly) char useSSL;                                       //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) int port;                                          //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                      //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(char)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSNumber *)useSSLNum;
-(NSString *)principalURL;
-(NSNumber *)portNum;
-(id)description;
-(id)title;
-(int)port;
-(NSString *)hostname;
-(char)useSSL;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

