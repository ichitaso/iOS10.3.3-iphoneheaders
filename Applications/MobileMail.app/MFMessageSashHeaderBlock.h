/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFMessageHeaderViewBlock.h>

@class UILabel, UIImageView, NSLayoutConstraint;

@interface MFMessageSashHeaderBlock : MFMessageHeaderViewBlock {

	UILabel* _titleLabel;
	UIImageView* _iconImageView;
	NSLayoutConstraint* _titleLabelFirstBaseline;

}

@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelFirstBaseline;              //@synthesize titleLabelFirstBaseline=_titleLabelFirstBaseline - In the implementation block
+(id)titleFont;
-(void)createPrimaryViews;
-(void)initializePrimaryLayoutConstraints;
-(void)setDisplayMetrics:(id)arg1 ;
-(void)displayMessage:(id)arg1 ;
-(void)setTitleLabelFirstBaseline:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelFirstBaseline;
-(void)_updateMailboxIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateFonts;
@end

