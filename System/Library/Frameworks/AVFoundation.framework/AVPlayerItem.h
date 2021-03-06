/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemInternal, MPQueuePlayer, MPAVItem, NSDate, NSArray, NSString, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {

	AVPlayerItemInternal* _playerItem;

}

@property (assign,nonatomic) MPQueuePlayer * MP_associatedQueuePlayer; 
@property (nonatomic,retain) MPAVItem * MPAVItem; 
@property (getter=isAuthorizationRequiredForPlayback,nonatomic,readonly) char authorizationRequiredForPlayback; 
@property (getter=isApplicationAuthorizedForPlayback,nonatomic,readonly) char applicationAuthorizedForPlayback; 
@property (getter=isContentAuthorizedForPlayback,nonatomic,readonly) char contentAuthorizedForPlayback; 
@property (assign,setter=_setExternalProtectionRequiredForPlayback:,getter=_isExternalProtectionRequiredForPlayback,nonatomic) char _externalProtectionRequiredForPlayback; 
@property (getter=_isRental,nonatomic,readonly) char _rental; 
@property (nonatomic,readonly) NSDate * _rentalStartDate; 
@property (nonatomic,readonly) NSDate * _rentalExpirationDate; 
@property (getter=_isRentalPlaybackStarted,nonatomic,readonly) char _rentalPlaybackStarted; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackStartedDate; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackExpirationDate; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * mediaDataCollectors; 
@property (nonatomic,copy) NSString * mediaKind; 
@property (assign,nonatomic) unsigned restrictions; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,retain) id<NSObject><NSCopying> AVKitData; 
@property (assign,nonatomic) char playHapticTracks; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSError * error; 
+(void)initialize;
+(id)playerItemWithURL:(id)arg1 ;
+(char)_hasOverrideForSelector:(SEL)arg1 ;
+(long)_createFigPlaybackItemForFigPlayer:(OpaqueFigPlayerRef)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned)arg4 playbackItem:(OpaqueFigPlaybackItem*)arg5 ;
+(char)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(char)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(OpaqueCMTimebaseRef)_copyTimebaseFromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
+(id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
+(char)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+(char)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+(char)automaticallyNotifiesObserversOfVariantIndex;
+(char)automaticallyNotifiesObserversOfHasEnabledVideo;
+(char)automaticallyNotifiesObserversOfHasEnabledAudio;
+(char)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+(char)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+(char)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+(char)automaticallyNotifiesObserversOfAllowProgressiveResume;
+(char)automaticallyNotifiesObserversOfStatus;
+(char)automaticallyNotifiesObserversOfAsset;
+(char)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(char)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(char)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(char)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(char)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(char)automaticallyNotifiesObserversOfPresentationSize;
+(char)automaticallyNotifiesObserversOfTracks;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2 ;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1 ;
+(id)playerItemWithAsset:(id)arg1 ;
-(id)createLanguageOptions;
-(MPQueuePlayer *)MP_associatedQueuePlayer;
-(void)setMP_associatedQueuePlayer:(MPQueuePlayer *)arg1 ;
-(id)MP_shortDescription;
-(MPAVItem *)MPAVItem;
-(void)setMPAVItem:(MPAVItem *)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)delegate;
-(SCD_Struct_AV2)duration;
-(SCD_Struct_AV2)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(SCD_Struct_AV2)currentTime;
-(id)initWithURL:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)asset;
-(id)_player;
-(int)status;
-(CGSize)presentationSize;
-(char)_hasEnqueuedVideoFrame;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV2)arg1 ;
-(id)_weakReference;
-(id)_tracks;
-(id)customVideoCompositor;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(void)_willAccessKVOForKey:(id)arg1 ;
-(void)_didAccessKVOForKey:(id)arg1 ;
-(void)_playerChangeStatusToFailedWithError:(id)arg1 ;
-(id)_preferredPixelBufferAttributes;
-(char)_suppressesVideoLayers;
-(char)_isReadyForInspectionOfPresentationSize;
-(char)_getCachedPresentationSize:(CGSize*)arg1 ;
-(char)_getCachedNonForcedSubtitleEnabled:(char*)arg1 ;
-(OpaqueCMTimebaseRef)_copyProxyTimebase;
-(void)_playerWillAccessCurrentItemKeypaths;
-(void)_playerDidAccessCurrentItemKeypaths;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_propertyStorage;
-(char)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2 ;
-(void)_insertAfterItem:(id)arg1 ;
-(void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
-(id)_nextItem;
-(id)_previousItem;
-(void)_removeFromItems;
-(char)seekToDate:(id)arg1 ;
-(char)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(OpaqueCMTimebaseRef)timebase;
-(id)_fpNotificationNames;
-(id)valueForKeyForKVO:(id)arg1 ;
-(char)_hasEnabledVideo;
-(OpaqueFigPlaybackItemRef)_copyFigPlaybackItem;
-(void)_setTimedMetadata:(id)arg1 ;
-(id)automaticallyLoadedAssetKeys;
-(id)audioMix;
-(char)savesDownloadedDataToDiskWhenDone;
-(id)initialDate;
-(id)initialEstimatedDate;
-(SCD_Struct_AV2)reversePlaybackEndTime;
-(id)imageQueueInterpolationCurve;
-(char)blendsVideoFrames;
-(char)reversesMoreVideoFramesInMemory;
-(char)aggressivelyCachesVideoFrames;
-(char)usesIFrameOnlyPlaybackForHighRateScaledEdits;
-(SCD_Struct_AV2)minimumIntervalForIFrameOnlyPlayback;
-(float)speedThresholdForIFrameOnlyPlayback;
-(char)seekingWaitsForVideoCompositionRendering;
-(id)gaplessInfo;
-(float)volumeAdjustment;
-(id)textStyleRules;
-(char)networkUsuallyExceedsMaxBitRate;
-(char)allowProgressiveSwitchUp;
-(char)allowProgressiveStartup;
-(char)allowProgressiveResume;
-(CGSize)IFramePrefetchTargetDimensions;
-(CGSize)preferredPeakPresentationSize;
-(double)preferredPeakBitRate;
-(SCD_Struct_AV2)maximumTrailingBufferDuration;
-(SCD_Struct_AV2)maximumForwardBufferDuration;
-(char)requiresAccessLog;
-(char)suppressesAudioOnlyVariants;
-(id)videoApertureMode;
-(unsigned)RTCReportingFlags;
-(char)usesMinimalLatencyForVideoCompositionRendering;
-(id<NSObject><NSCopying>)AVKitData;
-(char)playHapticTracks;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(void)_removeFAListeners;
-(void)setTextStyleRules:(id)arg1 ;
-(void)setImageQueueInterpolationCurve:(id)arg1 ;
-(void)setBlendsVideoFrames:(char)arg1 ;
-(void)setReversesMoreVideoFramesInMemory:(char)arg1 ;
-(void)setAggressivelyCachesVideoFrames:(char)arg1 ;
-(void)setAVKitData:(id<NSObject><NSCopying>)arg1 ;
-(char)continuesPlayingDuringPrerollForRateChange;
-(void)setContinuesPlayingDuringPrerollForRateChange:(char)arg1 ;
-(char)continuesPlayingDuringPrerollForSeek;
-(void)setContinuesPlayingDuringPrerollForSeek:(char)arg1 ;
-(void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(char)arg1 ;
-(void)setMinimumIntervalForIFrameOnlyPlayback:(SCD_Struct_AV2)arg1 ;
-(void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1 ;
-(char)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(char)arg1 ;
-(id)_URL;
-(char)_isExternalProtectionRequiredForPlayback;
-(void)setSavesDownloadedDataToDiskWhenDone:(char)arg1 ;
-(void)_quietlySetForwardPlaybackEndTime:(SCD_Struct_AV2)arg1 ;
-(void)_quietlySetReversePlaybackEndTime:(SCD_Struct_AV2)arg1 ;
-(void)_quietlySetImageQueueInterpolationCurve:(id)arg1 ;
-(void)_quietlySetBlendsVideoFrames:(char)arg1 ;
-(void)_quietlySetReversesMoreVideoFramesInMemory:(char)arg1 ;
-(void)_quietlySetAggressivelyCachesVideoFrames:(char)arg1 ;
-(void)_quietlySetContinuesPlayingDuringPrerollForSeek:(char)arg1 ;
-(void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(char)arg1 ;
-(void)_quietlySetUsesIFrameOnlyPlaybackForHighRateScaledEdits:(char)arg1 ;
-(void)_quietlySetMinimumIntervalForIFrameOnlyPlayback:(SCD_Struct_AV2)arg1 ;
-(void)_quietlySetSpeedThresholdForIFrameOnlyPlayback:(float)arg1 ;
-(void)_quietlySetCanUseNetworkResourcesForLiveStreamingWhilePaused:(char)arg1 ;
-(void)_setVideoCompositionFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)_setVideoCompositionRenderSize:(CGSize)arg1 ;
-(void)_setVideoCompositionRenderScale:(float)arg1 ;
-(void)_configureVideoCompositionColorProperties;
-(void)_setVideoCompositionInstructions:(id)arg1 ;
-(void)_setVideoCompositor:(void*)arg1 ;
-(void)_applyCurrentAudioMix;
-(void)_applySeekingWaitsForVideoCompositionRendering;
-(void)_quietlySetEQPreset:(int)arg1 ;
-(id)_playbackProperties;
-(void)_quietlySetPlaybackProperties:(id)arg1 ;
-(void)_quietlySetVariantIndex:(int)arg1 ;
-(void)_quietlySetSoundCheckVolumeNormalization:(float)arg1 ;
-(void)_quietlySetVolumeAdjustment:(float)arg1 ;
-(void)_quietlySetFigTimePitchAlgorithm:(CFStringRef)arg1 ;
-(void)_applyMediaSelectionOptions;
-(void)_applyTextStyleRules;
-(void)_quietlySetMediaKind:(id)arg1 ;
-(void)_quietlySetRestrictions:(unsigned)arg1 ;
-(void)_quietlySetServiceIdentifier:(id)arg1 ;
-(void)_setSyncLayersOnFigPlaybackItem:(id)arg1 ;
-(void)_updateTimebase;
-(void)_quietlySetMaximumTrailingBufferDuration:(SCD_Struct_AV2)arg1 ;
-(void)_quietlySetMaximumForwardBufferDuration:(SCD_Struct_AV2)arg1 ;
-(void)_quietlySetRTCReportingFlags:(unsigned)arg1 ;
-(id)_metadataCollectors;
-(void)_configurePlaybackItem;
-(void)_quietlySetLimitReadAhead:(char)arg1 ;
-(void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)arg1 ;
-(void)_quietlySetWillNeverSeekBackwardsHint:(char)arg1 ;
-(void)_quietlySetAlwaysMonitorsPlayability:(char)arg1 ;
-(void)_quietlySetNonForcedSubtitleDisplayEnabled:(char)arg1 ;
-(void)_quietlySetUsesMinimalLatencyForVideoCompositionRendering:(char)arg1 ;
-(id)_cachedTracks;
-(void)_evaluateVideoOutputs;
-(void)_evaluateLegibleOutputs;
-(void)_evaluateMetadataOutputs;
-(void)_respondToBecomingReadyForBasicInspection;
-(void)_attachToFigPlayer;
-(void)_addFAListeners;
-(void)_markAsReadyForInspectionOfTracks;
-(CGSize)_presentationSize;
-(id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1 ;
-(char)_isReadyForInspectionOfTracks;
-(id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(id)_tracksFromAssetTrackIDs;
-(void)_respondToBecomingReadyForBasicInspectionWithDuration:(SCD_Struct_AV2)arg1 ;
-(void)_informObserversAboutAvailabilityOfDuration:(SCD_Struct_AV2)arg1 ;
-(void)_markAsReadyForBasicInspection;
-(void)_markAsReadyForInspectionOfPresentationSize;
-(void)_kickAssetObserversIfAppropriate;
-(void)_informObserversAboutAvailabilityOfTracks;
-(void)_informObserversAboutAvailabilityOfPresentationSize;
-(char)_isReadyForBasicInspection;
-(void)_invokeReadyForEnqueueingHandlers;
-(char)_canStepForward;
-(int)_CreateSeekID;
-(int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(char)arg2 ;
-(SCD_Struct_AV2)_forwardPlaybackEndTime;
-(SCD_Struct_AV2)_reversePlaybackEndTime;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(char)_limitReadAhead;
-(void)setMaximumForwardBufferDuration:(SCD_Struct_AV2)arg1 ;
-(SCD_Struct_AV2)_maximumForwardBufferDuration;
-(char)_alwaysMonitorsPlayability;
-(int)_playbackLikelyToKeepUpTrigger;
-(char)_willNeverSeekBackwardsHint;
-(char)_continuesPlayingDuringPrerollForSeek;
-(char)_continuesPlayingDuringPrerollForRateChange;
-(void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrackID:(int)arg2 ;
-(id)audioTimePitchAlgorithm;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2 ;
-(id)_copyStateDispatchQueue;
-(char)_usesMinimalLatencyForVideoCompositionRendering;
-(id)_audioTimePitchAlgorithm;
-(id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1 ;
-(id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1 ;
-(id)_loadedTimeRanges;
-(void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(char)arg3 ;
-(void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2 ;
-(void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(char)arg3 ;
-(void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(char)arg3 ;
-(void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(void)_clearCachedMediaSelectionGroup:(id)arg1 ;
-(id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(char)_hasSelectionInCachedMediaSelectionGroup:(id)arg1 ;
-(char)_isNonForcedSubtitleDisplayEnabled;
-(char)_hasEnabledAudio;
-(char)_suppressionForOutputs:(id)arg1 ;
-(void)_setSuppressesVideoLayers:(char)arg1 ;
-(void)setPreferredPeakBitRate:(double)arg1 ;
-(id)_videoOutputs;
-(id)_legibleOutputsForKeys;
-(void)_updateVideoSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(void)_updateLegibleSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(char)_canPlayFastForward;
-(char)_canPlayReverse;
-(char)_canPlayFastReverse;
-(char)_canStepBackward;
-(id)_playerConnection;
-(void)_markAsNeedingNewAssetWithFigPlaybackItem;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
-(id)_trackWithTrackID:(int)arg1 ;
-(id)_enabledTrackFormatDescriptions;
-(char)_isAFileBasedItemThatsReadyToPlay;
-(char)canPlayReverse;
-(char)_canPlaySlowForward;
-(char)canPlaySlowForward;
-(char)canPlaySlowReverse;
-(char)canStepForward;
-(char)canStepBackward;
-(void)setInitialDate:(id)arg1 ;
-(id)currentEstimatedDate;
-(void)setInitialEstimatedDate:(id)arg1 ;
-(void)stepByCount:(int)arg1 ;
-(void)setRTCReportingFlags:(unsigned)arg1 ;
-(char)allowsExtendedReadAhead;
-(void)setAllowsExtendedReadAhead:(char)arg1 ;
-(double)preferredForwardBufferDuration;
-(void)setPreferredForwardBufferDuration:(double)arg1 ;
-(void)setMaximumTrailingBufferDuration:(SCD_Struct_AV2)arg1 ;
-(char)alwaysMonitorsPlayability;
-(void)setAlwaysMonitorsPlayability:(char)arg1 ;
-(int)playbackLikelyToKeepUpTrigger;
-(char)willNeverSeekBackwardsHint;
-(void)setWillNeverSeekBackwardsHint:(char)arg1 ;
-(void)_setVideoCompositionColorPrimaries:(id)arg1 ;
-(void)_setVideoCompositionColorYCbCrMatrix:(id)arg1 ;
-(void)_setVideoCompositionColorTransferFunction:(id)arg1 ;
-(void)setSeekingWaitsForVideoCompositionRendering:(char)arg1 ;
-(void)setUsesMinimalLatencyForVideoCompositionRendering:(char)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(char)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(char)arg1 ;
-(id)playabilityMetrics;
-(int)variantIndex;
-(double)liveUpdateInterval;
-(void)setVariantIndex:(int)arg1 ;
-(char)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1 ;
-(id)currentMediaSelection;
-(OpaqueFigCPEProtectorRef)_figCPEProtector;
-(void)_removeSyncLayer:(id)arg1 ;
-(void)_addSyncLayer:(id)arg1 ;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)arg1 ;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(void)setNetworkUsuallyExceedsMaxBitRate:(char)arg1 ;
-(void)setAllowProgressiveStartup:(char)arg1 ;
-(void)setAllowProgressiveResume:(char)arg1 ;
-(void)setIFramePrefetchTargetDimensions:(CGSize)arg1 ;
-(float)maximumBitRate;
-(void)setMaximumBitRate:(float)arg1 ;
-(void)setPreferredPeakPresentationSize:(CGSize)arg1 ;
-(void)_renderingSuppressionDidChangeForOutput:(id)arg1 ;
-(void)setRequiresAccessLog:(char)arg1 ;
-(void)setSuppressesAudioOnlyVariants:(char)arg1 ;
-(void)setVideoApertureMode:(id)arg1 ;
-(id)_keysAndValuesForCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 ;
-(char)isAuthorizationRequiredForPlayback;
-(char)isApplicationAuthorizedForPlayback;
-(id)_isExternalProtectionRequiredForPlaybackInternal;
-(void)_setExternalProtectionRequiredForPlayback:(char)arg1 ;
-(char)_isRental;
-(NSDate *)_rentalStartDate;
-(NSDate *)_rentalExpirationDate;
-(char)_isRentalPlaybackStarted;
-(NSDate *)_rentalPlaybackStartedDate;
-(NSDate *)_rentalPlaybackExpirationDate;
-(long long)_fileSize;
-(long long)_availableFileSize;
-(id)_metadataOutputsForKeys;
-(void)_addVideoOutput:(id)arg1 ;
-(void)_addLegibleOutput:(id)arg1 ;
-(void)_addMetadataOutput:(id)arg1 ;
-(void)_removeVideoOutput:(id)arg1 ;
-(void)_removeLegibleOutput:(id)arg1 ;
-(void)_removeMetadataOutput:(id)arg1 ;
-(void)_addMetadataCollector:(id)arg1 ;
-(void)_removeMetadataCollector:(id)arg1 ;
-(NSArray *)mediaDataCollectors;
-(void)addMediaDataCollector:(id)arg1 ;
-(void)removeMediaDataCollector:(id)arg1 ;
-(void)_updateTaggedMetadataArray:(id)arg1 ;
-(id)_mediaKind;
-(id)_legibleOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(SCD_Struct_AV2)arg4 withLegibleOutputsDictionaryKey:(id)arg5 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2 ;
-(id)_metadataOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2 ;
-(unsigned)restrictions;
-(void)setRestrictions:(unsigned)arg1 ;
-(id)errorLog;
-(id)timedMetadata;
-(char)limitReadAhead;
-(void)setLimitReadAhead:(char)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(SCD_Struct_AV2)forwardPlaybackEndTime;
-(id)_seekableTimeRanges;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)_setAudibleDRMInfo:(id)arg1 ;
-(void)_setRampInOutInfo:(id)arg1 ;
-(float)soundCheckVolumeNormalization;
-(char)canPlayFastForward;
-(char)canPlayFastReverse;
-(char)hasVideo;
-(void)setMediaKind:(NSString *)arg1 ;
-(void)setAllowProgressiveSwitchUp:(char)arg1 ;
-(void)setGaplessInfo:(id)arg1 ;
-(void)setPlaybackLikelyToKeepUpTrigger:(int)arg1 ;
-(void)_setURL:(id)arg1 ;
-(NSString *)mediaKind;
-(char)isContentAuthorizedForPlayback;
-(id)tracks;
-(id)accessLog;
-(void)setVideoComposition:(id)arg1 ;
-(NSError *)error;
-(void)setAudioMix:(id)arg1 ;
-(id)videoComposition;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV2)arg1 ;
-(void)cancelPendingSeeks;
-(void)seekToTime:(SCD_Struct_AV2)arg1 toleranceBefore:(SCD_Struct_AV2)arg2 toleranceAfter:(SCD_Struct_AV2)arg3 ;
-(void)seekToTime:(SCD_Struct_AV2)arg1 toleranceBefore:(SCD_Struct_AV2)arg2 toleranceAfter:(SCD_Struct_AV2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setAsset:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_AV2)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isPlaybackLikelyToKeepUp;
-(char)isPlaybackBufferFull;
-(char)isPlaybackBufferEmpty;
-(void)addOutput:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_AV2)arg1 ;
-(void)setPlayHapticTracks:(char)arg1 ;
-(void)setVolumeAdjustment:(float)arg1 ;
-(NSArray *)outputs;
-(id)currentDate;
-(NSString *)serviceIdentifier;
-(void)finalize;
@end

