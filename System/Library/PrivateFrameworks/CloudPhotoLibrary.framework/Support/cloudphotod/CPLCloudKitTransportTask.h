/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLEngineTransportTask.h>

@protocol OS_dispatch_queue;
@class CPLCloudKitTransport, NSObject, CPLCloudKitTransportCancelState, NSString;

@interface CPLCloudKitTransportTask : NSObject <CPLEngineTransportTask> {

	char foreground;
	CPLCloudKitTransport* _transport;
	NSObject*<OS_dispatch_queue> _queue;
	CPLCloudKitTransportCancelState* _cancelState;

}

@property (nonatomic,retain) CPLCloudKitTransport * transport;                           //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CPLCloudKitTransportCancelState * cancelState;              //@synthesize cancelState=_cancelState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char foreground; 
-(void)setCancelState:(CPLCloudKitTransportCancelState *)arg1 ;
-(id)init;
-(void)cancel;
-(void)run;
-(CPLCloudKitTransportCancelState *)cancelState;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CPLCloudKitTransport *)transport;
-(void)setTransport:(CPLCloudKitTransport *)arg1 ;
-(char)foreground;
-(void)setForeground:(char)arg1 ;
@end

