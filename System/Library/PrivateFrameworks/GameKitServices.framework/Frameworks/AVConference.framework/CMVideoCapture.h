/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoCaptureProtocol.h>

@protocol OS_os_transaction;
@class NSObject;

@interface CMVideoCapture : NSObject <VideoCaptureProtocol> {

	tagHANDLE* _handle;
	NSObject*<OS_os_transaction> _transaction;

}
-(void)dealloc;
-(long)startPreview;
-(long)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(long)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(long)copyColorInfo:(const _CFDictionary*)arg1 ;
-(char)isPreviewRunning;
-(long)getCameraType:(int*)arg1 ;
-(long)setFrameRatePercentage:(double)arg1 newFramerate:(int*)arg2 ;
-(long)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(char)arg3 ;
-(long)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(id)initWithOptions:(void*)arg1 frameCallback:(/*function pointer*/void*)arg2 videoCaptureEventCallbackData:(void*)arg3 videoCaptureEventCallback:(/*function pointer*/void*)arg4 width:(int)arg5 height:(int)arg6 frameRate:(int)arg7 cameraType:(int)arg8 withError:(int*)arg9 ;
-(long)stop:(char)arg1 ;
-(long)setCameraType:(int)arg1 ;
@end
