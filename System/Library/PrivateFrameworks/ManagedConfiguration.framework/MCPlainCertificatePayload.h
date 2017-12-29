/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {

	NSString* _certificateFileName;
	NSData* _certificateData;
	NSString* _password;
	int _dataEncoding;

}

@property (nonatomic,retain,readonly) NSString * certificateFileName;              //@synthesize certificateFileName=_certificateFileName - In the implementation block
@property (nonatomic,retain,readonly) NSData * certificateData;                    //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,readonly) int dataEncoding;                                   //@synthesize dataEncoding=_dataEncoding - In the implementation block
@property (nonatomic,retain,readonly) NSString * password;                         //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(SecCertificateRef)copyCertificate;
-(id)installationWarnings;
-(char)isSigned;
-(id)persistentResourceID;
-(NSString *)certificateFileName;
-(int)dataEncoding;
-(NSData *)certificateData;
-(id)description;
-(NSString *)password;
-(char)isIdentity;
@end

