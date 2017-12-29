/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>
#import <libobjc.A.dylib/FBSSystemServiceClient.h>

@protocol FBSSystemServiceClient <NSObject>
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> calloutQueue; 
@required
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(char)arg4 timeout:(double)arg5;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)sendMessage:(id)arg1 withType:(long long)arg2;

@end


@protocol FBSSystemServiceClientDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface FBSSystemServiceClient : BSBaseXPCClient <FBSSystemServiceClient> {

	id<FBSSystemServiceClientDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	char _connectionDenied;
	char _invalidated;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id<FBSSystemServiceClientDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_clientWasInvalidated;
-(void)queue_handleError:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)queue_connectionWasCreated;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(char)arg4 timeout:(double)arg5 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 endpoint:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<FBSSystemServiceClientDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSSystemServiceClientDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)sendMessage:(id)arg1 withType:(long long)arg2 ;
@end

