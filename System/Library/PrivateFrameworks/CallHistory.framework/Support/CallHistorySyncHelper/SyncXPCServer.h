/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:24 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>
#import <libobjc.A.dylib/SyncProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, TransactionLog, AutoSync, SyncEngine, CloudKit, CallHistoryDBClientHandle, CHIDSServiceDelegate, MergeTransactions, CHPushConnectionDelegate, CHInteraction, NSString;

@interface SyncXPCServer : CHLogger <SyncProtocol, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	TransactionLog* _txLog;
	AutoSync* _autoSync;
	SyncEngine* _syncEngine;
	CloudKit* _cloudKit;
	CallHistoryDBClientHandle* _database;
	CHIDSServiceDelegate* _idsService;
	MergeTransactions* _merger;
	CHPushConnectionDelegate* _pushDelegate;
	CHInteraction* _interactionManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupQueryableMetrics;
-(void)handleClientDisconnect:(id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resetCallTimers:(/*^block*/id)arg1 ;
-(void)appendTransactions:(id)arg1 ;
-(void)clearSyncToken:(/*^block*/id)arg1 ;
-(void)migrateCallDB:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)bootUp:(/*^block*/id)arg1 ;
-(void)moveCallsFromTempDatabase;
-(void)sync:(/*^block*/id)arg1 ;
@end

