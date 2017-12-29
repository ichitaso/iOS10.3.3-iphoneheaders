/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIView, CATextLayer, NSMutableArray, WeekPaletteTappableDay;

@interface PaletteWeekdayHeaderView : UIView {

	UIFont* _weekdaysFont;
	UIView* _weekdayView;
	CATextLayer* _goalsLabel;
	NSMutableArray* _weekdayLabels;
	WeekPaletteTappableDay* _highlightedDay;
	WeekPaletteTappableDay* _markedAsTodayDay;
	UIView* _bottomBorder;
	char _isExpanded;
	char _minimized;
	float _transitionPercent;

}

@property (assign,nonatomic) char isExpanded;                      //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) char minimized;                       //@synthesize minimized=_minimized - In the implementation block
@property (assign,nonatomic) float transitionPercent;              //@synthesize transitionPercent=_transitionPercent - In the implementation block
-(void)transitionPercent:(float)arg1 final:(char)arg2 ;
-(void)highlightWeekdayLabelForDateAndSetDay:(id)arg1 ;
-(char)minimized;
-(float)transitionPercent;
-(void)setTransitionPercent:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)isExpanded;
-(void)setIsExpanded:(char)arg1 ;
-(void)setMinimized:(char)arg1 ;
@end

