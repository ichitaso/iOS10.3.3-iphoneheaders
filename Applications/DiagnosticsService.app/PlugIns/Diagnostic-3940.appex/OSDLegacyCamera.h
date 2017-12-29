/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3940.appex/Diagnostic-3940
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, DACameraComponentDelegate;
#import <Diagnostic-3940/Diagnostic-3940-Structs.h>
@class NSObject, CALayer;

@interface OSDLegacyCamera : NSObject {

	BOOL _isPaused;
	CFArrayRef _captureStreamsArray;
	OpaqueFigCaptureDeviceRef _captureDevice;
	OpaqueFigCaptureStream* _captureStreams;
	opaqueCMBufferQueueRef _previewBufferQueue;
	opaqueCMBufferQueueRef _stillImageBufferQueue;
	opaqueCMBufferQueueTriggerTokenRef _previewTriggerToken;
	opaqueCMBufferQueueTriggerTokenRef _stillImageTriggerToken;
	CAImageQueueRef _imageQueueForLayer;
	NSObject*<OS_dispatch_queue> _cameraProcessingQueue;
	NSObject*<OS_dispatch_semaphore> _streamStartSemaphore;
	CFStringRef _desiredOpticalImageStabilizerMode;
	BOOL _enableMotionDebugMetadata;
	BOOL _capturingStillImage;
	int _flashMode;
	char _hasOpticalImageStabilizer;
	BOOL _isStreaming;
	id<DACameraComponentDelegate> _delegate;
	int _cameraPosition;
	int _videoOrientation;
	CALayer* _previewLayer;
	int _HxISPVersion;
	NSObject*<OS_dispatch_semaphore> __dataReadySema;
	unsigned _frameCount;

}

@property (assign,nonatomic) int HxISPVersion;                                             //@synthesize HxISPVersion=_HxISPVersion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> _dataReadySema;              //@synthesize _dataReadySema=__dataReadySema - In the implementation block
@property (nonatomic,readonly) int _captureStreamIndex; 
@property (assign,nonatomic) unsigned frameCount;                                          //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) BOOL isStreaming;                                             //@synthesize isStreaming=_isStreaming - In the implementation block
@property (assign,nonatomic,__weak) id<DACameraComponentDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int cameraPosition;                                           //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                         //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (nonatomic,retain) CALayer * previewLayer;                                       //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) char hasOpticalImageStabilizer;                               //@synthesize hasOpticalImageStabilizer=_hasOpticalImageStabilizer - In the implementation block
+(SCD_Struct_OS13*)_DACameraDescriptor;
+(id)ispBinary;
-(char)hasOpticalImageStabilizer;
-(id)initWithCameraPosition:(int)arg1 ;
-(void)setHasOpticalImageStabilizer:(char)arg1 ;
-(BOOL)setOpticalImageStabilizerMode:(int)arg1 ;
-(BOOL)enableMotionDebugMetadata:(BOOL)arg1 ;
-(id)startStreaming;
-(BOOL)setOpticalImageStabilizerPositionFloat:(float)arg1 y:(float)arg2 ;
-(BOOL)getOpticalImageStabilizerPositionFloat:(float*)arg1 y:(float*)arg2 temp:(int*)arg3 ;
-(int)getI2CErrorCount;
-(int)getMipiErrorCount;
-(int)getSIFErrorCount;
-(BOOL)stopStreaming;
-(void)setHxISPVersion:(int)arg1 ;
-(BOOL)_teardownCaptureStreams;
-(int)_captureStreamIndex;
-(NSObject*<OS_dispatch_semaphore>)_dataReadySema;
-(void)_showFrameOnPreviewLayer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_getIndexForCamera:(int)arg1 ;
-(BOOL)_setupCaptureDevice;
-(BOOL)_setupCaptureStreams;
-(BOOL)_setupProcessingQueues;
-(BOOL)_setupCurrentStream;
-(void)_startProcessingQueue;
-(BOOL)_teardownProcessingQueues;
-(BOOL)_unregisterForStreamNotifications;
-(BOOL)_teardownCaptureDevice;
-(int)_getStreamErrorFor:(CFStringRef)arg1 ;
-(char)pingComponent;
-(void)_cameraReceivedNewPreviewFrame;
-(void)_cameraReceivedNewStillImage;
-(void)_cameraReceivedNotification:(CFStringRef)arg1 notificationObject:(id)arg2 notificationPayload:(id)arg3 ;
-(BOOL)switchCamera:(int)arg1 ;
-(BOOL)captureStillImage;
-(BOOL)discardStillImage;
-(BOOL)pausePreview:(BOOL)arg1 ;
-(BOOL)getAvgOpticalImageStabilizerPositionFloat:(float*)arg1 y:(float*)arg2 temp:(float*)arg3 numSamples:(int)arg4 ;
-(BOOL)setOpticalImageStabilizerPosition:(int)arg1 y:(int)arg2 ;
-(BOOL)getOpticalImageStabilizerPosition:(int*)arg1 y:(int*)arg2 temp:(int*)arg3 ;
-(int)getUARTErrorCount;
-(int)HxISPVersion;
-(void)set_dataReadySema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)init;
-(void)setDelegate:(id<DACameraComponentDelegate>)arg1 ;
-(id<DACameraComponentDelegate>)delegate;
-(void)setFrameCount:(unsigned)arg1 ;
-(unsigned)frameCount;
-(BOOL)isStreaming;
-(BOOL)_registerForStreamNotifications;
-(int)videoOrientation;
-(void)setPreviewLayer:(CALayer *)arg1 ;
-(int)cameraPosition;
-(void)setCameraPosition:(int)arg1 ;
-(void)setVideoOrientation:(int)arg1 ;
-(BOOL)setFlashMode:(int)arg1 ;
-(void)setIsStreaming:(BOOL)arg1 ;
-(CALayer *)previewLayer;
@end

