/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, PHRingHighlightView, UIColor;

@interface PHBottomBarButton : UIButton {

	UIView* _overlayView;
	PHRingHighlightView* _ringView;
	char _usesSmallerFontSize;
	int _orientation;
	UIColor* _originalBackgroundColor;
	CGSize _buttonSize;

}

@property (nonatomic,retain) UIColor * originalBackgroundColor;              //@synthesize originalBackgroundColor=_originalBackgroundColor - In the implementation block
@property (assign,nonatomic) CGSize buttonSize;                              //@synthesize buttonSize=_buttonSize - In the implementation block
@property (assign,nonatomic) int orientation;                                //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) char usesSmallerFontSize;                       //@synthesize usesSmallerFontSize=_usesSmallerFontSize - In the implementation block
+(float)defaultHeight;
+(id)defaultFont;
+(float)defaultWidth;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(id)arg3 ;
-(void)configureForCancelAction;
-(id)newOverlayView;
-(void)setOriginalBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)originalBackgroundColor;
-(void)setUsesSmallerFontSize:(char)arg1 ;
-(char)usesSmallerFontSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(id)initWithAction:(int)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setButtonSize:(CGSize)arg1 ;
-(CGSize)buttonSize;
@end

