/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <QuartzCore/CALayer.h>

@interface STSProgressArcLayer : CALayer {

	float _radius;
	float _startAngle;
	float _endAngle;
	float _lineWidth;

}

@property (assign,nonatomic) float radius;                  //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) float startAngle;              //@synthesize startAngle=_startAngle - In the implementation block
@property (assign,nonatomic) float endAngle;                //@synthesize endAngle=_endAngle - In the implementation block
@property (assign,nonatomic) float lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
-(id)init;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setStartAngle:(float)arg1 ;
-(float)startAngle;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
-(void)setEndAngle:(float)arg1 ;
-(float)endAngle;
@end
