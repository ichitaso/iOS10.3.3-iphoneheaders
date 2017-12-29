/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface QLDocumentInfoView : UIView {

	UILabel* _documentNameLabel;
	UILabel* _documentSizeLabel;
	UIImageView* _iconImageView;

}

@property (nonatomic,retain) UILabel * documentNameLabel;              //@synthesize documentNameLabel=_documentNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * documentSizeLabel;              //@synthesize documentSizeLabel=_documentSizeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(id)_iconImageForDocumentProxy:(id)arg1 ;
-(UILabel *)documentNameLabel;
-(void)setDocumentNameLabel:(UILabel *)arg1 ;
-(UILabel *)documentSizeLabel;
-(void)setDocumentSizeLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)updateWithQuickLookDocument:(id)arg1 ;
@end

