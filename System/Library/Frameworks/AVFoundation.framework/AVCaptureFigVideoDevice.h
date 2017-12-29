/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceControlRequestQueue, AVWeakReference, NSMutableArray, NSMutableDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _fcsAttributes;
	NSObject*<OS_dispatch_queue> _devicePropsQueue;
	NSString* _fcsUID;
	int _position;
	int _origin;
	NSString* _localizedName;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	SCD_Struct_AV2 _activeMinFrameDuration;
	char _activeMinFrameDurationSetByClient;
	SCD_Struct_AV2 _activeMaxFrameDuration;
	char _activeMaxFrameDurationSetByClient;
	char _cachesFigCaptureSourceConfigurationChanges;
	int _focusMode;
	CGPoint _focusPointOfInterest;
	float _lensPositionKVO;
	char _adjustingFocus;
	int _autoFocusRangeRestriction;
	char _smoothAutoFocusEnabled;
	char _cameraOption9;
	char _cameraOption10;
	CGRect _cameraFaceResult29;
	char _cameraFaceResult30;
	int _exposureMode;
	SCD_Struct_AV2 _exposureDurationKVO;
	float _ISOKVO;
	float _exposureTargetBias;
	float _exposureTargetOffsetKVO;
	CGPoint _exposurePointOfInterest;
	char _adjustingExposure;
	char _waitingForExposureAdjustmentBeforeLocking;
	int _wbMode;
	SCD_Struct_AV42 _deviceWhiteBalanceGainsKVO;
	SCD_Struct_AV42 _grayWorldDeviceWhiteBalanceGainsKVO;
	char _adjustingWB;
	unsigned long _wbCalibrationCount;
	CGSize* _wbCalibrationTemperatures;
	double* _wbCalibrationMatrices;
	double _wbLastPredictedTemp;
	double _wbSeedTemp;
	char _wbSeedEnabled;
	unsigned long _wbTemperatureIterations;
	char _providesStortorgetMetadata;
	char _automaticallyAdjustsImageControlMode;
	AVCaptureDeviceControlRequestQueue* _manualFocusControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _biasedExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualWhiteBalanceControlRequests;
	SCD_Struct_AV2 _lastCustomExposureDuration;
	float _lastCustomExposureISO;
	int _imageControlMode;
	int _flashMode;
	char _avcaptureDeviceAutoFlashEnabled;
	char _photoOutputFlashSceneEnabled;
	char _flashActive;
	char _flashSceneDetectedForPhotoOutput;
	char _flashAvailable;
	int _torchMode;
	char _torchActive;
	float _torchLevel;
	char _torchAvailable;
	char _isConnected;
	char _subjectMonitoringEnabled;
	char _faceDetectionDrivenImageProcessingEnabled;
	CGRect _faceRectangle;
	int _faceRectangleAngle;
	char _automaticallyEnablesLowLightBoostWhenAvailable;
	char _lowLightBoostEnabled;
	char _highDynamicRangeSceneDetectionEnabled;
	char _automaticallyAdjustsVideoHDREnabled;
	char _videoHDREnabled;
	char _sceneIsHighDynamicRange;
	char _isStillImageStabilizationScene;
	int _activeColorSpace;
	float _saturation;
	float _contrast;
	int _videoZoomDownscaleStageHint;
	int _videoZoomUpscaleStageHint;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	char _videoZoomDrawOverlay;
	float _minAvailableVideoZoomFactor;
	char _autoShallowDepthOfFieldEffectEnabled;
	int _shallowDepthOfFieldEffectStatus;
	NSString* _bravoCameraSelectionBehavior;
	AVWeakReference* _weakReference;
	NSMutableArray* _captureSourceSupportedMetadata;
	NSDictionary* _supportedOptionalFaceDetectionFeatures;
	char _eyeDetectionEnabled;
	char _eyeClosedDetectionEnabled;
	char _smileDetectionEnabled;
	NSArray* _availableBoxedMetadataFormatDescriptions;
	NSDictionary* _sessionPresetCompressionSettings;
	NSDictionary* _h264EncoderLimitations;
	NSObject*<OS_dispatch_queue> _observedHighFrequencyPropertiesQueue;
	NSMutableDictionary* _observedHighFrequencyPropertyCounts;
	NSMutableDictionary* _propertyToFigCaptureSourcePropertyMap;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;
	NSMutableDictionary* _cachedFigCaptureSourceProperties;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
