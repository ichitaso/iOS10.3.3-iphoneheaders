/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_semaphore;
@class NSDictionary, NSObject;

@interface BWVISNode : BWNode {

	int _stabilizationMethod;
	int _stabilizationType;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _optionsDict;
	char _flushingSBP;
	OpaqueFigCaptureISPProcessingSessionRef _stripProcessingSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	char _logStripProcessingTiming;
	unsigned long _outputWidth;
	unsigned long _outputHeight;
	char _sphereVideoEnabled;
	char _offline;
	char _irisVIS;
	SCD_Struct_BW12 _offlineOutputDimensions;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	int _numberOfTimesWaited;
	int _numberOfBuffersEmitted;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(long)_setupSampleBufferProcessor;
-(char)sphereVideoEnabled;
-(void)setSphereVideoEnabled:(char)arg1 ;
-(id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 stripProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg4 requiredFormat:(id)arg5 activeMaxFrameRate:(float)arg6 motionAttachmentsSource:(int)arg7 offlineOutputDimensions:(SCD_Struct_BW12)arg8 irisVISCleanOutputRect:(CGRect)arg9 cameraAlignmentInfo:(id)arg10 cameraInfoByPortType:(id)arg11 ;
-(void)setEmitSampleBufferSemaphore:(id)arg1 ;
-(void)_updateOutputRequirements;
-(id)emitSampleBufferSemaphore;
-(void)_ensureSemaphoreIsBalanced;
-(void)_prepareStripProcessingSession;
-(void)_flushBuffers;
-(void)_tallyAndEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_tallyAndEmitDroppedSample:(id)arg1 ;
-(CVBufferRef)_newOutputPixelBuffer;
-(long)_asynchronouslyStripProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 withStabilizationParameters:(id)arg2 ;
-(void)setOutputWidth:(unsigned long)arg1 ;
-(void)setOutputHeight:(unsigned long)arg1 ;
-(unsigned long)outputWidth;
-(unsigned long)outputHeight;
@end

