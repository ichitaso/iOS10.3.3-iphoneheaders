/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIBlendModeFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
+(id)customAttributes;
+(id)_kernel;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(char)_needUnpremuls;
-(CGRect)_extent;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

