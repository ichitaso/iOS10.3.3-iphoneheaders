/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

@interface NavTrayHeaderBasicLabelView : UIView {

	NSMutableArray* _defaultLayoutConstraints;
	NSMutableArray* _defaultSteppingLayoutConstraints;
	NSMutableArray* _minimizedLayoutConstraints;
	unsigned _layout;
	UILabel* _label;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) unsigned layout;                      //@synthesize layout=_layout - In the implementation block
-(void)updateTheme;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(unsigned)layout;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setLayout:(unsigned)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupConstraints;
@end

