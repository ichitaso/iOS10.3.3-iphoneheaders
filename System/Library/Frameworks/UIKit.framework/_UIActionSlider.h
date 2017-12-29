/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIActionSliderLabel, _UIActionSliderDelegate;
@class UIView, _UIBackdropView, _UIActionSliderKnob, UIImageView, UIPanGestureRecognizer, NSString, UIFont, _UIVibrantSettings, UIImage, UIColor, UILabel, UIBezierPath;

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate> {

	UIView* _contentView;
	UIView* _trackDodgeView;
	UIView* _trackBackgroundView;
	_UIBackdropView* _trackBlurView;
	UIView* _trackSolidView;
	_UIActionSliderKnob* _knobView;
	UIImageView* _knobImageView;
	UIView*<_UIActionSliderLabel> _trackLabel;
	UIPanGestureRecognizer* _slideGestureRecognizer;
	CGPoint _slideGestureInitialPoint;
	float _knobPosition;
	float _trackWidthProportion;
	char _showingTrackLabel;
	char _animating;
	int _style;
	int _textStyle;
	NSString* _trackText;
	UIFont* _trackFont;
	float _trackTextBaselineFromBottom;
	id<_UIActionSliderDelegate> _delegate;
	float _knobWidth;
	float _cachedTrackMaskWidth;
	_UIVibrantSettings* _vibrantSettings;
	CGSize _knobImageOffset;
	CGSize _trackSize;
	UIEdgeInsets _knobInsets;

}

@property (assign,nonatomic) float trackWidthProportion;                                     //@synthesize trackWidthProportion=_trackWidthProportion - In the implementation block
@property (assign,getter=isShowingTrackLabel,nonatomic) char showingTrackLabel;              //@synthesize showingTrackLabel=_showingTrackLabel - In the implementation block
@property (assign,getter=isAnimating,nonatomic) char animating;                              //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) float cachedTrackMaskWidth;                                     //@synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth - In the implementation block
@property (getter=_knobView,nonatomic,readonly) UIView * knobView;                           //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) _UIVibrantSettings * vibrantSettings;                           //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (assign,nonatomic) int style;                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int textStyle;                                                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIImage * knobImage; 
@property (nonatomic,retain) UIColor * knobColor; 
@property (assign,nonatomic) CGSize knobImageOffset;                                         //@synthesize knobImageOffset=_knobImageOffset - In the implementation block
@property (nonatomic,copy) NSString * trackText;                                             //@synthesize trackText=_trackText - In the implementation block
@property (nonatomic,retain) UIFont * trackFont;                                             //@synthesize trackFont=_trackFont - In the implementation block
@property (assign,nonatomic) CGSize trackSize;                                               //@synthesize trackSize=_trackSize - In the implementation block
@property (assign,nonatomic) float trackTextBaselineFromBottom;                              //@synthesize trackTextBaselineFromBottom=_trackTextBaselineFromBottom - In the implementation block
@property (nonatomic,readonly) CGRect trackTextRect; 
@property (nonatomic,retain,readonly) UILabel * trackLabel; 
@property (nonatomic,readonly) UIPanGestureRecognizer * slideGestureRecognizer;              //@synthesize slideGestureRecognizer=_slideGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<_UIActionSliderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float knobPosition;                                             //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,nonatomic) float knobWidth;                                                //@synthesize knobWidth=_knobWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets knobInsets;                                        //@synthesize knobInsets=_knobInsets - In the implementation block
@property (nonatomic,readonly) CGRect knobRect; 
@property (nonatomic,readonly) UIBezierPath * knobMaskPath; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<_UIActionSliderDelegate>)arg1 ;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<_UIActionSliderDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(int)style;
-(void)didMoveToSuperview;
-(void)setStyle:(int)arg1 ;
-(char)isAnimating;
-(void)setAnimating:(char)arg1 ;
-(_UIVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_UIVibrantSettings *)arg1 ;
-(int)textStyle;
-(id)_knobView;
-(UIColor *)knobColor;
-(void)setKnobColor:(UIColor *)arg1 ;
-(void)_knobPanGesture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2 ;
-(void)setCachedTrackMaskWidth:(float)arg1 ;
-(CGRect)knobRect;
-(void)_makeTrackLabel;
-(float)_knobWidth;
-(float)_knobHorizontalPosition;
-(float)_knobVerticalInset;
-(CGRect)_trackFrame;
-(float)_knobMinXInset;
-(NSString *)trackText;
-(float)trackTextBaselineFromBottom;
-(CGSize)trackSize;
-(void)_hideTrackLabel:(char)arg1 ;
-(void)setTrackWidthProportion:(float)arg1 ;
-(void)_showTrackLabel;
-(void)updateAllTrackMasks;
-(float)knobWidth;
-(UIEdgeInsets)knobInsets;
-(float)_knobAvailableX;
-(float)_knobMinX;
-(float)_knobLeftMostX;
-(float)_knobRightMostX;
-(float)_knobMaxXInset;
-(float)_knobMaxX;
-(float)trackWidthProportion;
-(UIFont *)trackFont;
-(float)cachedTrackMaskWidth;
-(CGRect)trackTextRect;
-(id)trackMaskPath;
-(void)setMaskPath:(CGPathRef)arg1 onView:(id)arg2 ;
-(id)trackMaskImage;
-(void)setMaskFromImage:(id)arg1 onView:(id)arg2 ;
-(char)isShowingTrackLabel;
-(void)setShowingTrackLabel:(char)arg1 ;
-(void)setKnobPosition:(float)arg1 ;
-(char)shouldHideTrackLabelForXPoint:(float)arg1 ;
-(char)xPointIsWithinTrack:(float)arg1 ;
-(void)_slideCompleted:(char)arg1 ;
-(UIBezierPath *)knobMaskPath;
-(UIImage *)knobImage;
-(void)setKnobImage:(UIImage *)arg1 ;
-(void)setKnobImageOffset:(CGSize)arg1 ;
-(void)setTrackText:(NSString *)arg1 ;
-(void)setTrackFont:(UIFont *)arg1 ;
-(void)setTrackSize:(CGSize)arg1 ;
-(UILabel *)trackLabel;
-(void)setKnobWidth:(float)arg1 ;
-(void)setKnobInsets:(UIEdgeInsets)arg1 ;
-(void)openTrackAnimated:(char)arg1 ;
-(void)closeTrackAnimated:(char)arg1 ;
-(void)setTextStyle:(int)arg1 ;
-(CGSize)knobImageOffset;
-(void)setTrackTextBaselineFromBottom:(float)arg1 ;
-(UIPanGestureRecognizer *)slideGestureRecognizer;
-(float)knobPosition;
@end

