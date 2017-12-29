/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	NSData* _actionData;
	NSString* _actionName;
	char _allowsBootstrapCellularData;
	int _protocolVersion;
	NSString* _userAgent;
	char _waitsForPurchaseOperations;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSData * actionData; 
@property (copy) NSString * actionName; 
@property (assign) char allowsBootstrapCellularData; 
@property (assign) int protocolVersion; 
@property (copy) NSString * userAgent; 
@property (assign) char waitsForPurchaseOperations; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURLResponse:(id)arg1 ;
-(char)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(char)arg1 ;
-(NSData *)actionData;
-(void)setActionData:(NSData *)arg1 ;
-(void)setWaitsForPurchaseOperations:(char)arg1 ;
-(char)waitsForPurchaseOperations;
-(void)startWithDetailedCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setActionName:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setProtocolVersion:(int)arg1 ;
-(int)protocolVersion;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)actionName;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
@end

