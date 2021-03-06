/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {

	char _requiresAuthentication;
	NSString* _text;
	char _userAccepted;
	long long _versionID;

}

@property (assign,getter=isUserAccepted,nonatomic) char userAccepted;              //@synthesize userAccepted=_userAccepted - In the implementation block
@property (assign,nonatomic) NSString * currentText;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long currentVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) char requiresAuthentication;                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
-(void)setCurrentVersionIdentifier:(long long)arg1 ;
-(void)setUserAccepted:(char)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
-(char)requiresAuthentication;
-(id)initWithResponseData:(id)arg1 error:(id*)arg2 ;
-(char)isUserAccepted;
-(long long)currentVersionIdentifier;
@end

