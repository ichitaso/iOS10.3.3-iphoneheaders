/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CINinePartTiled : CIFilter {

	CIImage* inputImage;
	CIVector* inputBreakpoint0;
	CIVector* inputBreakpoint1;
	CIVector* inputGrowAmount;
	NSNumber* inputFlipYTiles;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputBreakpoint0; 
@property (nonatomic,retain) CIVector * inputBreakpoint1; 
@property (nonatomic,retain) CIVector * inputGrowAmount; 
@property (nonatomic,retain) NSNumber * inputFlipYTiles; 
+(id)customAttributes;
-(CIVector *)inputBreakpoint0;
-(void)setInputBreakpoint0:(CIVector *)arg1 ;
-(CIVector *)inputBreakpoint1;
-(void)setInputBreakpoint1:(CIVector *)arg1 ;
-(CIVector *)inputGrowAmount;
-(void)setInputGrowAmount:(CIVector *)arg1 ;
-(id)_kernelAlt;
-(NSNumber *)inputFlipYTiles;
-(void)setInputFlipYTiles:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

