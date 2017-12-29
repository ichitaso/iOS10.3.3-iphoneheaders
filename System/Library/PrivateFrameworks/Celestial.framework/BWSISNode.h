/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWBracketSettingsProvider.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings, NSString;

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _cameraTuningDictionary;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _noiseModelParamsDictionary;
	NSDictionary* _fusionParamsDictionary;
	int _fusionScheme;
	char _alwaysRequestsPreBracketedEV0;
	char _allowExperimentalOverrides;
	int _lensShadingCorrectionMode;
	int _maxIntegrationTimeLimitMsec;
	float _bracketGainCap;
	NSArray* _exposureValues;
	NSArray* _afWindowParamsArray;
	int _sisBracketCount;
	NSArray* _oisExposureDurationTypes;
	int _oisBracketCount;
	FigCaptureStillImageSettings* _currentCaptureSettings;
	char _preBracketedFrameReceived;
	int _numberFramesReceived;
	int _lastFusionTypeUsed;

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
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3 ;
-(id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 fusionScheme:(int)arg4 allowExperimentalOverrides:(char)arg5 ;
-(long)_unpackSISOptions;
-(id)_sisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW16*)arg1 stillImageSettings:(id)arg2 ;
-(id)_oisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW16*)arg1 stillImageSettings:(id)arg2 ;
-(void)_sampleBufferProcessorOutputReady:(long)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
@end

