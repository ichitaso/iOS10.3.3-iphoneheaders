/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSURLRequestProperties, SSAuthenticationContext, SSVURLDataConsumer, NSURL, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSURLBag, SSVURLBagInterpreter, NSURLRequest, NSString;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {

	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	SSVURLDataConsumer* _dataConsumer;
	NSURL* _destinationFileURL;
	char _runsInProcess;
	SSVFairPlaySAPSession* _sapSession;
	SSVSAPSignaturePolicy* _sapSignaturePolicy;
	char _sendsResponseForHTTPFailures;
	char _shouldMescalSign;
	SSURLBag* _urlBag;
	SSVURLBagInterpreter* _urlBagInterpreter;

}

@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (assign) char runsInProcess; 
@property (assign) char sendsResponseForHTTPFailures; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy; 
@property (assign,nonatomic) id<SSURLConnectionRequestDelegate> delegate; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) SSURLRequestProperties * requestProperties; 
@property (copy) NSURL * destinationFileURL; 
@property (assign) char shouldMescalSign; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(char)_canRunInProcess;
-(char)runsInProcess;
-(NSURL *)destinationFileURL;
-(char)sendsResponseForHTTPFailures;
-(char)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(char)arg1 ;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(void)setRunsInProcess:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)start;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(SSURLRequestProperties *)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSURLRequest *)URLRequest;
-(SSVURLDataConsumer *)dataConsumer;
-(void)configureWithURLBag:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setShouldMescalSign:(char)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
@end
