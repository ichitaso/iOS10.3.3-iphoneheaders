/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	float _exposureTargetBias;

}

@property (readonly) float exposureTargetBias;              //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
+(id)autoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(id)description;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(float)exposureTargetBias;
@end

