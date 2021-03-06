/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSXPCListenerDelegate;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) id<NSXPCListenerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)_UUID;
+(id)serviceListener;
+(id)anonymousListener;
+(void)enableTransactions;
-(id)_initShared;
-(void)invalidate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<NSXPCListenerDelegate>)delegate;
-(void)suspend;
-(void)stop;
-(id)_queue;
-(void)setOptions:(unsigned)arg1 ;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(id)serviceName;
-(void)_setQueue:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)_xpcConnection;
@end

