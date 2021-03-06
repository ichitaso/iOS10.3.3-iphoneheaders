/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIThemeGradientDrawing.h>

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

	id gradientEvaluator;
	CGFunctionRef colorShader;
	CGColorSpaceRef colorSpace;
	CGImageRef _gradientImage;

}
-(id)colorStops;
-(id)opacityStops;
-(float)smoothingCoefficient;
-(char)isDithered;
-(void)drawInRect:(CGRect)arg1 angle:(float)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawRadialGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawAngleGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(psdGradientColor)_psdGradientColorWithColor:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(float)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 dither:(char)arg10 ;
-(id)_psdGradientColorStopsWithColors:(id)arg1 locations:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)_psdGradientOpacityStopsWithOpacities:(id)arg1 locations:(id)arg2 ;
-(id)_initWithGradientEvaluator:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)_colorFromPSDGradientColor:(psdGradientColor)arg1 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned)arg3 withContext:(CGContextRef)arg4 ;
-(CGImageRef)_createRadialGradientImageWithWidth:(float)arg1 height:(float)arg2 ;
-(CGFunctionRef)_newColorShaderForDistance:(float)arg1 ;
-(CGFunctionRef)colorShader;
-(id)interpolatedColorAtLocation:(float)arg1 ;
-(void)drawInRect:(CGRect)arg1 angle:(float)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(float)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 ;
-(id)colorLocations;
-(id)opacityLocations;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned)arg3 ;
-(void)dealloc;
-(id)fillColor;
-(int)blendMode;
@end

