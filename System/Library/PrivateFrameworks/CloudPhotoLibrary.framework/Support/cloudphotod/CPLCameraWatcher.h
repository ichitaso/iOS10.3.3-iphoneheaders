/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol CPLCameraWatcherDelegate;
@class FigCameraViewfinder, NSString;

@interface CPLCameraWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	FigCameraViewfinder* _viewFinder;
	char _isCameraRunning;
	id<CPLCameraWatcherDelegate> _delegate;

}

@property (__weak,readonly) id<CPLCameraWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2 ;
-(char)isCameraRunning;
-(id<CPLCameraWatcherDelegate>)delegate;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
@end

