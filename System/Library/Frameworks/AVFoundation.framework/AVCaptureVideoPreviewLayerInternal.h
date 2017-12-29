/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureSession, AVCaptureConnection, CALayer, AVWeakReference;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {

	NSString* sinkID;
	AVCaptureSession* session;
	AVCaptureConnection* connection;
	OpaqueFigCaptureSessionRef figCaptureSession;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	CGSize previewSize;
	float previewRotationDegrees;
	NSString* gravity;
	char disableActions;
	AVWeakReference* weakReference;
	int orientation;
	char automaticallyAdjustsMirroring;
	char mirrored;
	char isPresentationLayer;
	char visible;
	char isPaused;
	char chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	float rollAdjustment;

}
@end

