/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface IMPieProgressView : UIView {

	char _fills;
	int _direction;
	float _progress;
	CAShapeLayer* _fill;
	CAShapeLayer* _border;

}

@property (nonatomic,retain) CAShapeLayer * fill;                //@synthesize fill=_fill - In the implementation block
@property (nonatomic,retain) CAShapeLayer * border;              //@synthesize border=_border - In the implementation block
@property (assign,nonatomic) char fills;                         //@synthesize fills=_fills - In the implementation block
@property (assign,nonatomic) int direction;                      //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) float progress;                     //@synthesize progress=_progress - In the implementation block
-(void)updateFillPath;
-(void)setFills:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CAShapeLayer *)fill;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)setProgress:(float)arg1 animated:(char)arg2 ;
-(float)progress;
-(id)shapeLayer;
-(void)setFill:(CAShapeLayer *)arg1 ;
-(char)fills;
-(CAShapeLayer *)border;
-(void)setBorder:(CAShapeLayer *)arg1 ;
@end
