/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	id _contentIdentifier;
	int _options;

}

@property (readonly) NSNumber * accountID;                          //@synthesize accountID=_accountID - In the implementation block
@property (copy) id contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (assign) int keybagOptions;                               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentIdentifier;
-(void)setContentIdentifier:(id)arg1 ;
-(int)keybagOptions;
-(void)setKeybagOptions:(int)arg1 ;
-(void)dealloc;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)accountIdentifier;
-(NSNumber *)accountID;
@end

