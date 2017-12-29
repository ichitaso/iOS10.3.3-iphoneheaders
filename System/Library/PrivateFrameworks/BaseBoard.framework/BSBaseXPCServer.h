/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableSet, NSString;

@interface BSBaseXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableSet* _clients;
	char _connectionResumed;
	char _usesAnonymousConnection;
	NSString* _serviceName;
	int _notifyToken;

}

@property (assign,getter=usesAnonymousConnection,nonatomic) char usesAnonymousConnection;              //@synthesize usesAnonymousConnection=_usesAnonymousConnection - In the implementation block
-(void)registerServerSuspended;
-(void)_addClientConnection:(id)arg1 ;
-(id)_notifyTokenName;
-(char)queue_shouldAcceptNewConnection:(id)arg1 ;
-(id)queue_newClientForConnection:(id)arg1 ;
-(void)_queue_removeClientConnection:(id)arg1 ;
-(id)_queue_clientForConnection:(id)arg1 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(id)_clients;
-(id)_copyEndpoint;
-(char)usesAnonymousConnection;
-(void)setUsesAnonymousConnection:(char)arg1 ;
-(void)dealloc;
-(void)run;
-(void)_invalidate;
-(id)initWithServiceName:(id)arg1 ;
-(id)_connection;
-(id)queue;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)queue_clientAdded:(id)arg1 ;
-(void)queue_clientRemoved:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)resumeServer;
@end

