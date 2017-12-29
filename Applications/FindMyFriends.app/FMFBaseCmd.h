/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMJSONCommand.h>

@protocol NSCopying;
@class NSString, NSDictionary;

@interface FMFBaseCmd : FMJSONCommand {

	unsigned modelOldRetryCount;
	NSString* authScheme;
	char wasErrorHandled;
	char _useBlankDataContext;
	id<NSCopying> transactionId;
	NSDictionary* currentLocation;
	int commandStatus;
	int _fmfServerError;

}

@property (nonatomic,copy) id<NSCopying> transactionId; 
@property (assign,nonatomic) int commandStatus; 
@property (nonatomic,copy) NSDictionary * currentLocation; 
@property (nonatomic,readonly) NSString * pathSuffix; 
@property (nonatomic,readonly) char responseContainsFullModelUpdate; 
@property (nonatomic,readonly) char ignoreResponseErrors; 
@property (nonatomic,readonly) char ignoreAllResponseErrors; 
@property (nonatomic,readonly) char allowsEmptyResponse; 
@property (nonatomic,readonly) char isSuccess; 
@property (assign,nonatomic) int fmfServerError;                                  //@synthesize fmfServerError=_fmfServerError - In the implementation block
@property (assign,nonatomic) char wasErrorHandled; 
@property (assign,nonatomic) char useBlankDataContext;                            //@synthesize useBlankDataContext=_useBlankDataContext - In the implementation block
@property (readonly) NSString * willSucceedNotification; 
@property (readonly) NSString * didSucceedNotification; 
@property (readonly) NSString * willFailNotification; 
@property (readonly) NSString * didFailNotification; 
@property (readonly) NSString * customCommandNotification; 
+(id)nextTransactionId;
-(char)responseContainsFullModelUpdate;
-(void)processCommandResponse:(id)arg1 ;
-(char)allowsEmptyResponse;
-(void)setFmfServerError:(int)arg1 ;
-(NSString *)willSucceedNotification;
-(NSString *)willFailNotification;
-(char)isFireAndForget;
-(NSString *)customCommandNotification;
-(char)wasErrorHandled;
-(NSString *)didSucceedNotification;
-(char)shouldClearDataContextAndRefreshOnFailure;
-(NSString *)didFailNotification;
-(int)fmfServerError;
-(char)ignoreAllResponseErrors;
-(char)ignoreResponseErrors;
-(void)setWasErrorHandled:(char)arg1 ;
-(NSString *)pathSuffix;
-(void)setupAuthentication;
-(char)useBlankDataContext;
-(void)setUseBlankDataContext:(char)arg1 ;
-(id)init;
-(id)path;
-(id)method;
-(id)result;
-(NSDictionary *)currentLocation;
-(void)setCurrentLocation:(NSDictionary *)arg1 ;
-(void)setTransactionId:(id<NSCopying>)arg1 ;
-(id)clientContext;
-(char)isTransactionCompleteWithError:(id)arg1 ;
-(id)jsonBodyDictionary;
-(void)setCommandStatus:(int)arg1 ;
-(int)commandStatus;
-(char)isSuccess;
-(id)headers;
-(id<NSCopying>)transactionId;
@end

