/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSDictionary, NSObject;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSDictionary* videoSettings;
	SCD_Struct_AV2 deprecatedMinFrameDuration;
	char alwaysDiscardsLateVideoFrames;
	NSObject*<OS_dispatch_queue> bufferQueue;
	OpaqueFigSimpleMutexRef remoteQueueMutex;
	remoteQueueReceiverOpaqueRef remoteReceiverQueue;

}
-(id)init;
-(void)dealloc;
@end

