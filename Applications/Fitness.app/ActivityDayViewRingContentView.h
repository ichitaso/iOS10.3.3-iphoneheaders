/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIColor;

@interface ActivityDayViewRingContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UILabel* _totalLabel;

}

@property (nonatomic,retain) UIColor * titleColor; 
-(id)_formattedInteger:(int)arg1 ;
-(void)setTotal:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setValue:(int)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
@end

