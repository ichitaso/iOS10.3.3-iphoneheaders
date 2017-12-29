/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CDService.h>

@protocol OS_dispatch_source;
@class NSXPCConnection, NSObject;

@interface CDXPCService : CDService {

	char _isConnected;
	char _isInterrupted;
	char _isInvalidated;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_source> _watchdog_timer;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) char isConnected;                                          //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) char isInterrupted;                                        //@synthesize isInterrupted=_isInterrupted - In the implementation block
@property (assign,nonatomic) char isInvalidated;                                        //@synthesize isInvalidated=_isInvalidated - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> watchdog_timer;              //@synthesize watchdog_timer=_watchdog_timer - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(void)resumeConnection;
-(void)dealloc;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)setInvalidationBlock:(/*^block*/id)arg1 ;
-(void)connectionWasInvalidated;
-(NSObject*<OS_dispatch_source>)watchdog_timer;
-(void)setWatchdog_timer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)obtainXPCConnection:(/*^block*/id)arg1 ;
-(void)setInterruptionBlock:(/*^block*/id)arg1 ;
-(void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)_serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)_serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)_serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)doWithProxy:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)resetConnectionHandlers;
-(void)setIsInterrupted:(char)arg1 ;
-(void)setIsInvalidated:(char)arg1 ;
-(void)setIsConnected:(char)arg1 ;
-(char)isConnected;
-(NSXPCConnection *)xpcConnection;
-(void)invalidateConnection;
-(void)connectionWasInterrupted;
-(char)isInterrupted;
-(char)isInvalidated;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end