+(id)_newFigCaptureSources;
+(char)_cameraAccessIsEnabled;
-(id)init;
-(void)dealloc;
-(void)setContrast:(float)arg1 ;
-(int)position;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(id)localizedName;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(float)contrast;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(char)isActiveVideoMinFrameDurationSet;
-(void)_checkTCCAccess;
-(id)modelID;
-(char)isSubjectAreaChangeMonitoringEnabled;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(char)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(char)arg1 ;
-(int)deviceSourceOrigin;
-(char)isHighDynamicRangeSceneDetectionEnabled;
-(char)_isHighDynamicRangeScene;
-(void)_setHighDynamicRangeSceneDetectionEnabled:(char)arg1 ;
-(void)_setStillImageStabilizationDetectionEnabled:(char)arg1 ;
-(void)setCachesFigCaptureSourceConfigurationChanges:(char)arg1 ;
-(char)cachesFigCaptureSourceConfigurationChanges;
-(void)_setVideoHDREnabled:(char)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(char)isLensStabilizationSupported;
-(char)isMachineReadableCodeDetectionSupported;
-(char)isInUseByAnotherApplication;
-(char)isActiveVideoMaxFrameDurationSet;
-(OpaqueCMClockRef)deviceClock;
-(char)_isFlashScene;
-(char)isFlashSceneDetectedForPhotoOutput;
-(void)_setFlashSceneDetectionEnabled:(char)arg1 ;
-(char)isAutoFocusRangeRestrictionSupported;
-(int)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(int)arg1 ;
-(char)isLockingFocusWithCustomLensPositionSupported;
-(float)lensAperture;
-(SCD_Struct_AV2)exposureDuration;
-(float)ISO;
-(float)ISODigitalThreshold;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV2)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)exposureTargetOffset;
-(int)whiteBalanceMode;
-(char)isAdjustingWhiteBalance;
-(SCD_Struct_AV42)deviceWhiteBalanceGains;
-(SCD_Struct_AV42)grayWorldDeviceWhiteBalanceGains;
-(float)maxWhiteBalanceGain;
-(char)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV42)deviceWhiteBalanceGainsForChromaticityValues:(CGSize)arg1 ;
-(CGSize)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV42)deviceWhiteBalanceGainsForTemperatureAndTintValues:(CGSize)arg1 ;
-(char)automaticallyAdjustsImageControlMode;
-(int)imageControlMode;
-(char)automaticallyAdjustsVideoHDREnabled;
-(char)isVideoHDREnabled;
-(char)isWideColorSupported;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(char)isRampingVideoZoom;
-(float)minAvailableVideoZoomFactor;
-(char)isRawStillImageCaptureSupported;
-(char)isLowLightBoostEnabled;
-(char)automaticallyEnablesLowLightBoostWhenAvailable;
-(int)shallowDepthOfFieldEffectStatus;
-(id)supportedMetadataObjectIdentifiers;
-(char)eyeDetectionEnabled;
-(char)eyeClosedDetectionEnabled;
-(char)smileDetectionEnabled;
-(id)availableBoxedMetadataFormatDescriptions;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV34)maxH264PhotoDimensions;
-(SCD_Struct_AV34)maxH264VideoDimensions;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(int)minMacroblocksForHighProfileAbove30fps;
-(char)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(id)_copyFormatsArray;
-(void)_incrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_decrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_updateFigCaptureSourceObserverCounts;
-(long)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 ;
-(void)_drainManualControlRequestQueues;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)_setActiveFormat:(id)arg1 resetVideoZoomFactorAndMinMaxFrameDurations:(char)arg2 ;
-(void)_setShallowDepthOfFieldEffectStatus:(int)arg1 ;
-(long)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 cacheOnly:(char)arg3 ;
-(long)_setActiveVideoMaxFrameDurationInternal:(SCD_Struct_AV2)arg1 ;
-(long)_setActiveVideoMinFrameDurationInternal:(SCD_Struct_AV2)arg1 ;
-(long)_setFocusWithMode:(int)arg1 lensPosition:(float)arg2 requestID:(int)arg3 ;
-(char)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1 ;
-(void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2 ;
-(long)_setExposureWithMode:(int)arg1 duration:(SCD_Struct_AV2)arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(SCD_Struct_AV2*)arg5 ;
-(long)_setWhiteBalanceWithMode:(int)arg1 gains:(SCD_Struct_AV42)arg2 requestID:(int)arg3 ;
-(char)_ensureWhiteBalanceCalibrationUnpacked;
-(double)_whiteBalanceMixingFactorForTemperature:(double)arg1 ;
-(double)_predictedTempForGains:(SCD_Struct_AV42)arg1 ;
-(CGSize)_chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 atMix:(double)arg2 ;
-(SCD_Struct_AV42)_deviceWhiteBalanceGainsForChromaticityValues:(CGSize)arg1 temperature:(double)arg2 ;
-(long)_setTorchMode:(int)arg1 withLevel:(float)arg2 ;
-(void)_rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 duration:(double)arg3 rampType:(int)arg4 ;
-(void)_setVideoZoomFactor:(float)arg1 ;
-(id)_supportedOptionalFaceDetectionFeaturesDictionary;
-(long)_setFaceDetectionFeatureEnabled:(char)arg1 enabledState:(char*)arg2 ;
-(id)_faceDetectionConfigurationDictionary;
-(void)_restoreFigCaptureSourceProperties;
-(void)_setAdjustingFocus:(char)arg1 ;
-(void)_setAdjustingExposure:(char)arg1 ;
-(void)_setAdjustingWhiteBalance:(char)arg1 ;
-(void)_setFlashSceneDetectedForPhotoOutput:(char)arg1 ;
-(void)_setTorchLevel:(float)arg1 ;
-(void)_setImageControlMode:(int)arg1 ;
-(void)_setHighDynamicRangeScene:(char)arg1 ;
-(void)_setIsStillImageStabilizationScene:(char)arg1 ;
-(void)_setLowLightBoostEnabled:(char)arg1 ;
-(void)_setBravoCameraSelectionBehavior:(id)arg1 ;
-(void)_setMinAvailableVideoZoomFactor:(float)arg1 ;
-(void)_drainManualControlRequestQueue:(id)arg1 ;
-(int)_orderInDevicesArray;
-(double)_whiteBalanceTemperatureForMixingFactor:(double)arg1 ;
-(char)_isWBSeedEnabled;
-(void)_setWBSeedEnabled:(char)arg1 ;
-(unsigned long)_wbTemperatureIterations;
-(char)isStillImageStabilizationScene;
-(char)_isStillImageStabilizationScene;
-(float)videoZoomRampAcceleration;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(char)videoZoomDrawOverlay;
-(void)setVideoZoomDrawOverlay:(char)arg1 ;
-(int)videoZoomDownscaleStageHint;
-(void)setVideoZoomDownscaleStageHint:(int)arg1 ;
-(int)videoZoomUpscaleStageHint;
-(void)setVideoZoomUpscaleStageHint:(int)arg1 ;
-(char)isSISSupported;
-(id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(unsigned long)arg2 ;
-(char)isConnected;
-(id)uniqueID;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(char)isVideoStabilizationSupported;
-(char)hasFlash;
-(char)lockForConfiguration:(id*)arg1 ;
-(char)isFlashModeSupported:(int)arg1 ;
-(void)setFlashMode:(int)arg1 ;
-(void)unlockForConfiguration;
-(char)hasTorch;
-(char)isTorchModeSupported:(int)arg1 ;
-(void)setTorchMode:(int)arg1 ;
-(char)isFocusModeSupported:(int)arg1 ;
-(void)setFocusMode:(int)arg1 ;
-(char)isAutoShallowDepthOfFieldEffectEnabled;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 ;
-(id)activeFormat;
-(int)flashMode;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(id)bravoCameraSelectionBehavior;
-(void)setAutoShallowDepthOfFieldEffectEnabled:(char)arg1 ;
-(int)exposureMode;
-(char)isAdjustingExposure;
-(float)exposureTargetBias;
-(SCD_Struct_AV2)activeVideoMaxFrameDuration;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(float)torchLevel;
-(int)torchMode;
-(char)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(int)focusMode;
-(char)isSmoothAutoFocusEnabled;
-(char)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(char)isTorchActive;
-(char)isFlashActive;
-(char)isTorchAvailable;
-(char)isFlashAvailable;
-(float)videoZoomFactor;
-(void)setActiveFormat:(id)arg1 ;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(char)arg1 ;
-(void)setVideoHDREnabled:(char)arg1 ;
-(int)activeColorSpace;
-(void)setActiveColorSpace:(int)arg1 ;
-(void)setAutomaticallyAdjustsImageControlMode:(char)arg1 ;
-(char)isImageControlModeSupported:(int)arg1 ;
-(void)setImageControlMode:(int)arg1 ;
-(char)isFaceDetectionSupported;
-(char)isFaceDetectionDuringVideoPreviewSupported;
-(char)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(char)arg1 ;
-(char)hasMediaType:(id)arg1 ;
-(id)formats;
-(float)lensPosition;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isSmoothAutoFocusSupported;
-(void)setSubjectAreaChangeMonitoringEnabled:(char)arg1 ;
-(char)isAdjustingFocus;
-(char)isHighDynamicRangeScene;
-(void)_setFlashActive:(char)arg1 ;
-(void)_setTorchActive:(char)arg1 ;
-(void)_setFlashAvailable:(char)arg1 ;
-(void)_setTorchAvailable:(char)arg1 ;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(char)isExposureModeSupported:(int)arg1 ;
-(void)setExposureMode:(int)arg1 ;
-(char)isEyeDetectionSupported;
-(char)isEyeClosedDetectionSupported;
-(void)setEyeDetectionEnabled:(char)arg1 ;
-(void)setEyeClosedDetectionEnabled:(char)arg1 ;
-(char)isSmileDetectionSupported;
-(void)setSmileDetectionEnabled:(char)arg1 ;
-(char)isLowLightBoostSupported;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg1 ;
-(char)isHighDynamicRangeSceneDetectionSupported;
-(char)isHDRSupported;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(void)setSmoothAutoFocusEnabled:(char)arg1 ;
-(char)isWhiteBalanceModeSupported:(int)arg1 ;
-(void)setWhiteBalanceMode:(int)arg1 ;
-(char)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(void)setVideoZoomFactor:(float)arg1 ;
-(SCD_Struct_AV2)activeVideoMinFrameDuration;
-(char)isLockedForConfiguration;
-(void)cancelVideoZoomRamp;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHighDynamicRangeSceneDetectionEnabled:(char)arg1 ;
-(id)deviceType;
@end

