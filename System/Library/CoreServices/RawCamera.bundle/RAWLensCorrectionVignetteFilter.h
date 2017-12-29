/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : CIFilter {

	CIImage* inputImage;
	NSData* inputVignetteTable;
	NSNumber* inputVignetteAmount;
	id inputColorSpace;
	CIImage* vigImg;

}
+(id)customAttributes;
-(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)outputImage;
-(BOOL)makeMapImages;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

