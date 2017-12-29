/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, SKUIItemOfferButton;

@interface SiriMoviesMediaPunchOutView : UIView {

	UILabel* _subtitleLabel;
	SKUIItemOfferButton* _button;

}

@property (nonatomic,readonly) SKUIItemOfferButton * button;              //@synthesize button=_button - In the implementation block
-(void)updateWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SKUIItemOfferButton *)button;
@end

