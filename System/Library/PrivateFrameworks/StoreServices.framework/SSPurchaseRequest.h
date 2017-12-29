/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSMutableSet, SSPurchaseManager, NSString;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {

	char _isBackgroundRequest;
	NSArray* _purchases;
	char _shouldValidatePurchases;
	/*^block*/id _completionBlock;
	char _createsDownloads;
	NSMutableSet* _openPurchaseIdentifiers;
	/*^block*/id _purchaseBlock;
	/*^block*/id _purchaseResponseBlock;
	SSPurchaseManager* _purchaseManager;
	char _needsAuthentication;
	char _playbackRequest;
	char _createsJobs;

}

@property (assign,nonatomic) char createsDownloads;                                          //@synthesize createsDownloads=_createsDownloads - In the implementation block
@property (assign,nonatomic) char createsJobs;                                               //@synthesize createsJobs=_createsJobs - In the implementation block
@property (assign,getter=isPlaybackRequest,nonatomic) char playbackRequest;                  //@synthesize playbackRequest=_playbackRequest - In the implementation block
@property (assign,nonatomic) char shouldValidatePurchases;                                   //@synthesize shouldValidatePurchases=_shouldValidatePurchases - In the implementation block
@property (assign,nonatomic) id<SSPurchaseRequestDelegate> delegate; 
@property (readonly) NSArray * purchases; 
@property (assign,getter=isBackgroundRequest,nonatomic) char backgroundRequest;              //@synthesize isBackgroundRequest=_isBackgroundRequest - In the implementation block
@property (assign,nonatomic) char needsAuthentication;                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addPurchasesToManager;
-(void)_finishPurchasesWithResponses:(id)arg1 ;
-(void)setPlaybackRequest:(char)arg1 ;
-(id)_purchaseForUniqueIdentifier:(long long)arg1 ;
-(void)startWithPurchaseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)isBackgroundRequest;
-(void)setBackgroundRequest:(char)arg1 ;
-(char)createsDownloads;
-(char)isPlaybackRequest;
-(char)shouldValidatePurchases;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(char)start;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(char)needsAuthentication;
-(void)setNeedsAuthentication:(char)arg1 ;
-(NSArray *)purchases;
-(void)setShouldValidatePurchases:(char)arg1 ;
-(id)initWithPurchases:(id)arg1 ;
-(void)startWithPurchaseResponseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCreatesDownloads:(char)arg1 ;
-(void)setCreatesJobs:(char)arg1 ;
-(char)createsJobs;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end
