/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal, NSDictionary, NSURL, NSArray;

@interface AVCapturePhotoSettings : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) unsigned long rawPhotoPixelFormatType; 
@property (assign,nonatomic) int flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) char autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) char autoDualCameraFusionEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) char highResolutionPhotoEnabled; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned long)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned long)arg1 processedFormat:(id)arg2 ;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
+(long long)uniqueID;
+(id)photoSettings;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)format;
-(id)_description;
-(unsigned long)formatFourCC;
-(unsigned long)rawPhotoPixelFormatType;
-(id)livePhotoMovieFileURLForOriginalPhoto;
-(NSArray *)livePhotoMovieMetadata;
-(id)livePhotoMovieMetadataForOriginalPhoto;
-(unsigned long)shutterSound;
-(unsigned long long)userInitiatedPhotoRequestTime;
-(id)livePhotoContentIdentifier;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned long)arg2 uniqueID:(long long)arg3 exceptionReason:(id*)arg4 ;
-(void)setTurboModeEnabled:(char)arg1 ;
-(void)setLivePhotoContentIdentifier:(id)arg1 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1 ;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(char)isAutoDualCameraFusionEnabled;
-(char)isTurboModeEnabled;
-(char)isAutoStillImageStabilizationEnabled;
-(char)isHighResolutionPhotoEnabled;
-(NSDictionary *)previewPhotoFormat;
-(char)isSquareCropEnabled;
-(char)isAutoBravoImageFusionEnabled;
-(void)setAutoBravoImageFusionEnabled:(char)arg1 ;
-(unsigned long)previewFormatFourCC;
-(CGSize)previewCGSize;
-(long long)uniqueID;
-(void)setFlashMode:(int)arg1 ;
-(char)isAutoShallowDepthOfFieldEffectEnabled;
-(int)flashMode;
-(void)setAutoStillImageStabilizationEnabled:(char)arg1 ;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setOriginalPhotoDeliveryEnabled:(char)arg1 ;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(NSURL *)livePhotoMovieFileURL;
-(void)setHighResolutionPhotoEnabled:(char)arg1 ;
-(void)setAutoShallowDepthOfFieldEffectEnabled:(char)arg1 ;
-(void)setShutterSound:(unsigned long)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(char)arg1 ;
-(void)setSquareCropEnabled:(char)arg1 ;
-(char)isOriginalPhotoDeliveryEnabled;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
-(void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1 ;
@end

