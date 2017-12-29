/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSMapTable;

@interface IMUbiquityQuotaFetcher : NSObject {

	NSOperationQueue* _quotaFetchingOperationsQueue;
	NSMapTable* _operationToWatchdogTimerMap;
	unsigned long long _lastCachedFreeBytes;

}

@property (assign,nonatomic) unsigned long long lastCachedFreeBytes;                       //@synthesize lastCachedFreeBytes=_lastCachedFreeBytes - In the implementation block
@property (nonatomic,retain) NSOperationQueue * quotaFetchingOperationsQueue;              //@synthesize quotaFetchingOperationsQueue=_quotaFetchingOperationsQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * operationToWatchdogTimerMap;                     //@synthesize operationToWatchdogTimerMap=_operationToWatchdogTimerMap - In the implementation block
@property (nonatomic,readonly) double cloudServerResponseTimeout; 
-(double)cloudServerResponseTimeout;
-(void)fetchUserQuotaWithTimeOut:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)lastCachedFreeBytes;
-(NSOperationQueue *)quotaFetchingOperationsQueue;
-(NSMapTable *)operationToWatchdogTimerMap;
-(void)setLastCachedFreeBytes:(unsigned long long)arg1 ;
-(void)fetchUserQuotaWithCompletion:(/*^block*/id)arg1 ;
-(void)setQuotaFetchingOperationsQueue:(NSOperationQueue *)arg1 ;
-(void)setOperationToWatchdogTimerMap:(NSMapTable *)arg1 ;
-(id)init;
@end

