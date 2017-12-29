/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface UIBezierPath : NSObject <NSCopying, NSCoding> {

	CGPathRef _path;
	float* _lineDashPattern;
	unsigned _lineDashPatternCount;
	float _lineWidth;
	float _miterLimit;
	float _flatness;
	float _lineDashPhase;
	int _lineCapStyle;
	int _lineJoinStyle;
	char _usesEvenOddFillRule;
	CGPathRef _immutablePath;
	char _immutablePathIsValid;

}

@property (assign,nonatomic) const CGPathRef CGPath; 
@property (getter=isEmpty,readonly) char empty; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGPoint currentPoint; 
@property (assign,nonatomic) float lineWidth;                       //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCapStyle;                      //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) int lineJoinStyle;                     //@synthesize lineJoinStyle=_lineJoinStyle - In the implementation block
@property (assign,nonatomic) float miterLimit;                      //@synthesize miterLimit=_miterLimit - In the implementation block
@property (assign,nonatomic) float flatness;                        //@synthesize flatness=_flatness - In the implementation block
@property (assign,nonatomic) char usesEvenOddFillRule;              //@synthesize usesEvenOddFillRule=_usesEvenOddFillRule - In the implementation block
+(id)bezierPath;
+(id)_bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned)arg2 cornerRadius:(float)arg3 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3 segments:(int)arg4 legacyCorners:(char)arg5 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(CGSize)arg3 segments:(int)arg4 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(char)arg5 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
+(id)_bezierPathWithArcRoundedRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned)arg2 cornerRadii:(CGSize)arg3 ;
+(id)bezierPathWithArcCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(char)arg5 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withTopCornerRadius:(float)arg2 withBottomCornerRadius:(float)arg3 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned)arg2 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 withCornerRadius:(float)arg3 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3 segments:(int)arg4 ;
+(id)_bezierPathWithPillRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
+(id)shadowBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned)arg2 ;
-(id)init;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(CGPathRef)_createMutablePathByDecodingData:(id)arg1 ;
-(id)_initWithCGMutablePath:(CGPathRef)arg1 ;
-(const CGPathRef)CGPath;
-(CGPathRef)_mutablePath;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)addClip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(char)arg5 ;
-(void)appendPath:(id)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(void)setCGPath:(const CGPathRef)arg1 ;
-(char)isEmpty;
-(CGPoint)currentPoint;
-(char)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3 ;
-(void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3 ;
-(void)fill;
-(void)stroke;
-(void)fillWithBlendMode:(int)arg1 alpha:(float)arg2 ;
-(void)strokeWithBlendMode:(int)arg1 alpha:(float)arg2 ;
-(void)_addRoundedCornerWithTrueCorner:(CGPoint)arg1 radius:(CGSize)arg2 corner:(unsigned)arg3 clockwise:(char)arg4 ;
-(CGPathRef)_pathRef;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)clip;
-(void)appendBezierPath:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(char)arg5 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(int)lineCapStyle;
-(void)setLineCapStyle:(int)arg1 ;
-(int)lineJoinStyle;
-(void)setLineJoinStyle:(int)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(float)flatness;
-(void)setFlatness:(float)arg1 ;
-(char)usesEvenOddFillRule;
-(void)setUsesEvenOddFillRule:(char)arg1 ;
@end
