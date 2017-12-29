/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	CGPoint _reconsideredLockingLocation;
	unsigned _lastLockingAxis : 2;
	unsigned _lockingAxis : 2;
	unsigned _hasParentScrollView : 1;
	unsigned _caughtDeceleratingScrollView : 1;
	unsigned _directionalLockEnabled : 1;
	unsigned _transfersTrackingFromParentScrollView : 1;
	unsigned _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered : 1;
	float _translationScaleFactor;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) char directionalLockEnabled; 
@property (getter=_caughtDeceleratingScrollView,nonatomic,readonly) char caughtDeceleratingScrollView; 
@property (getter=_beganCaughtDeceleratingScrollViewAndMoved,nonatomic,readonly) char beganCaughtDeceleratingScrollViewAndMoved; 
@property (assign,nonatomic) float translationScaleFactor;                                                                                    //@synthesize translationScaleFactor=_translationScaleFactor - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(float)_hysteresis;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setDirectionalLockEnabled:(char)arg1 ;
-(char)isDirectionalLockEnabled;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(char)_beganCaughtDeceleratingScrollViewAndMoved;
-(char)_caughtDeceleratingScrollView;
-(void)_scrollViewDidEndZooming;
-(CADoublePoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CADoublePoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(char)delaysTouchesBegan;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(char)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)setTranslationScaleFactor:(float)arg1 ;
-(char)_canTransferTrackingFromParentPagingScrollView;
-(char)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(char)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
-(float)translationScaleFactor;
@end

