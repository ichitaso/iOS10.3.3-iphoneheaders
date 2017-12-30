/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface TSUBezierPath : NSObject <NSCopying, NSCoding> {

	int sfr_elementCount;
	int sfr_elementMax;
	PATHSEGMENT* sfr_head;
	float* sfr_elementLength;
	float sfr_totalLength;
	int sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	float sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	float sfr_miterLimit;
	float sfr_flatness;
	float* sfr_dashedLinePattern;
	unsigned sfr_dashedLineCount;
	float sfr_dashedLinePhase;
	void* sfr_path;
	int sfr_extraSegmentCount;
	int sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}

@property (nonatomic,readonly) char isCompound; 
@property (nonatomic,readonly) char isSelfIntersecting; 
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) char isLineSegment; 
@property (nonatomic,readonly) char isEffectivelyClosed; 
@property (nonatomic,readonly) char containsClosePathElement; 
+(id)outlineBezierPath:(id)arg1 ;
+(id)tracedPathForImage:(CGImageRef)arg1 alphaThreshold:(float)arg2 pointSpacing:(float)arg3 ;
+(id)uniteBezierPaths:(id)arg1 ;
+(id)outlineBezierPath:(id)arg1 withThreshold:(float)arg2 ;
+(id)unitePolygonalBezierPaths:(id)arg1 ;
+(id)subtractBezierPaths:(id)arg1 ;
+(id)intersectBezierPaths:(id)arg1 ;
+(id)bezierPathWithConvexHullOfPoints:(CGPoint*)arg1 count:(unsigned long)arg2 ;
+(id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2 ;
+(Path*)p_bezierToPath:(id)arg1 ;
+(id)p_pathToBezier:(Path*)arg1 ;
+(id)excludeBezierPaths:(id)arg1 ;
+(id)appendBezierPaths:(id)arg1 ;
+(id)outsideEdgeOfBezierPath:(id)arg1 ;
+(id)exteriorOfBezierPath:(id)arg1 ;
+(id)smoothBezierPath:(id)arg1 withThreshold:(float)arg2 ;
+(CGRect)p_pathToBounds:(Path*)arg1 ;
+(id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(float)arg2 ;
+(void)initialize;
+(id)bezierPath;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(float)lineWidth;
+(void)setLineWidth:(float)arg1 ;
+(unsigned)lineCapStyle;
+(void)setLineCapStyle:(unsigned)arg1 ;
+(unsigned)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned)arg1 ;
+(float)miterLimit;
+(void)setMiterLimit:(float)arg1 ;
+(float)flatness;
+(void)setFlatness:(float)arg1 ;
+(void)fillRect:(CGRect)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
+(unsigned)windingRule;
+(void)setWindingRule:(unsigned)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(float)arg1 ;
+(float)defaultMiterLimit;
+(void)setDefaultFlatness:(float)arg1 ;
+(float)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned)arg1 ;
+(unsigned)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned)arg1 ;
+(unsigned)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned)arg1 ;
+(unsigned)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(float)arg1 ;
+(float)defaultLineWidth;
-(void)copyPathAttributesTo:(id)arg1 ;
-(void)flattenIntoPath:(id)arg1 flatness:(float)arg2 ;
-(id)bezierPathByFlatteningPathWithFlatness:(float)arg1 ;
-(void)addPathToContext:(CGContextRef)arg1 ;
-(id)outlineStroke;
-(char)intersectsRect:(CGRect)arg1 hasFill:(char)arg2 ;
-(CGRect)boundsIncludingTSDStroke:(id)arg1 ;
-(CGRect)boundsIncludingStroke;
-(char)isLineSegment;
-(float)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned*)arg2 tValue:(float*)arg3 threshold:(float)arg4 ;
-(id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2 ;
-(void)takeAttributesFromStroke:(id)arg1 ;
-(char)isEffectivelyClosed;
-(id)aliasedPathInContext:(CGContextRef)arg1 effectiveStrokeWidth:(float)arg2 ;
-(char)isCompound;
-(float)yValueFromXValue:(float)arg1 elementIndex:(int*)arg2 parametricValue:(float*)arg3 ;
-(CGRect)boundsIncludingStrokeWidth:(float)arg1 joinStyle:(unsigned)arg2 capStyle:(unsigned)arg3 miterLimit:(float)arg4 needsToExtendJoins:(char)arg5 ;
-(char)containsClosePathElement;
-(id)p_aliasedPathInContext:(CGContextRef)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3 ;
-(id)pathBySplittingAtPointOnPath:(CGPoint)arg1 controlPointDistanceEqual:(char)arg2 ;
-(float)yValueFromXValue:(float)arg1 ;
-(void)alignBoundsToOrigin;
-(char)isSelfIntersecting;
-(char)pointOnPath:(CGPoint)arg1 tolerance:(float)arg2 ;
-(CGPoint)pointAlongPathAtPercentage:(float)arg1 ;
-(id)bezierPathByOffsettingPath:(float)arg1 joinStyle:(unsigned)arg2 withThreshold:(float)arg3 ;
-(id)uniteWithPolygonalBezierPath:(id)arg1 ;
-(void)clearStroke:(CGContextRef)arg1 ;
-(id)pathByWobblingByUpTo:(float)arg1 subdivisions:(unsigned)arg2 ;
-(CGPoint)roundPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 strokeWidth:(int)arg3 ;
-(id)bezierPathByFittingCurve:(id)arg1 ;
-(id)bezierPathByFittingCurve;
-(id)init;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(float)length;
-(CGPathRef)CGPath;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addClip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(char)isEmpty;
-(CGPoint)currentPoint;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3 ;
-(void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3 ;
-(void)fill;
-(void)stroke;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(char)arg5 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(unsigned)lineCapStyle;
-(void)setLineCapStyle:(unsigned)arg1 ;
-(unsigned)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(float)flatness;
-(void)setFlatness:(float)arg1 ;
-(CGPoint)pointAt:(float)arg1 ;
-(char)isOpen;
-(id)pressure;
-(void)getStartPoint:(CGPoint*)arg1 andEndPoint:(CGPoint*)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(char)arg3 reversed:(char)arg4 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(int)arg2 t:(float)arg3 toSegment:(int)arg4 t:(float)arg5 withoutMove:(char)arg6 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGSize)arg2 inElementRange:(NSRange)arg3 into:(id)arg4 ;
-(CGPoint)rawGradientAt:(float)arg1 fromElement:(int)arg2 ;
-(int)elementPercentage:(float*)arg1 forOverallPercentage:(float)arg2 ;
-(CGPoint)gradientAt:(float)arg1 fromElement:(int)arg2 ;
-(CGPoint)pointAt:(float)arg1 fromElement:(int)arg2 ;
-(float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2 ;
-(float)curvatureAt:(float)arg1 fromElement:(int)arg2 ;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 betweenElement:(int)arg2 andElement:(int)arg3 withPressure:(id)arg4 getElement:(int*)arg5 getPercentage:(float*)arg6 ;
-(CGPoint)myGradientAt:(float)arg1 fromElement:(int)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 ;
-(void)addIntersectionsWithLine:(CGPoint)arg1 to:(id)arg2 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(int)arg2 toSegment:(int)arg3 ;
-(id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4 ;
-(CGPoint)nearestPointOnPathToLine:(CGPoint)arg1 ;
-(CGPoint)nearestAngleOnPathToLine:(CGPoint)arg1 ;
-(CGPoint)gradientAt:(float)arg1 ;
-(CGPoint)transformedCoordinate:(CGPoint)arg1 withPressure:(id)arg2 ;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 inElement:(int)arg2 withPressure:(id)arg3 ;
-(CGPoint)myGradientAt:(float)arg1 ;
-(float)curvatureAt:(float)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGSize)arg2 into:(id)arg3 ;
-(id)chisel;
-(void)saveToArchive:(Path*)arg1 ;
-(int)elementCount;
-(int)elementAtIndex:(int)arg1 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(float)arg2 swingAngle:(float)arg3 angleType:(int)arg4 startNewPath:(char)arg5 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(char)arg5 ;
-(unsigned)windingRule;
-(void)setWindingRule:(unsigned)arg1 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(char)_isValid:(float)arg1 ;
-(CGPoint)_checkPointForValidity:(CGPoint)arg1 ;
-(void)subdivideBezierWithFlatness:(float)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(char)isFlat;
-(void)flattenIntoPath:(id)arg1 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(int)elementAtIndex:(int)arg1 associatedPoints:(CGPoint*)arg2 ;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(int)arg2 ;
-(void)_doPath;
-(id)bezierPathByRemovingRedundantElements;
-(char)isRectangular;
-(CGRect)controlPointBounds;
-(int)elementAtIndex:(int)arg1 allPoints:(CGPoint*)arg2 ;
-(float)calculateLengthOfElement:(int)arg1 ;
-(void)calculateLengths;
-(void)_appendToPath:(id)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(char)isTriangular;
-(char)isDiamond;
-(char)isCircular;
-(char)isClockwise;
-(float)lengthOfElement:(int)arg1 ;
-(float)lengthToElement:(int)arg1 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(int)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(float)arg3 ;
-(const char*)cString;
-(id)initWithCString:(const char*)arg1 ;
-(void)_addPathSegment:(int)arg1 point:(CGPoint)arg2 ;
-(void)finalize;
-(id)intersectBezierPath:(id)arg1 ;
-(id)subtractBezierPath:(id)arg1 ;
-(id)uniteWithBezierPath:(id)arg1 ;
-(id)initWithArchive:(const Path*)arg1 ;
@end
