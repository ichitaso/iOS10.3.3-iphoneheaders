/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/XPCServices/FMFMapXPCService.xpc/FMFMapXPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFMapXPCService/FMFMapXPCService-Structs.h>
#import <FMFMapXPCService/FMFMapXPCInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, FMDispatchTimer, NSString;

@interface FMFMapXPCServer : NSObject <FMFMapXPCInterface, NSXPCListenerDelegate> {

	NSOperationQueue* _mapRenderingQueue;
	NSObject*<OS_dispatch_queue> _snapshotterQueue;
	FMDispatchTimer* _idleTimer;

}

@property (nonatomic,retain) NSOperationQueue * mapRenderingQueue;                       //@synthesize mapRenderingQueue=_mapRenderingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> snapshotterQueue;              //@synthesize snapshotterQueue=_snapshotterQueue - In the implementation block
@property (nonatomic,retain) FMDispatchTimer * idleTimer;                                //@synthesize idleTimer=_idleTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMapRenderingQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)mapRenderingQueue;
-(void)setSnapshotterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setupIdleTimer;
-(void)mapSnapshotForRequest:(id)arg1 shiftedCoordinate:(CLLocationCoordinate2D)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftedLocationForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)mapRenderingTimeout;
-(NSObject*<OS_dispatch_queue>)snapshotterQueue;
-(id)init;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)locationShifter;
-(oneway void)gridImageForWidth:(double)arg1 height:(double)arg2 andCompletion:(/*^block*/id)arg3 ;
-(oneway void)noLocationImageForWidth:(double)arg1 height:(double)arg2 andCompletion:(/*^block*/id)arg3 ;
-(oneway void)mapImageForRequest:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(oneway void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCompletion:(/*^block*/id)arg6 ;
-(oneway void)gridImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(oneway void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(oneway void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(/*^block*/id)arg5 ;
-(CGSize)snapshotSize;
-(void)clearIdleTimer;
-(FMDispatchTimer *)idleTimer;
-(void)setIdleTimer:(FMDispatchTimer *)arg1 ;
@end
