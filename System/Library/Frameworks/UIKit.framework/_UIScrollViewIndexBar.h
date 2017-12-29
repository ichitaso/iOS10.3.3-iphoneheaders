/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSMutableArray, NSArray;

@interface _UIScrollViewIndexBar : UIView {

	UIView* _indicatorView;
	float _preferredIndicatorWidth;
	NSMutableArray* _backgroundLabels;
	NSMutableArray* _foregroundLabels;
	UIView* _foregroundWrapperView;
	UIView* _foregroundMaskView;
	int _deflectedIndex;
	float _deflectionAmount;
	NSArray* _entries;
	int _focusProminence;
	int _style;
	CGPoint _minimumContentOffset;
	CGPoint _maximumContentOffset;

}

@property (nonatomic,copy) NSArray * entries;                           //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) int focusProminence;                       //@synthesize focusProminence=_focusProminence - In the implementation block
@property (assign,nonatomic) CGPoint minimumContentOffset;              //@synthesize minimumContentOffset=_minimumContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint maximumContentOffset;              //@synthesize maximumContentOffset=_maximumContentOffset - In the implementation block
@property (assign,nonatomic) int style;                                 //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(int)style;
-(char)canBecomeFocused;
-(void)setStyle:(int)arg1 ;
-(NSArray *)entries;
-(void)setIndexOfDeflectedEntry:(int)arg1 amount:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setMinimumContentOffset:(CGPoint)arg1 ;
-(void)setMaximumContentOffset:(CGPoint)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(void)resetDeflection:(char)arg1 ;
-(void)setFocusProminence:(int)arg1 ;
-(void)updateForContentOffset:(CGPoint)arg1 ;
-(void)_showNormalFocusProminence;
-(void)_updateColors;
-(id)_foregroundFont;
-(void)_showReducedFocusProminence;
-(float)_indicatorVerticalPositionForContentOffset:(CGPoint)arg1 ;
-(void)_createLabels;
-(id)_indicatorShadowPath;
-(id)_backgroundLabelTextColor;
-(char)_shouldUseDarkAppearance;
-(id)_upperEntryForOffset:(float)arg1 ;
-(id)_lowerEntryForOffset:(float)arg1 ;
-(id)__uiktesting_backgroundLabels;
-(int)focusProminence;
-(CGPoint)minimumContentOffset;
-(CGPoint)maximumContentOffset;
@end

