/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCellReorderControl.h>
#import <UIKit/_UIFloatingContentViewDelegate.h>

@class _UIFloatingContentView, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate> {

	_UIFloatingContentView* _floatingContentView;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _upArrowButtonRecognizer;
	UITapGestureRecognizer* _downArrowButtonRecognizer;
	char _cellHasReorderingAppearance;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned)arg2 ;
-(char)wantsMaskingWhileAnimatingDisabled;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)_updateFloatingViewForCurrentTraits;
-(char)_shouldHandlePressEvent:(id)arg1 ;
-(void)_endIndirectTracking;
-(void)_updateFocusedFloatingContentView:(char)arg1 ;
-(void)_panRecognizer:(id)arg1 ;
-(void)_upArrowButton:(id)arg1 ;
-(void)_downArrowButton:(id)arg1 ;
-(void)_beginIndirectTracking;
-(void)_arrowButton:(int)arg1 ;
@end

