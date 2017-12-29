/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface MFSwipeActionButton : UIButton {

	UIColor* _defaultBackgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                  //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
+(float)buttonWidth;
+(id)titleFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(char)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_allowableContentRectForContentRect:(CGRect)arg1 ;
-(unsigned)_defaultLayoutForHeight:(float)arg1 ;
-(int)_numberOfLinesForTitle:(id)arg1 ;
-(char)_heightDemandsCompactLayout;
-(UIColor *)defaultBackgroundColor;
-(UIColor *)highlightedBackgroundColor;
-(void)mf_setAsSourceForPopoverPresentationController:(id)arg1 ;
@end

