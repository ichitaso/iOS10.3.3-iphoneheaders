/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBLayoutElementContainerViewDelegate;
@class SBLayoutElementAdornmentView, UIView, SBOrientationTransformWrapperView, UIGestureRecognizer, UISwipeGestureRecognizer;

@interface SBLayoutElementContainerView : UIView {

	SBLayoutElementAdornmentView* _adornmentView;
	UIView* _contentView;
	SBOrientationTransformWrapperView* _contentWrapperView;
	UIGestureRecognizer* _dismissTapRecognizer;
	UISwipeGestureRecognizer* _dismissSwipeRecognizer;
	id<SBLayoutElementContainerViewDelegate> _delegate;
	char _transitioning;
	int _orientation;
	char _keyboardVisible;
	CGRect _keyboardFrame;
	char _resizing;
	float _pinResizeGrabberHorizontalOffset;

}

@property (assign,getter=isResizing,nonatomic) char resizing;                                                  //@synthesize resizing=_resizing - In the implementation block
@property (nonatomic,retain) UIView * contentView; 
@property (assign,nonatomic,__weak) id<SBLayoutElementContainerViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int dimmingLevel; 
@property (assign,nonatomic) char wantsPinResizeGrabber; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int sideSwitcherGrabberStyle; 
@property (assign,getter=isSideSwitcherGrabberPressed,nonatomic) char sideSwitcherGrabberPressed; 
@property (assign,nonatomic) float pinResizeGrabberHorizontalOffset;                                           //@synthesize pinResizeGrabberHorizontalOffset=_pinResizeGrabberHorizontalOffset - In the implementation block
-(void)setWantsPinResizeGrabber:(char)arg1 ;
-(int)dimmingLevel;
-(void)setDimmingLevel:(int)arg1 ;
-(void)_handleDimmingViewGesture:(id)arg1 ;
-(void)setDimmingLevel:(int)arg1 withPercent:(float)arg2 ;
-(int)sideSwitcherGrabberStyle;
-(void)setSideSwitcherGrabberStyle:(int)arg1 ;
-(char)isSideSwitcherGrabberPressed;
-(void)setSideSwitcherGrabberPressed:(char)arg1 ;
-(void)setResizing:(char)arg1 ;
-(void)updateVibrancyForPinResizeGrabberView;
-(void)_updatePinResizeGrabberVerticalOffsetWithAnimationDuration:(double)arg1 ;
-(char)wantsPinResizeGrabber;
-(void)setPinResizeGrabberHorizontalOffset:(float)arg1 ;
-(CGRect)pinResizeGrabberFrame;
-(void)willBeginResize;
-(void)didEndResize;
-(void)setLayoutElementViewAlpha:(float)arg1 ;
-(id)_contentWrapperView;
-(float)pinResizeGrabberHorizontalOffset;
-(void)setWantsPinResizeGrabber:(char)arg1 withPercent:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setDelegate:(id<SBLayoutElementContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBLayoutElementContainerViewDelegate>)delegate;
-(char)_isTransitioning;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)prepareForReuse;
-(char)isResizing;
-(void)willBeginTransition;
-(void)_keyboardFrameWillChange:(id)arg1 ;
-(void)didEndTransition;
-(unsigned)_supportedOrientations;
@end

