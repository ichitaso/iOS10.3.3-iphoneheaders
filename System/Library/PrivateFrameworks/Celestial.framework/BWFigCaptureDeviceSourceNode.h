/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWNodeOutput, NSDictionary, NSObject, NSMutableDictionary, NSString;

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	BWFigVideoCaptureDevice* _captureDevice;
	BWFigVideoCaptureStream* _captureStream;
	OpaqueFigCaptureStreamRef _stream;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	NSDictionary* _videoCaptureOutputColorInfoOverride;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	char _detectedFacesOutputEnabled;
	char _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
	int _resolvedSensorFormatIndex;
	int _streamSensorFormatIndex;
	unsigned long _sensorPixelFormat;
	unsigned long _streamSensorPixelFormat;
	int _offlineConfigurationSeed;
	int _resolvedOfflineConfigurationSeed;
	SCD_Struct_BW12 _sensorDimensions;
	SCD_Struct_BW12 _minOutputDimensions;
	int _minOutputDimensionsSensorFormatIndex;
	int _sensorFormatIndex;
	float _minFrameRate;
	float _maxFrameRate;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	char _requiresOverscan;
	char _temporalNoiseReductionEnabled;
	char _chromaNoiseReductionEnabled;
	char _automaticallyEnablesLowLightBoostWhenAvailable;
	char _lowLightBoostSupportedForFormat;
	int _motionAttachmentsSource;
	SCD_Struct_BW12 _outputDimensions;
	SCD_Struct_BW12 _streamOutputDimensions;
	SCD_Struct_BW12 _sensorOverscanDimensions;
	char _streamFormatChangeInFlight;
	SCD_Struct_BW12 _streamOutputDimensionsAfterFormatChange;
	unsigned long _streamSensorPixelFormatAfterFormatChange;
	opaqueCMBufferQueueRef _streamQueue;
	opaqueCMBufferQueueTriggerTokenRef _streamQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _bufferServicingQueue;
	opaqueCMBufferQueueRef _stillImageQueue;
	opaqueCMBufferQueueTriggerTokenRef _stillImageQueueTriggerToken;
	NSObject*<OS_dispatch_queue> _stillImageServicingQueue;
	char _deferMetadataDictionaryCreation;
	NSMutableDictionary* _dutyCycleMetadataCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) char videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
+(void)initialize;
+(id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1 ;
+(int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(SCD_Struct_BW12)arg2 sensorPixelFormat:(unsigned long)arg3 sensorFormatIndex:(int)arg4 ;
-(void)dealloc;
-(id)nodeSubType;
-(void)setOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BWFigVideoCaptureStream *)captureStream;
-(void)setDetectedFacesOutputEnabled:(char)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(char)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)updateOutputRequirements;
-(float)aeMaxGain;
-(void)setSensorPixelFormat:(unsigned long)arg1 ;
-(void)setSensorDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setSensorFormatIndex:(int)arg1 ;
-(void)setRequiresOverscan:(char)arg1 ;
-(void)setLowLightBoostSupportedForFormat:(char)arg1 ;
-(SCD_Struct_BW12)minOutputDimensions;
-(SCD_Struct_BW12)sensorOverscanDimensions;
-(void)willStop;
-(char)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(char)arg1 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(long)_bringStreamUpToDate;
-(void)_resolveOfflineConfiguration;
-(char)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(char*)arg1 sensorPixelFormatChanged:(char*)arg2 outputDimensionsChanged:(char*)arg3 ;
-(void)_registerForStreamNotifications;
-(long)_startStreaming;
-(long)_prepareStillImageQueue;
-(long)_stopStreaming;
-(void)_unprepareStillImageQueue;
-(void)_unregisterFromStreamNotifications;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_unprepareStreamQueue;
-(void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
-(long)_bringStreamFormatIndexUpToDate;
-(void)_bringStreamPixelFormatUpToDate;
-(char)_prepareStreamQueue;
-(long)_updateStreamOutputDimensions;
-(long)_lockFramerateToMaxSupportedByCurrentSensorFormat;
-(void)_updateMetadataConfigurations;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(int)arg1 ;
-(SCD_Struct_BW12)_maxOutputDimensionsForResolvedSensorFormatIndex;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(char)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(unsigned long)sensorPixelFormat;
-(int)sensorFormatIndex;
-(SCD_Struct_BW12)outputDimensions;
-(int)motionAttachmentsSource;
-(char)requiresOverscan;
-(char)temporalNoiseReductionEnabled;
-(char)chromaNoiseReductionEnabled;
-(char)lowLightBoostSupportedForFormat;
-(long)_addCaptureStreamMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(OpaqueCMClockRef)clock;
-(char)automaticallyEnablesLowLightBoostWhenAvailable;
-(SCD_Struct_BW12)sensorDimensions;
-(void)setChromaNoiseReductionEnabled:(char)arg1 ;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
-(BWNodeOutput *)stillImageOutput;
-(BWFigVideoCaptureDevice *)captureDevice;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg1 ;
-(float)minFrameRate;
-(float)maxFrameRate;
@end

