/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSArray, NSNumber;

@interface RAWConvert : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSArray* inputNeutral;
	NSNumber* inputRange;
	NSNumber* inputFactor;
	NSNumber* inputCalibrationIlluminant1;
	NSNumber* inputCalibrationIlluminant2;
	NSArray* inputXYZtoCamera1;
	NSArray* inputXYZtoCamera2;
	NSArray* inputCameraCalibration1;
	NSArray* inputCameraCalibration2;
	NSArray* inputReduction1;
	NSArray* inputReduction2;
	NSArray* inputForwardMatrix1;
	NSArray* inputForwardMatrix2;
	NSNumber* inputShouldUseForwardMatrix;
	NSNumber* inputShouldRecoverHighlights;
	NSNumber* inputShouldLinearize;

}

@property (nonatomic,readonly) CCameraProfile* cameraProfile; 
+(id)customAttributes;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)customAttributes;
-(void)setInputNeutral:(id)arg1 ;
-(id)outputImage;
-(id)outputMatrix;
-(CWhitePoint)neutralWhitePointWithProfile:(CCameraProfile*)arg1 ;
-(CMatrix*)matrixFromArray:(id)arg1 rowCount:(unsigned)arg2 columnCount:(unsigned)arg3 ;
-(id)inputNeutralXY;
-(id)blendFactor;
-(CCameraProfile*)cameraProfile;
@end

