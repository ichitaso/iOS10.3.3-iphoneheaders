/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, UIView;

@interface ASCategoryCollectionViewCell : UICollectionViewCell {

	char _showChevron;
	char _showIcon;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _bottomBorder;
	UIImageView* _chevronImageView;

}

@property (nonatomic,readonly) UIView * bottomBorder;                       //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,readonly) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) char showChevron;                              //@synthesize showChevron=_showChevron - In the implementation block
@property (assign,nonatomic) char showIcon;                                 //@synthesize showIcon=_showIcon - In the implementation block
+(CGSize)_iconSize;
-(void)setShowChevron:(char)arg1 ;
-(char)showChevron;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(void)_configureSubviews;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
-(UIView *)bottomBorder;
-(UIImageView *)chevronImageView;
@end
