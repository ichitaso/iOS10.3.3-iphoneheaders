/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {

	AVCapturePhotoBracketSettingsInternal* _bracketSettingsInternal;

}

@property (nonatomic,readonly) NSArray * bracketedSettings; 
@property (assign,getter=isLensStabilizationEnabled,nonatomic) char lensStabilizationEnabled; 
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned long)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bracketedSettings;
-(void)setAutoBravoImageFusionEnabled:(char)arg1 ;
-(id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned long)arg2 bracketedSettings:(id)arg3 uniqueID:(long long)arg4 exceptionReason:(id*)arg5 ;
-(char)isLensStabilizationEnabled;
-(void)setLensStabilizationEnabled:(char)arg1 ;
-(void)setFlashMode:(int)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(char)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(void)setOriginalPhotoDeliveryEnabled:(char)arg1 ;
-(void)setLivePhotoMovieFileURL:(id)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(id)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(char)arg1 ;
@end

