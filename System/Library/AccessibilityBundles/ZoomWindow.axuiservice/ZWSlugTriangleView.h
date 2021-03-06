/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface ZWSlugTriangleView : UIView {

	CAShapeLayer* _triangleLayer;
	unsigned _triangle;

}

@property (nonatomic,retain) CAShapeLayer * triangleLayer;              //@synthesize triangleLayer=_triangleLayer - In the implementation block
@property (assign,nonatomic) unsigned triangle;                         //@synthesize triangle=_triangle - In the implementation block
-(void)setTriangle:(unsigned)arg1 ;
-(void)setTriangleLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)triangleLayer;
-(unsigned)triangle;
-(id)initWithTriangle:(unsigned)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end

