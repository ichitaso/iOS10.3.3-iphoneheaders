/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFileSinkNode.h>

@protocol OS_dispatch_queue;
@class NSArray, FigCaptureMovieFileRecordingSettings, NSObject, BWIrisMovieInfo, NSMutableArray, BWIrisMovieGenerator;

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode {

	unsigned long long _currFileSize;
	unsigned long long _maxFileSize;
	long long _estimatedMovieSizeOverhead;
	unsigned long long _minFreeDiskSpaceLimit;
	unsigned long long _fileSizeAtPreviousCheck;
	SCD_Struct_BW2 _currFileDuration;
	SCD_Struct_BW2 _checkDiskSpaceAtThisDuration;
	SCD_Struct_BW2 _maxFileDuration;
	SCD_Struct_BW2 _adjustedMaxFileDuration;
	SCD_Struct_BW2 _nextTimeToReturnFileSize;
	int _masterInputTimeScale;
	float _maxVideoFrameRate;
	NSArray* _stagingQueues;
	FigCaptureMovieFileRecordingSettings* _settings;
	char* _parentPath;
	SCD_Struct_BW2 _startingPTS;
	NSArray* _movieLevelMetadata;
	NSArray* _trackReferenceListForMetadataInputs;
	NSArray* _structuralDependentTrackReferenceListForMetadataInputs;
	unsigned _numInputs;
	NSObject*<OS_dispatch_queue> _thumbnailGenerationDispatchQueue;
	IOSurfaceRef _thumbnailSurface;
	int _recordingState;
	OpaqueFigFormatWriterRef _formatWriter;
	OpaqueCMByteStreamRef _byteStream;
	int* _trackIDs;
	char* _expectingToSeeSamplesForInput;
	char* _haveSeenSamplesForTrack;
	char* _finalDurationNeedsToBeWrittenForTrack;
	BWIrisMovieInfo* _firstIrisMovieInfo;
	NSMutableArray* _pendingIrisRefMovieRequests;
	BWIrisMovieGenerator* _irisMovieGenerator;
	BWIrisMovieGenerator* _lastRecordingIrisMovieGenerator;
	int _irisStillImageTimeTrackID;
	int _irisStillImageTimeTrackTimeScale;
	unsigned _irisTerminationStatus[2];
	char _recordingIsForFrontCamera;
	unsigned _masterInputIndex;
	char _didBeginSession;
	char _didBeginWriting;
	char _needToDeMoof;
	char _atLeastOneFragmentIsWritten;
	unsigned _numVideoTracks;
	char _ignoreFileSizeLimit;
	char _debugAudio;
	char _haveDebugASBD;
	unsigned _numAudioTracks;
	AudioStreamBasicDescription _debugASBD;
	AudioBufferList* _debugABL;
	SCD_Struct_BW2 _debugDurationForFailOfDiskSpaceTest;
	OpaqueFigSimpleMutexRef _propertyMutex;
	char _recordingIsSubjectToDiskSpaceQuota;
	char _irisSampleReferenceMoviesEnabled;
	char _irisMovieProcessingSuspended;

}

@property (nonatomic,copy) NSArray * movieLevelMetadata; 
@property (nonatomic,copy) NSArray * trackReferenceListForMetadataInputs; 
@property (nonatomic,copy) NSArray * structuralDependentTrackReferenceListForMetadataInputs; 
@property (assign,nonatomic) float maxVideoFrameRate;                                                     //@synthesize maxVideoFrameRate=_maxVideoFrameRate - In the implementation block
@property (assign,nonatomic) char irisMovieProcessingSuspended; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(char)irisSampleReferenceMoviesEnabled;
-(void)setMaxVideoFrameRate:(float)arg1 ;
-(char)irisMovieProcessingSuspended;
-(void)setIrisMovieProcessingSuspended:(char)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned)arg1 numberOfAudioInputs:(unsigned)arg2 numberOfMetadataInputs:(unsigned)arg3 ;
-(void)setIrisSampleReferenceMoviesEnabled:(char)arg1 ;
-(void)setTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(void)setStructuralDependentTrackReferenceListForMetadataInputs:(NSArray *)arg1 ;
-(NSArray *)movieLevelMetadata;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)_doEndRecordingAtTime:(SCD_Struct_BW2)arg1 earlyTerminationErrCode:(long)arg2 ;
-(void)_finishIrisMovieGenerationForLastRecordingIfNeeded;
-(char)_driveStateMachineWithBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(void)_writeBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 ;
-(void)_writeIrisRefMovieWithInfo:(id)arg1 ;
-(void)_buildIrisRefMovieGeneratorAndWriteFirstIrisAsRefMovie;
-(void)_forceEarlyTerminationWithErrorCode:(long)arg1 ;
-(void)_determineWhichInputsWeExpectToSeeSamplesFor;
-(NSArray *)trackReferenceListForMetadataInputs;
-(NSArray *)structuralDependentTrackReferenceListForMetadataInputs;
-(id)_validTrackReferencesForReferenceInputIndexes:(id)arg1 ;
-(long)_startUpFormatWriterAtTime:(SCD_Struct_BW2)arg1 withSettings:(id)arg2 ;
-(long)_writeStillImageTimeMetadataSampleForCaptureTime:(SCD_Struct_BW2)arg1 toTrackWithID:(int)arg2 usingTrackTimeScale:(int)arg3 ;
-(unsigned long long)_getCurrentFileSize:(char)arg1 ;
-(long)_verifyMovieTiming:(id)arg1 ;
-(void)_moveOrDeleteTemporaryIrisMovie:(id)arg1 recordingSucceeded:(char)arg2 ;
-(long long)_adjustedMinFreeDiskSpaceLimitForEstimatedMovieSizeOverhead:(long long)arg1 ;
-(void)_preprocessingForFirstVideoBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 ;
-(void)_preprocessingForFirstAudioBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 ;
-(void)_preprocessingForFirstMetadataBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 ;
-(long)_adjustMaxFileDurationForMovieTimeScale:(int)arg1 ;
-(void)_printBufferEvent:(opaqueCMSampleBufferRef)arg1 forNodeInputIndex:(unsigned)arg2 eventName:(id)arg3 ;
-(long)_checkFreeSpaceForEstimatedMovieSizeOverhead:(long long)arg1 ;
-(void)_debugAudioUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)_driveStateMachineWithStartMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(char)_driveStateMachineWithStopMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(char)_driveStateMachineWithPauseMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(char)_driveStateMachineWithResumeMarkerBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(void)_driveStateMachineWithMediaBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned)arg2 sampleBufferAlreadyAtHeadOfQueue:(char)arg3 ;
-(SCD_Struct_BW2)_findStartMarkersWithMatchedStagedSetting:(id*)arg1 thumbnailSourcePixelBuffer:(_CVBuffer*)arg2 sensorVideoPort:(const _CFString*)arg3 ;
-(long)_doStartRecordingAtTime:(SCD_Struct_BW2)arg1 withSettings:(id)arg2 thumbnailSourcePixelBuffer:(CVBufferRef)arg3 sensorVideoPort:(CFStringRef)arg4 ;
-(SCD_Struct_BW2)_findMarkers:(CFStringRef)arg1 ;
-(void)_handleFormatWriterDidWriteFragmentNotification;
-(float)maxVideoFrameRate;
-(void)setMovieLevelMetadata:(NSArray *)arg1 ;
@end

