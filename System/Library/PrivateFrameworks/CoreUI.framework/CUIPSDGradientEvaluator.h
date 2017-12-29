/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

	NSArray* colorStops;
	NSArray* colorMidpointLocations;
	NSArray* opacityStops;
	NSArray* opacityMidpointLocations;
	float smoothingCoefficient;
	psdGradientColor fillColor;
	int blendMode;
	struct {
		unsigned colorEdgePixel : 2;
		unsigned opacityEdgePixel : 2;
		unsigned isDithered : 1;
		unsigned reserved : 3;
	}  pgeFlags;

}

@property (assign,nonatomic) int blendMode; 
+(void)initialize;
-(id)colorStops;
-(id)colorMidpointLocations;
-(id)opacityStops;
-(id)opacityMidpointLocations;
-(float)smoothingCoefficient;
-(char)isDithered;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(float)arg5 fillColor:(psdGradientColor)arg6 dither:(char)arg7 ;
-(id)_cleanedUpMidpointLocationsFromLocations:(id)arg1 ;
-(void)_createOrderedStops:(id*)arg1 midpoints:(id*)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(int*)arg5 ;
-(float)_smoothedInterpolationOfLocation:(float)arg1 betweenLower:(float)arg2 upper:(float)arg3 scaledMidpoint:(float)arg4 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(float)arg5 fillCoefficient:(float)arg6 ;
-(psdGradientColor)_smoothedGradientColorAtLocation:(float)arg1 ;
-(float)fillCoefficient;
-(char)hasEdgePixel;
-(void)setColorStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setOpacityStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setSmoothingCoefficient:(float)arg1 ;
-(void)setFillCoefficient:(float)arg1 ;
-(void)customizeForDistance:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(psdGradientColor)fillColor;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
@end
