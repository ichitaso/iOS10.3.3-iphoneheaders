/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, SeparatorLayer, NSLayoutConstraint;

@interface _DraftHeaderBlockField : UIView {

	char _separatorDrawsFlushWithTrailingEdge;
	NSString* _prefixString;
	UILabel* _titleLabel;
	SeparatorLayer* _separator;
	NSLayoutConstraint* _separatorTrailing;

}

@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SeparatorLayer * separator;                            //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorTrailing;                //@synthesize separatorTrailing=_separatorTrailing - In the implementation block
@property (nonatomic,copy) NSString * prefixString;                                 //@synthesize prefixString=_prefixString - In the implementation block
@property (assign,nonatomic) char separatorDrawsFlushWithTrailingEdge;              //@synthesize separatorDrawsFlushWithTrailingEdge=_separatorDrawsFlushWithTrailingEdge - In the implementation block
-(void)setSeparatorDrawsFlushWithTrailingEdge:(char)arg1 ;
-(char)separatorDrawsFlushWithTrailingEdge;
-(NSLayoutConstraint *)separatorTrailing;
-(void)setSeparatorTrailing:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)_defaultFont;
-(UILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSeparator:(SeparatorLayer *)arg1 ;
-(SeparatorLayer *)separator;
-(void)_createConstraints;
-(NSString *)prefixString;
-(void)setPrefixString:(NSString *)arg1 ;
-(void)_createViews;
@end

