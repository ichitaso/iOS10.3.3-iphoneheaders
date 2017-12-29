/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPixellate : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(id)_kernel;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

