/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {

	char _disabled;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	float _lineWidth;
	float _cornerRadius;

}

@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) float lineWidth;                    //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) float cornerRadius;                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)setEnabled:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(char)arg2 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)_strokeColor:(char)arg1 ;
-(UIColor *)strokeColor;
-(id)_fillColor:(char)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 active:(char)arg2 lineWidth:(float)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 active:(char)arg2 lineWidth:(float)arg3 updateView:(char)arg4 ;
-(void)updateView;
@end

