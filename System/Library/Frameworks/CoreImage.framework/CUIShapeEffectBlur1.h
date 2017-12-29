/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIShapeEffectBlur1 : CIFilter {

	CIImage* inputImage;
	CIImage* inputFill;
	CIVector* inputOffset;
	NSNumber* inputRadius;
	CIColor* inputGlowColorInner;
	CIColor* inputGlowColorOuter;
	CIColor* inputShadowColorInner;
	CIColor* inputShadowColorOuter;
	NSNumber* inputShadowBlurInner;
	NSNumber* inputShadowBlurOuter;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputFill; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputGlowColorInner; 
@property (nonatomic,retain) CIColor * inputGlowColorOuter; 
@property (nonatomic,retain) CIColor * inputShadowColorInner; 
@property (nonatomic,retain) CIColor * inputShadowColorOuter; 
@property (nonatomic,retain) NSNumber * inputShadowBlurInner; 
@property (nonatomic,retain) NSNumber * inputShadowBlurOuter; 
+(id)customAttributes;
-(id)_kernel;
-(CIVector *)inputOffset;
-(void)setInputOffset:(CIVector *)arg1 ;
-(CIImage *)inputFill;
-(void)setInputFill:(CIImage *)arg1 ;
-(CIColor *)inputGlowColorInner;
-(void)setInputGlowColorInner:(CIColor *)arg1 ;
-(CIColor *)inputGlowColorOuter;
-(void)setInputGlowColorOuter:(CIColor *)arg1 ;
-(CIColor *)inputShadowColorInner;
-(void)setInputShadowColorInner:(CIColor *)arg1 ;
-(CIColor *)inputShadowColorOuter;
-(void)setInputShadowColorOuter:(CIColor *)arg1 ;
-(NSNumber *)inputShadowBlurInner;
-(void)setInputShadowBlurInner:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowBlurOuter;
-(void)setInputShadowBlurOuter:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

