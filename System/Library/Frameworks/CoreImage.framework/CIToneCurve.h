/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CIToneCurve : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIVector* inputPoint2;
	CIVector* inputPoint3;
	CIVector* inputPoint4;
	CIImage* _curveImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) CIVector * inputPoint0; 
@property (nonatomic,copy) CIVector * inputPoint1; 
@property (nonatomic,copy) CIVector * inputPoint2; 
@property (nonatomic,copy) CIVector * inputPoint3; 
@property (nonatomic,copy) CIVector * inputPoint4; 
+(id)customAttributes;
+(id)curveImageFromPoints:(const CGPoint*)arg1 ;
+(void)splineCurveTable:(float*)arg1 tableSize:(int)arg2 gamma:(float)arg3 from:(const CGPoint*)arg4 ;
+(id)curveImageFromPoints:(const CGPoint*)arg1 linear:(char)arg2 ;
-(char)_isIdentity;
-(CIVector *)inputPoint0;
-(CIVector *)inputPoint1;
-(id)_kernel16;
-(void)setInputPoint0:(CIVector *)arg1 ;
-(void)setInputPoint1:(CIVector *)arg1 ;
-(void)setInputPoint2:(CIVector *)arg1 ;
-(void)setInputPoint3:(CIVector *)arg1 ;
-(void)setInputPoint4:(CIVector *)arg1 ;
-(CIVector *)inputPoint2;
-(CIVector *)inputPoint3;
-(CIVector *)inputPoint4;
-(void)dealloc;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end
