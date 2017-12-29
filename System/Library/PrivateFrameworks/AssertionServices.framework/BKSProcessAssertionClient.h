/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface BKSProcessAssertionClient : BSBaseXPCClient {

	NSMapTable* _assertionHandlersByIdentifier;
	NSObject*<OS_dispatch_queue> _assertionQueue;

}
+(id)sharedInstance;
+(id)assertionQueue;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasDestroyed;
-(double)backgroundTimeRemaining:(int)arg1 ;
-(void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2 ;
-(void)sendDestroyAssertion:(id)arg1 ;
-(void)unregisterClientHandlerForAssertionIdentifier:(id)arg1 ;
-(char)sendCreateAssertion:(id)arg1 ;
-(void)sendUpdateAssertion:(id)arg1 ;
-(void)_assertionQueue_sendEvent:(id)arg1 forMessageType:(unsigned)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_assertionQueue_unregisterHandlerWithIdentifier:(id)arg1 andNotify:(char)arg2 ;
-(void)_connectionQueue_handleDestroy:(id)arg1 ;
-(void)_connectionQueue_invalidateAllAssertions;
-(void)dealloc;
-(id)description;
@end

