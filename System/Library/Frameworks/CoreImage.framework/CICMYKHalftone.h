/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CICMYKHalftone : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputWidth;
	NSNumber* inputAngle;
	NSNumber* inputSharpness;
	NSNumber* inputGCR;
	NSNumber* inputUCR;

}
+(id)customAttributes;
-(id)_CICMYK_convert;
-(id)_CIWhite;
-(id)_CICMYK_cyan;
-(id)_CICMYK_magenta;
-(id)_CICMYK_yellow;
-(id)_CICMYK_black;
-(id)outputImage;
@end

