/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSBiometrics : NSObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	SSXPCConnection* _connection;

}
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEnabled:(char)arg1 withAuthToken:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setEnabled:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setAllowed:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getIdentityMapCountWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isIdentityMapValidForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveIdentityMapForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

