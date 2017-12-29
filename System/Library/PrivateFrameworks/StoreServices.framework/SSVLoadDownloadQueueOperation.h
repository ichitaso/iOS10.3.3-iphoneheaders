/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, SSURLRequestProperties, NSLock;

@interface SSVLoadDownloadQueueOperation : SSVComplexOperation {

	NSNumber* _accountIdentifier;
	NSMutableOrderedSet* _downloads;
	char _needsAuthentication;
	NSMutableArray* _rangesToLoad;
	int _reason;
	NSString* _requestIdentifier;
	SSURLRequestProperties* _requestProperties;
	NSString* _mdSyncState;
	NSLock* _lock;
	NSString* _powerAssertionIdentifier;
	NSString* _storeCorrelationID;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (retain) NSNumber * accountIdentifier; 
@property (assign) char needsAuthentication; 
@property (assign) int reason; 
@property (copy) NSString * requestIdentifier; 
@property (readonly) NSMutableOrderedSet * downloads; 
@property (retain) NSString * powerAssertionIdentifier;                       //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * storeCorrelationID;                   //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
+(id)newLoadAutomaticDownloadQueueOperation;
-(NSString *)storeCorrelationID;
-(id)_account;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
-(id)resolveBagURLForKey:(id)arg1 bagContext:(id)arg2 error:(id*)arg3 ;
-(char)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 url:(id)arg3 ;
-(id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 url:(id)arg3 ;
-(void)importKeybagSync:(id)arg1 ;
-(void)addGUIDToBody:(id)arg1 ;
-(void)addKeybagSyncToBody:(id)arg1 ;
-(char)featureEnabledForBagKey:(id)arg1 bagContext:(id)arg2 error:(id*)arg3 ;
-(id)gzipData:(id)arg1 ;
-(void)setDownloadsMetadata:(id)arg1 ;
-(NSString *)powerAssertionIdentifier;
-(id)init;
-(void)lock;
-(void)unlock;
-(int)reason;
-(void)main;
-(char)needsAuthentication;
-(void)setNeedsAuthentication:(char)arg1 ;
-(SSURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(NSString *)requestIdentifier;
-(NSMutableOrderedSet *)downloads;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

