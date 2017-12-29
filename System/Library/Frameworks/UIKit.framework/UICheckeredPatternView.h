/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView {

	UIColor* _patternColor;
	float _scale;
	UIColor* _checkerColor;

}

@property (nonatomic,retain) UIColor * checkerColor;              //@synthesize checkerColor=_checkerColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(char)_canDrawContent;
-(void)updatePatternColor;
-(void)setCheckerColor:(UIColor *)arg1 ;
-(UIColor *)checkerColor;
@end
