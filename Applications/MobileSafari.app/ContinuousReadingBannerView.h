/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UIView, ContinuousReadingItem, UILabel, UIImageView, NSString, UIImage;

@interface ContinuousReadingBannerView : UIView {

	UIView* _topHairline;
	UIView* _bottomHairline;
	ContinuousReadingItem* _continuousReadingItem;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _extraTitleLabel;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * extraTitleInfo; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * extraTitleLabel;                                           //@synthesize extraTitleLabel=_extraTitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain,readonly) ContinuousReadingItem * continuousReadingItem;              //@synthesize continuousReadingItem=_continuousReadingItem - In the implementation block
+(id)makeHairlineSeparator;
-(void)_setUpImage;
-(float)_textBaseline;
-(UILabel *)extraTitleLabel;
-(id)_topHairline;
-(id)_bottomHairline;
-(float)_bannerHeight;
-(NSString *)extraTitleInfo;
-(void)setExtraTitleInfo:(NSString *)arg1 ;
-(ContinuousReadingItem *)continuousReadingItem;
-(CGSize)_scaledImageSize;
-(char)_hasExtraLine;
-(id)initWithContinuousReadingItem:(id)arg1 ;
-(void)setExtraTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_updateImage;
-(void)_updateLabels;
@end

