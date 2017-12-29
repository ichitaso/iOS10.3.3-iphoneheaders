/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSBaseXPCServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface BSActionListener : BSBaseXPCServer {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _queue_portToContextMap;

}
-(void)_queue_cleanupContext:(SCD_Struct_BS7*)arg1 withResponse:(id)arg2 ;
-(SCD_Struct_BS8)listenForResponseWithHandler:(/*^block*/id)arg1 timeout:(unsigned long long)arg2 ;
-(void)clearListenerForTokens:(SCD_Struct_BS8*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
@end

