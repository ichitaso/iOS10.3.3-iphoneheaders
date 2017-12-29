/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface _ASPurchasedCellContentView : UIView {

	UILabel* _subtitleLabel;
	UILabel* _subtitle2Label;
	UILabel* _restrictionsLabel;
	UILabel* _titleLabel;
	NSString* _text;

}

@property (nonatomic,retain) UILabel * subtitleLabel;                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitle2Label;                   //@synthesize subtitle2Label=_subtitle2Label - In the implementation block
@property (nonatomic,retain) UILabel * restrictionsLabel;                //@synthesize restrictionsLabel=_restrictionsLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * subtitle2; 
@property (nonatomic,readonly) NSString * restrictionsText; 
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * title; 
-(NSString *)restrictionsText;
-(void)setRestrictionsLabel:(UILabel *)arg1 ;
-(UILabel *)restrictionsLabel;
-(UILabel *)subtitle2Label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(UILabel *)titleLabel;
-(NSString *)subtitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitle2Label:(UILabel *)arg1 ;
-(NSString *)subtitle2;
@end

