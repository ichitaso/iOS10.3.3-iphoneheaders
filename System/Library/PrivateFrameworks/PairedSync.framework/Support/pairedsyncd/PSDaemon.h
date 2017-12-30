/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <pairedsyncd/PSDSyncInitiatorDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSXPCListener, NSObject, NSArray, PSDWatchSyncStateObserver, PSDSyncRestrictionNotifier, NSString;

@interface PSDaemon : NSObject <NSXPCListenerDelegate, PSDSyncInitiatorDelegate> {

	NSXPCListener* _toolListener;
	NSXPCListener* _progressListener;
	NSXPCListener* _clientListener;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSArray* _loggers;
	PSDWatchSyncStateObserver* _watchSyncStateObserver;
	PSDSyncRestrictionNotifier* _syncRestrictionNotifier;
	NSObject*<OS_os_transaction> _syncingStayAliveTransaction;
	char _shouldRelaunch;

}

@property (assign,nonatomic) char shouldRelaunch;                   //@synthesize shouldRelaunch=_shouldRelaunch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)syncInitiatorStateChangedTo:(unsigned)arg1 ;
-(void)setShouldRelaunch:(char)arg1 ;
-(void)sigTermHandler;
-(void)addLoggersIfNeeded;
-(char)shouldAcceptNewToolConnection:(id)arg1 ;
-(char)shouldAcceptNewProgressConnection:(id)arg1 ;
-(char)shouldAcceptNewClientConnection:(id)arg1 ;
-(char)shouldRelaunch;
-(id)init;
-(void)run;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_registerForNotifications;
@end
