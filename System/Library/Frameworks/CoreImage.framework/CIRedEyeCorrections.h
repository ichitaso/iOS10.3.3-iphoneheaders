/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSArray* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSArray * inputCorrectionInfo; 
-(char)_isIdentity;
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSArray *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputImage:(CIImage *)arg1 ;
@end

