/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBDateLabelDelegate.h>

@protocol NCNotificationDateLabel;
@class NSAttributedString, UIImage, UILabel, NSString;

@interface SBDefaultBannerTextView : UIView <SBDateLabelDelegate> {

	NSAttributedString* _primaryTextAttributedString;
	NSAttributedString* _primaryTextAttributedStringComponent;
	UIImage* _primaryTextAccessoryImageComponent;
	NSAttributedString* _subtitleTextAttributedString;
	NSAttributedString* _secondaryTextAttributedString;
	NSAttributedString* _alternateSecondaryTextAttributedString;
	UILabel*<NCNotificationDateLabel> _relevanceDateLabel;
	float _secondaryTextAlpha;
	float _alternateSecondaryTextAlpha;

}

@property (nonatomic,copy) NSAttributedString * subtitleTextAttributedString;                        //@synthesize subtitleTextAttributedString=_subtitleTextAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * secondaryTextAttributedString;                       //@synthesize secondaryTextAttributedString=_secondaryTextAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * alternateSecondaryTextAttributedString;              //@synthesize alternateSecondaryTextAttributedString=_alternateSecondaryTextAttributedString - In the implementation block
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,retain) UIImage * primaryTextAccessoryImage; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * alternateSecondaryText; 
@property (nonatomic,readonly) UILabel * relevanceDateLabel;                                         //@synthesize relevanceDateLabel=_relevanceDateLabel - In the implementation block
+(id)_defaultRelevanceDateFont;
+(id)_secondaryItalicTextFont;
+(id)_primaryTextFont;
+(id)_secondaryTextFont;
-(UILabel *)relevanceDateLabel;
-(void)setSecondaryTextAlpha:(float)arg1 ;
-(void)setPrimaryTextAccessoryImage:(UIImage *)arg1 ;
-(void)setSecondaryText:(id)arg1 italicized:(char)arg2 ;
-(void)setAlternateSecondaryText:(NSString *)arg1 ;
-(void)setAlternateSecondaryText:(id)arg1 italicized:(char)arg2 ;
-(void)setAlternateSecondaryTextAlpha:(float)arg1 ;
-(char)textWillWrapForWidth:(float)arg1 ;
-(void)_invalidatePrimaryTextAttributedString;
-(id)_attributedStringForSecondaryText:(id)arg1 italicized:(char)arg2 ;
-(void)setSubtitleTextAttributedString:(NSAttributedString *)arg1 ;
-(void)setSecondaryTextAttributedString:(NSAttributedString *)arg1 ;
-(void)setAlternateSecondaryTextAttributedString:(NSAttributedString *)arg1 ;
-(CGRect)_primaryTextRectForBounds:(CGRect)arg1 ;
-(CGRect)_subtitleTextRectForBounds:(CGRect)arg1 attributedString:(id)arg2 ;
-(float)_primaryTextBaselineForBounds:(CGRect)arg1 ;
-(CGSize)_primaryTextSizeForBounds:(CGRect)arg1 ;
-(float)_subtitleTextOriginYForBounds:(CGRect)arg1 ;
-(float)_secondaryTextOriginYForBounds:(CGRect)arg1 ;
-(CGRect)_secondaryTextRectForBounds:(CGRect)arg1 attributedString:(id)arg2 ;
-(id)_primaryTextAttributedString;
-(char)_hasSecondaryText;
-(CGRect)_maximumSecondaryTextRectForBounds:(CGRect)arg1 ;
-(UIImage *)primaryTextAccessoryImage;
-(NSString *)alternateSecondaryText;
-(char)_isItalicizedAttributedString:(id)arg1 ;
-(NSAttributedString *)subtitleTextAttributedString;
-(NSAttributedString *)secondaryTextAttributedString;
-(NSAttributedString *)alternateSecondaryTextAttributedString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)setRelevanceDate:(id)arg1 ;
-(void)dateLabelDidChange:(id)arg1 ;
-(NSString *)primaryText;
-(NSString *)subtitleText;
@end

