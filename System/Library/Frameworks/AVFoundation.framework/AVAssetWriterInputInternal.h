/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterInputHelper, NSObject, AVKeyPathDependencyManager, AVAssetWriterInputPassDescriptionResponder;

@interface AVAssetWriterInputInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterInputHelper* helper;
	NSObject*<OS_dispatch_queue> helperQueue;
	AVWeakReference* weakReferenceToAttachedAdaptor;
	AVWeakReference* weakReferenceToAssetWriter;
	AVKeyPathDependencyManager* keyPathDependencyManager;
	int numberOfAppendFailures;
	NSObject*<OS_dispatch_queue> appendFailureReadWriteQueue;
	AVAssetWriterInputPassDescriptionResponder* passDescriptionResponder;

}
@end
