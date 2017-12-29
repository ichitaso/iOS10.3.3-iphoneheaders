/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIFont;

@interface _MFExpandableCaptionViewDetailToggleButton : UIButton {

	UILabel* _showDetailsLabel;
	UILabel* _hideDetailsLabel;
	char _detailsVisible;
	UIFont* _font;

}

@property (assign,nonatomic) char detailsVisible;              //@synthesize detailsVisible=_detailsVisible - In the implementation block
@property (nonatomic,retain) UIFont * font;                    //@synthesize font=_font - In the implementation block
-(void)setDetailsVisible:(char)arg1 ;
-(char)detailsVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(void)dealloc;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setContentHorizontalAlignment:(int)arg1 ;
-(UIFont *)font;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
@end

