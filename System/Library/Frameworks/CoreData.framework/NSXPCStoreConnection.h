/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSXPCStore, NSXPCConnection, NSObject;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)initForStore:(id)arg1 withOptions:(id)arg2 ;
-(id)sendMessage:(id)arg1 fromContext:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(id)createConnectionWithOptions:(id)arg1 ;
-(void)dealloc;
-(void)disconnect;
@end

