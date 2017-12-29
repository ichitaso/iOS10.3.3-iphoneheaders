/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CIAztecCodeGenerator : CICodeGenerator {

	NSNumber* inputCorrectionLevel;
	NSNumber* inputLayers;
	NSNumber* inputCompactStyle;

}

@property (nonatomic,copy) NSNumber * inputCorrectionLevel; 
@property (nonatomic,copy) NSNumber * inputLayers; 
@property (nonatomic,copy) NSNumber * inputCompactStyle; 
+(id)customAttributes;
-(void)setInputCompactStyle:(NSNumber *)arg1 ;
-(void)setInputCorrectionLevel:(NSNumber *)arg1 ;
-(NSNumber *)inputCompactStyle;
-(NSNumber *)inputCorrectionLevel;
-(void)setInputLayers:(NSNumber *)arg1 ;
-(NSNumber *)inputLayers;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(CGImageRef)outputCGImage;
@end

