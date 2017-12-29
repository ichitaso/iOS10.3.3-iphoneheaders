/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownloadSession.h>

@class NSString, NSNumber;

@interface SSDownloadHandlerSession : SSDownloadSession {

	NSString* _downloadPhase;
	NSNumber* _duetTimeoutInterval;

}

@property (readonly) NSString * downloadPhase; 
@property (readonly) NSNumber * duetTimeoutInterval;              //@synthesize duetTimeoutInterval=_duetTimeoutInterval - In the implementation block
@property (assign) char blocksOtherDownloads; 
@property (assign) char canBePaused; 
@property (assign) char needsPowerAssertion; 
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(void)_finishWithType:(int)arg1 error:(id)arg2 ;
-(void)_setBool:(char)arg1 forSessionProperty:(const char*)arg2 ;
-(char)blocksOtherDownloads;
-(char)canBePaused;
-(void)disavowSessionWithError:(id)arg1 ;
-(char)needsPowerAssertion;
-(void)setBlocksOtherDownloads:(char)arg1 ;
-(void)setNeedsPowerAssertion:(char)arg1 ;
-(NSNumber *)duetTimeoutInterval;
-(void)dealloc;
-(void)setPercentComplete:(float)arg1 ;
-(void)releaseSessionControl;
-(void)setCanBePaused:(char)arg1 ;
-(void)setStatusDescription:(id)arg1 ;
-(void)finishSessionWithSuccess:(char)arg1 error:(id)arg2 ;
-(NSString *)downloadPhase;
@end

