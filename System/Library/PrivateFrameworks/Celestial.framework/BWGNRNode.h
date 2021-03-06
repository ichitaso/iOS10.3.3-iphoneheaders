/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWBracketSettingsProvider.h>

@class NSString, NSDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, NSArray;

@interface BWGNRNode : BWNode <BWBracketSettingsProvider> {

	char _sisEnabled;
	char _oisEnabled;
	char _hdrEnabled;
	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSString* _portType;
	NSString* _sensorID;
	NSDictionary* _sensorIDDictionary;
	NSString* _telephotoPortType;
	NSString* _telephotoSensorID;
	NSDictionary* _telephotoSensorIDDictionary;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _processingType;
	char _hdrProcessingTypeConfiguredToSampleBufferProcessor;
	char _clientExpectsPreBracketFrame;
	char _expectsPreBracketFrame;
	char _receivedPreBracketFrame;
	unsigned _expectedFrameCount;
	unsigned _receivedFrameCount;
	char _receivedAllFrames;
	char _expectsReferenceFrameBracketedCaptureSequenceNumber;
	int _receivedReferenceFrameBracketedCaptureSequenceNumber;
	opaqueCMSampleBufferRef _collectedProcessedPreBracketHDR;
	long long _previouslyCompletedFusionSettingsID;
	int _sisBracketCount;
	int _oisBracketCount;
	int _hdrBracketCount;
	char _alwaysRequestsPreBracketedEV0;
	char _alwaysRequestsPreBracketedEV0ForOIS;
	char _usesHDRPreBracketFrameForErrorRecoveryDownstream;
	char _allowedToModifyInputBuffers;
	NSArray* _sisExposureValues;
	NSArray* _hdrExposureValues;
	NSArray* _afWindowParamsArray;
	NSArray* _oisExposureDurationTypes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)_clearCaptureRequestState;
-(long)_setupSampleBufferProcessor;
-(int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1 ;
-(id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW16*)arg2 stillImageSettings:(id)arg3 ;
-(void)setAttachesInputBracketToOutputSampleBuffer:(char)arg1 ;
-(char)attachesInputBracketToOutputSampleBuffer;
-(void)setAlwaysRequestsPreBracketedEV0:(char)arg1 ;
-(char)alwaysRequestsPreBracketedEV0;
-(id)initWithSISEnabled:(char)arg1 OISEnabled:(char)arg2 HDREnabled:(char)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 ;
-(void)setAlwaysRequestsPreBracketedEV0ForOIS:(char)arg1 ;
-(void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(char)arg1 ;
-(void)setAllowedToModifyInputBuffers:(char)arg1 ;
-(id)_sisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW16*)arg1 stillImageSettings:(id)arg2 ;
-(id)_oisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW16*)arg1 stillImageSettings:(id)arg2 ;
-(void)_sampleBufferProcessorOutputReady:(long)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(id)_initWithSISEnabled:(char)arg1 OISEnabled:(char)arg2 HDREnabled:(char)arg3 portType:(id)arg4 sensorID:(id)arg5 sensorIDDictionary:(id)arg6 telephotoPortType:(id)arg7 telephotoSensorID:(id)arg8 telephotoSensorIDDictionary:(id)arg9 sbpCreationFunction:(/*function pointer*/void*)arg10 treatSoftErrorsAsHardErrors:(char)arg11 ;
-(unsigned)_worstCaseFrameRetainCount;
-(long)_unpackOptions;
-(void)_setExpectedFrameCountForCaptureType:(int)arg1 deliverOriginalImage:(char)arg2 bracketSettings:(id)arg3 ;
-(int)_gnrProcessingTypeWithStillImageStreamCaptureType:(int)arg1 stereoFusionCapture:(char)arg2 ;
-(long)_setPropertyOnSampleBufferProcessorWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_processSequenceInSampleBufferProcessor;
-(char)_receivedExpectedAmountOfFrames;
-(void)_detectMissingPreBracketedFrameAndEmitBWNodeError;
-(void)_setReferenceFrameBracketedCaptureSequenceNumberOnSampleBufferProcessor:(int)arg1 ;
-(id)_hdrBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW16*)arg1 stillImageSettings:(id)arg2 ;
-(id)_tuningDictionaryWithOnlyGNRParameters;
-(id)sbpOptionsDictionary;
-(char)alwaysRequestsPreBracketedEV0ForOIS;
-(char)usesHDRPreBracketFrameForErrorRecoveryDownstream;
-(char)allowedToModifyInputBuffers;
@end

