/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)changeSeed;
-(id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)sinkID;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)bumpChangeSeed;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)liveConnections;
-(id)recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 ;
-(void)performBlockOnSessionNotifyingThread:(/*^block*/id)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(char)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(id)_inputForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(char)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(char)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(void)updateMetadataTransformForSourceFormat:(id)arg1 ;
-(id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 ;
-(id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(void)handleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(unsigned long)requiredOutputFormatForConnection:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
-(void)setSession:(id)arg1 ;
-(NSArray *)connections;
-(id)session;
-(id)connectionWithMediaType:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
@end

