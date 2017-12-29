/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class BuddyRoundedRectImageView, UILabel, UIButton, NSString, UIColor;

@interface BuddyAppleIDTableHeaderView : UIView {

	float _calculatedHeight;
	BuddyRoundedRectImageView* _iconView;
	char _topIconHasRoundedCorners;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	float _linkButtonTopPadding;
	UIButton* _linkButton;
	NSString* _topIconName;
	UIColor* _topIconTintColor;
	CGSize _iconSize;

}

@property (nonatomic,readonly) UILabel * textLabel;                      //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;                //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (assign,nonatomic) float linkButtonTopPadding;                 //@synthesize linkButtonTopPadding=_linkButtonTopPadding - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                            //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) float bottomPadding; 
@property (assign,nonatomic) float leftPadding; 
@property (assign,nonatomic) float rightPadding; 
@property (nonatomic,readonly) UIButton * linkButton;                    //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,copy) NSString * linkButtonTitle; 
@property (nonatomic,copy) NSString * topIconName;                       //@synthesize topIconName=_topIconName - In the implementation block
@property (assign,nonatomic) char topIconHasRoundedCorners;              //@synthesize topIconHasRoundedCorners=_topIconHasRoundedCorners - In the implementation block
@property (nonatomic,retain) UIColor * topIconTintColor;                 //@synthesize topIconTintColor=_topIconTintColor - In the implementation block
+(id)defaultTitleTextAttributes;
+(id)defaultDetailTextAttributes;
+(void)initialize;
-(void)setLinkButtonTopPadding:(float)arg1 ;
-(NSString *)topIconName;
-(void)setLinkButtonTitle:(NSString *)arg1 ;
-(void)_getHeight:(float*)arg1 forWidth:(float)arg2 shouldLayoutViews:(char)arg3 ;
-(void)setTopIconName:(NSString *)arg1 ;
-(void)setTopIconHasRoundedCorners:(char)arg1 ;
-(float)linkButtonTopPadding;
-(char)topIconHasRoundedCorners;
-(UIColor *)topIconTintColor;
-(void)setTopIconTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setRightPadding:(float)arg1 ;
-(float)rightPadding;
-(void)setLeftPadding:(float)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(float)bottomPadding;
-(CGSize)iconSize;
-(float)leftPadding;
-(NSString *)linkButtonTitle;
-(UIButton *)linkButton;
-(void)setBottomPadding:(float)arg1 ;
@end

