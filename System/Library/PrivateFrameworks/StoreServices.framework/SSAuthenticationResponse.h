/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSString, NSNumber;

@interface SSAuthenticationResponse : NSObject {

	NSDictionary* _responseDictionary;
	int _urlBagType;
	NSHTTPURLResponse* _urlResponse;

}

@property (assign) int URLBagType;                                             //@synthesize urlBagType=_urlBagType - In the implementation block
@property (readonly) NSDictionary * responseDictionary;                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (readonly) NSString * accountName; 
@property (readonly) int accountKind; 
@property (readonly) NSNumber * accountUniqueIdentifier; 
@property (readonly) int availableServiceTypes; 
@property (readonly) NSString * creditsString; 
@property (readonly) int enabledServiceTypes; 
@property (getter=isManagedStudent,readonly) char managedStudent; 
@property (getter=isNewCustomer,readonly) char newCustomer; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * token; 
@property (readonly) NSNumber * failureType; 
@property (readonly) int responseType; 
@property (readonly) NSString * userMessage; 
-(char)isNewCustomer;
-(int)availableServiceTypes;
-(id)initWithURLResponse:(id)arg1 dictionary:(id)arg2 ;
-(id)newAccount;
-(NSNumber *)failureType;
-(NSNumber *)accountUniqueIdentifier;
-(char)isManagedStudent;
-(int)_responseTypeForFailureType:(int)arg1 ;
-(int)_responseTypeForErrorNumber:(int)arg1 ;
-(int)_responseTypeForStatusValue:(int)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(int)responseType;
-(NSString *)userMessage;
-(int)accountKind;
-(int)enabledServiceTypes;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(void)setURLBagType:(int)arg1 ;
-(int)URLBagType;
-(NSDictionary *)responseDictionary;
-(NSString *)accountName;
-(NSHTTPURLResponse *)URLResponse;
-(NSString *)storeFrontIdentifier;
-(NSString *)creditsString;
@end

