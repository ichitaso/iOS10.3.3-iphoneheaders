/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SBSRemoteAlertClient : FBSSystemServiceFacilityClient {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _handleObserverQueue;
	NSMutableDictionary* _portToHandleMap;
	NSMutableDictionary* _portToDeathWatcherMap;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handleObserverQueue;              //@synthesize handleObserverQueue=_handleObserverQueue - In the implementation block
+(id)sharedInstance;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)_queue_addHandleForToken:(id)arg1 ;
-(void)_queue_removeHandleForTokenStore:(id)arg1 withErrorCode:(int)arg2 underlyingError:(id)arg3 ;
-(void)queue_lookupHandlesForRemoteAlertWithDefinition:(id)arg1 creatingIfNone:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)queue_newHandleForRemoteAlertWithDefinition:(id)arg1 context:(id)arg2 ;
-(void)queue_activateRemoteAlertForHandle:(id)arg1 withContext:(id)arg2 ;
-(void)queue_invalidateRemoteAlertForHandle:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handleObserverQueue;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
@end

