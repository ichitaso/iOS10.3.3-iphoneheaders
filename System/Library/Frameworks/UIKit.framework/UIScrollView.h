/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelayedTouchesBeganGestureRecognizerClient.h>
#import <UIKit/_UIScrollToTopView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIScrollViewLayoutObserver, UIFocusItem;
@class UIImageView, _UIStaticScrollBar, UIView, CADisplayLink, UIScrollViewPinchGestureRecognizer, UIScrollViewDirectionalPressGestureRecognizer, UISwipeGestureRecognizer, UIRefreshControl, _UIFeedbackEdgeBehavior, _UIFeedbackZoomEdgeBehavior, _UIFocusFastScrollingRequest, _UIFocusFastScrollingController, _UIScrollViewIndexBar, NSISVariable, NSArray, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIGestureRecognizer, NSString;

@interface UIScrollView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelayedTouchesBeganGestureRecognizerClient, _UIScrollToTopView, NSCoding> {

	id _delegate;
	CGSize _contentSize;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _contentScrollInset;
	UIImageView* _verticalScrollIndicator;
	UIImageView* _horizontalScrollIndicator;
	_UIStaticScrollBar* _staticScrollBar;
	UIEdgeInsets _scrollIndicatorInset;
	double _startOffsetX;
	double _startOffsetY;
	double _lastUpdateOffsetX;
	double _lastUpdateOffsetY;
	double _lastUpdateTime;
	CGPoint _lastSetContentOffsetUnrounded;
	double _lastOffsetUpdateTimeInterval;
	CGSize _lastOffsetUpdateOffset;
	int _smoothScrollCallbackSkips;
	int _smoothScrollCallbackCurrentSkipCount;
	float _minimumZoomScale;
	float _maximumZoomScale;
	UIView* _zoomView;
	double _horizontalVelocity;
	double _verticalVelocity;
	double _previousHorizontalVelocity;
	double _previousVerticalVelocity;
	CADisplayLink* _scrollHeartbeat;
	CGPoint _pageDecelerationTarget;
	CGSize _decelerationFactor;
	CGPoint _adjustedDecelerationTarget;
	CGSize _adjustedDecelerationFactor;
	double _decelerationLnFactorH;
	double _decelerationLnFactorV;
	id* _shadows;
	id _scrollNotificationViews;
	double _contentOffsetAnimationDuration;
	id _animation;
	id _zoomAnimation;
	UIScrollViewPinchGestureRecognizer* _pinch;
	id _pan;
	id _swipe;
	id _touchDelayGestureRecognizer;
	UIScrollViewDirectionalPressGestureRecognizer* _directionalPressGestureRecognizer;
	UISwipeGestureRecognizer* _lowFidelitySwipeGestureRecognizers[4];
	UIScrollView* _draggingChildScrollView;
	CGPoint _parentAdjustment;
	float _pagingSpringPull;
	float _pagingFriction;
	int _fastScrollCount;
	float _fastScrollMultiplier;
	float _fastScrollStartMultiplier;
	double _fastScrollEndTime;
	CGPoint _rotationCenterPoint;
	float _accuracy;
	unsigned _zoomAnimationCount;
	CGSize _accumulatedOffset;
	int _touchLevel;
	float _savedKeyboardAdjustmentDelta;
	CGSize _interpageSpacing;
	CGPoint _pagingOrigin;
	UIOffset _firstPageOffset;
	UIRefreshControl* _refreshControl;
	UIView* _relativePanView;
	id<_UIScrollViewLayoutObserver> _layoutObserver;
	_UIFeedbackEdgeBehavior* _horizontalFeedbackBehavior;
	_UIFeedbackEdgeBehavior* _verticalFeedbackBehavior;
	_UIFeedbackZoomEdgeBehavior* _zoomFeedbackBehavior;
	UIEdgeInsets _gradientMaskLengths;
	UIEdgeInsets _gradientMaskEdgeInsets;
	_UIFocusFastScrollingRequest* _focusFastScrollingRequest;
	_UIFocusFastScrollingController* _focusFastScrollingController;
	_UIScrollViewIndexBar* _focusFastScrollingIndexBar;
	id<UIFocusItem> _overridingDestinationItemForFocusUpdate;
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned preventScrollingContainer : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indexDisplayMode : 2;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned flashingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned scrollingDirectionalPress : 1;
		unsigned singleFingerPan : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned delegateScrollViewDidChangeContentSize : 1;
		unsigned delegateWasNonNil : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
		unsigned disableContentOffsetRounding : 1;
		unsigned alwaysDisableContentOffsetRounding : 1;
		unsigned adjustedDecelerationTargetX : 1;
		unsigned adjustedDecelerationTargetY : 1;
		unsigned hasScrolled : 1;
		unsigned wantsConstrainedContentSize : 1;
		unsigned constrainedContentSizeNeedsUpdate : 1;
		unsigned updateInsetBottom : 1;
		unsigned beingDraggedByChildScrollView : 1;
		unsigned adjustsTargetsOnContentOffsetChanges : 1;
		unsigned forwardsTouchesUpResponderChain : 1;
		unsigned firstResponderKeyboardAvoidanceDisabled : 1;
		unsigned hasGradientMaskView : 1;
		unsigned interruptingDeceleration : 1;
		unsigned delegateScrollViewAdjustedOffset : 1;
		unsigned disableUpdateOffsetOnCancelTracking : 1;
		unsigned inSetContentOffset : 1;
		unsigned canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayout : 1;
		unsigned needToIncrementScrollBounceStatistic : 1;
		unsigned didSetContentSizeAtLeastOnce : 1;
		unsigned forcingPanGestureToEndImmediately : 1;
		unsigned isPreviewingFocusFastScrolling : 1;
		unsigned isIndicatingFocusFastScrollingDestination : 1;
		unsigned isAttemptingToEndFocusFastScrolling : 1;
		unsigned applicationHasExplicitlySetBounces : 1;
		unsigned needsDecelerationFrameTimeAdjustment : 1;
	}  _scrollViewFlags;
	char _useContentDimensionVariablesForConstraintLowering;
	id _scrollTestParameters;
	int _keyboardDismissMode;
	NSISVariable* _contentWidthVariable;
	NSISVariable* _contentHeightVariable;
	NSArray* _automaticContentConstraints;
	NSArray* __allowedTouchTypesForScrolling;
	CADoublePoint _zoomAnchorPoint;

}

@property (assign,setter=_setAdjustsTargetsOnContentOffsetChanges:,getter=_adjustsTargetsOnContentOffsetChanges,nonatomic) char adjustsTargetsOnContentOffsetChanges; 
@property (assign,setter=_setFirstResponderKeyboardAvoidanceEnabled:,getter=_isFirstResponderKeyboardAvoidanceEnabled,nonatomic) char firstResponderKeyboardAvoidanceEnabled; 
@property (assign,getter=isProgrammaticScrollEnabled,nonatomic) char programmaticScrollEnabled; 
@property (getter=_isScrollingToTop,nonatomic,readonly) char scrollingToTop; 
@property (assign,setter=_setDisableUpdateOffsetOnCancelTracking:,nonatomic) char _disableUpdateOffsetOnCancelTracking; 
@property (setter=_setRefreshControl:,nonatomic,retain) UIRefreshControl * _refreshControl; 
@property (getter=_contentInsetIncludingDecorations,nonatomic,readonly) UIEdgeInsets _contentInsetIncludingDecorations; 
@property (getter=_isAnimatingScroll,nonatomic,readonly) char isAnimatingScroll; 
@property (nonatomic,readonly) _UIStaticScrollBar * _staticScrollBar; 
@property (getter=_isVerticalBouncing,nonatomic,readonly) char isVerticalBouncing; 
@property (getter=_isHorizontalBouncing,nonatomic,readonly) char isHorizontalBouncing; 
@property (getter=_isAnimatingZoom,nonatomic,readonly) char isAnimatingZoom; 
@property (assign,setter=_setZoomAnchorPoint:,getter=_zoomAnchorPoint,nonatomic) CADoublePoint zoomAnchorPoint;                                                                            //@synthesize zoomAnchorPoint=_zoomAnchorPoint - In the implementation block
@property (nonatomic,retain) id scrollTestParameters;                                                                                                                                      //@synthesize scrollTestParameters=_scrollTestParameters - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _contentWidthVariable;                                                                                                                //@synthesize contentWidthVariable=_contentWidthVariable - In the implementation block
@property (nonatomic,retain,readonly) NSISVariable * _contentHeightVariable;                                                                                                               //@synthesize contentHeightVariable=_contentHeightVariable - In the implementation block
@property (assign,setter=_setUseContentDimensionVariablesForConstraintLowering:,nonatomic) char _useContentDimensionVariablesForConstraintLowering;                                        //@synthesize useContentDimensionVariablesForConstraintLowering=_useContentDimensionVariablesForConstraintLowering - In the implementation block
@property (getter=_minimumContentOffset,nonatomic,readonly) CGPoint minimumContentOffset; 
@property (getter=_maximumContentOffset,nonatomic,readonly) CGPoint maximumContentOffset; 
@property (assign,setter=_setForwardsTouchesUpResponderChain:,getter=_forwardsTouchesUpResponderChain,nonatomic) char forwardsTouchesUpResponderChain; 
@property (assign,setter=_setWantsConstrainedContentSize:,nonatomic) char _wantsConstrainedContentSize; 
@property (setter=_setAutomaticContentConstraints:,nonatomic,copy) NSArray * _automaticContentConstraints;                                                                                 //@synthesize automaticContentConstraints=_automaticContentConstraints - In the implementation block
@property (setter=_setAllowedTouchTypesForScrolling:,nonatomic,copy) NSArray * _allowedTouchTypesForScrolling;                                                                             //@synthesize _allowedTouchTypesForScrolling=__allowedTouchTypesForScrolling - In the implementation block
@property (getter=_isFocusFastScrolling,nonatomic,readonly) char focusFastScrolling; 
@property (getter=_isAttemptingToEndFocusFastScrolling,nonatomic,readonly) char attemptingToEndFocusFastScrolling; 
@property (assign,setter=_setShowingFocusFastScrollingPreview:,getter=_isShowingFocusFastScrollingPreview,nonatomic) char showingFocusFastScrollingPreview; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) CGSize contentSize;                                                                                                                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                                                                                    //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> delegate;                                                                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) char directionalLockEnabled; 
@property (assign,nonatomic) char bounces; 
@property (assign,nonatomic) char alwaysBounceVertical; 
@property (assign,nonatomic) char alwaysBounceHorizontal; 
@property (assign,getter=isPagingEnabled,nonatomic) char pagingEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) char scrollEnabled; 
@property (assign,nonatomic) char showsHorizontalScrollIndicator; 
@property (assign,nonatomic) char showsVerticalScrollIndicator; 
@property (assign,nonatomic) UIEdgeInsets scrollIndicatorInsets; 
@property (assign,nonatomic) int indicatorStyle; 
@property (assign,nonatomic) float decelerationRate; 
@property (assign,nonatomic) int indexDisplayMode; 
@property (getter=isTracking,nonatomic,readonly) char tracking; 
@property (getter=isDragging,nonatomic,readonly) char dragging; 
@property (getter=isDecelerating,nonatomic,readonly) char decelerating; 
@property (assign,nonatomic) char delaysContentTouches; 
@property (assign,nonatomic) char canCancelContentTouches; 
@property (assign,nonatomic) float minimumZoomScale; 
@property (assign,nonatomic) float maximumZoomScale;                                                                                                                                       //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) float zoomScale; 
@property (assign,nonatomic) char bouncesZoom; 
@property (getter=isZooming,nonatomic,readonly) char zooming; 
@property (getter=isZoomBouncing,nonatomic,readonly) char zoomBouncing; 
@property (assign,nonatomic) char scrollsToTop; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                                                                              //@synthesize pan=_pan - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                                                                          //@synthesize pinch=_pinch - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * directionalPressGestureRecognizer;                                                                                                    //@synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) int keyboardDismissMode;                                                                                                                                      //@synthesize keyboardDismissMode=_keyboardDismissMode - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) float scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) char canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) char canScrollY; 
+(SEL)_pinchGestureAction;
+(SEL)_panGestureAction;
+(id)_implicitAnimationCulprits;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(CGSize)contentSize;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setShowsVerticalScrollIndicator:(char)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(char)isDragging;
-(char)isDecelerating;
-(NSString *)description;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UIScrollViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setShowsHorizontalScrollIndicator:(char)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(void)setScrollEnabled:(char)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(char)isProgrammaticScrollEnabled;
-(void)setProgrammaticScrollEnabled:(char)arg1 ;
-(void)_ensureViewsAreLoadedInRect:(CGRect)arg1 ;
-(char)isScrollEnabled;
-(char)_canScrollWithoutBouncingX;
-(char)_canScrollWithoutBouncingY;
-(char)_canScrollX;
-(char)_canScrollY;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingForDelegateWithDeceleration:(char)arg1 ;
-(char)isPagingEnabled;
-(void)_scrollViewDidEndDeceleratingForDelegate;
-(void)_focusedView:(id)arg1 isMinX:(char*)arg2 isMaxX:(char*)arg3 isMinY:(char*)arg4 isMaxY:(char*)arg5 ;
-(CGPoint)_minimumContentOffset;
-(CGPoint)_maximumContentOffset;
-(CGPoint)_adjustFocusContentOffset:(CGPoint)arg1 forView:(id)arg2 ;
-(void)_attemptToBeginFocusFastScrollingWithRequest:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id)_panGestureRecognizer;
-(char)_isFocusFastScrolling;
-(char)_isAttemptingToEndFocusFastScrolling;
-(char)bounces;
-(char)_applicationHasExplicitlySetBounces;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(char)isTracking;
-(char)cancelTouchTracking;
-(char)cancelMouseTracking;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_overridingDestinationEnvironmentForFocusUpdateInContext:(id)arg1 ;
-(id)_uili_existingLayoutVariables;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_setMaskView:(id)arg1 ;
-(NSISVariable *)_contentWidthVariable;
-(NSISVariable *)_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)nsli_contentHeightVariable;
-(void)_resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(char)_supportsContentDimensionVariables;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_switchToLayoutEngine:(id)arg1 ;
-(char)_forwardsToParentScroller;
-(void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(char)arg3 ;
-(void)_setSubviewWantsAutolayoutTripWantsAutolayout:(char)arg1 ;
-(void)_addScrollNotificationView:(id)arg1 ;
-(void)_removeScrollNotificationView:(id)arg1 ;
-(void)_webCustomViewWillBeRemovedFromSuperview;
-(char)_canSkipTraitsAndOverlayUpdatesForViewControllerToNotifyOnLayoutResetState:(char)arg1 ;
-(char)_isScrollingEnabled;
-(void)_skipNextStartOffsetAdjustment;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_clearContentOffsetAnimation:(id)arg1 ;
-(void)_createGestureRecognizersForCurrentTouchLevel;
-(void)_setRefreshControl:(id)arg1 ;
-(void)_adjustScrollerIndicators:(char)arg1 alwaysShowingThem:(char)arg2 ;
-(void)setDirectionalLockEnabled:(char)arg1 ;
-(void)_updateContentFitDisableScrolling;
-(void)_centerContentIfNecessaryAdjustingContentOffset:(char)arg1 ;
-(id)_getDelegateZoomView;
-(UIEdgeInsets)_contentInsetIncludingDecorations;
-(char)isZooming;
-(CGSize)_nsis_contentSize;
-(void)_applyConstrainedContentSizeIfNecessary;
-(void)_centerContentIfNecessary;
-(void)_updateGradientMaskView;
-(char)isDirectionalLockEnabled;
-(void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(char)arg1 ;
-(void)setScrollTestParameters:(id)arg1 ;
-(_UIStaticScrollBar *)_staticScrollBar;
-(void)_layoutStaticScrollBar;
-(void)_staticScrollBar:(id)arg1 didScrollInDirection:(CGPoint)arg2 ;
-(void)_hideScrollIndicators;
-(void)_updateUsesStaticScrollBar;
-(void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
-(void)_setUsesStaticScrollBar:(char)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)_updatePanGestureConfiguration;
-(void)_handleSwipe:(id)arg1 ;
-(void)_updateScrollGestureRecognizersEnabled;
-(char)_startBeingDraggedByChild:(id)arg1 ;
-(char)_stopBeingDraggedByChild:(id)arg1 ;
-(char)_transfersScrollToContainer;
-(float)_adjustedHorizontalOffsetPinnedToScrollableBounds:(float)arg1 ;
-(float)_adjustedVerticalOffsetPinnedToScrollableBounds:(float)arg1 ;
-(void)_startDraggingParent:(id)arg1 ;
-(void)_stopDraggingParent:(id)arg1 ;
-(float)zoomScale;
-(void)_adjustContentOffsetIfNecessary;
-(void)_attemptToDragParent:(id)arg1 forNewBounds:(CGRect)arg2 oldBounds:(CGRect)arg3 ;
-(void)_old_updateAutomaticContentSizeConstraintsIfNecessaryWithContentSize:(CGSize)arg1 ;
-(char)_shouldScrollToContentBeginningInRightToLeft;
-(CGPoint)_roundedProposedContentOffset:(CGPoint)arg1 ;
-(void)_notifyDidScroll;
-(void)_adjustBackgroundShadowsForContentSizeForcedVisible:(char)arg1 ;
-(void)_layoutFocusFastScrollingUI;
-(void)_updateForChangedScrollRelatedInsets;
-(void)_adjustCrossingConstraintsIfNecessaryForOldContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)_stopScrollingNotify:(char)arg1 pin:(char)arg2 ;
-(char)_attemptToEndFocusFastScrolling:(char)arg1 ;
-(void)_registerAsScrollToTopViewIfPossible;
-(void)_setContentOffset:(CGPoint)arg1 animated:(char)arg2 animationCurve:(int)arg3 ;
-(char)_usesLowFidelityPanning;
-(id)_scrollViewTouchDelayGesture;
-(void)_updateZoomGestureRecognizersEnabled;
-(void)_updatePagingGesture;
-(unsigned)_abuttedEdgesForContentOffset:(CGPoint)arg1 ;
-(unsigned)_currentlyAbuttedContentEdges;
-(void)_reloadFocusFastScrollingIndexEntries;
-(void)_adjustScrollerIndicatorsIfNeeded;
-(void)delayed:(id)arg1 ;
-(void)_updatePinchGesture;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(void)_handleLowFidelitySwipe:(id)arg1 ;
-(float)minimumZoomScale;
-(void)willRotateToInterfaceOrientation:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(void)_registerForRotation:(char)arg1 ofWindow:(id)arg2 ;
-(void)_flashScrollIndicatorsPersistingPreviousFlashes:(char)arg1 ;
-(void)_setShowsBackgroundShadow:(char)arg1 ;
-(char)alwaysBounceHorizontal;
-(char)alwaysBounceVertical;
-(float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(char*)arg5 ;
-(void)_adjustStartOffsetForGrabbedBouncingScrollView;
-(CADoublePoint)_rubberBandContentOffsetForOffset:(CADoublePoint)arg1 outsideX:(char*)arg2 outsideY:(char*)arg3 ;
-(int)keyboardDismissMode;
-(CGSize)_interpageSpacing;
-(CGPoint)_pagingOrigin;
-(char)_isBouncing;
-(char)_scrollViewWillEndDraggingWithDeceleration:(char)arg1 ;
-(void)_startTimer:(char)arg1 ;
-(void)_popTrackingRunLoopMode;
-(void)_smoothScrollWithUpdateTime:(double)arg1 ;
-(char)_staysCenteredDuringPinch;
-(float)_zoomScaleFromPresentationLayer:(char)arg1 ;
-(void)_scrollViewDidEndZooming;
-(void)_setZoomAnchorPoint:(CADoublePoint)arg1 ;
-(void)_scrollViewWillBeginZooming;
-(void)_activateZoomFeedback;
-(void)setZoomScale:(float)arg1 withAnchorPoint:(CADoublePoint)arg2 validatingScrollOffset:(char)arg3 allowRubberbanding:(char)arg4 animated:(char)arg5 duration:(double)arg6 notifyDelegate:(char)arg7 ;
-(void)_updatePinchGestureForState:(int)arg1 ;
-(void)setZoomScale:(float)arg1 withAnchorPoint:(CADoublePoint)arg2 validatingScrollOffset:(char)arg3 allowRubberbanding:(char)arg4 animated:(char)arg5 duration:(double)arg6 notifyDelegate:(char)arg7 force:(char)arg8 ;
-(char)_beginTrackingWithEvent:(id)arg1 ;
-(void)_prepareToPageWithHorizontalVelocity:(float)arg1 verticalVelocity:(float)arg2 ;
-(void)_endPanNormal:(char)arg1 ;
-(void)_resetScrollingWithUIEvent:(id)arg1 ;
-(void)_activateScrollFeedback;
-(void)_updatePanGesture;
-(CGPoint)_offsetToScrollToForArrowPressType:(int)arg1 ;
-(void)_handleDirectionalScrollToOffset:(CGPoint)arg1 clampingToBounds:(char)arg2 ;
-(CGPoint)_velocityForAnimatedScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 animated:(char)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(char)arg4 ;
-(char)_scrollToTopIfPossible:(char)arg1 ;
-(id)_layoutVariablesWithAmbiguousValue;
-(void)_setWantsConstrainedContentSize:(char)arg1 ;
-(char)_evaluateWantsConstrainedContentSize;
-(void)setMinimumZoomScale:(float)arg1 ;
-(void)setMaximumZoomScale:(float)arg1 ;
-(float)_zoomRubberBandScaleForScale:(float)arg1 ;
-(void)_zoomToCenter:(CGPoint)arg1 scale:(float)arg2 duration:(double)arg3 force:(char)arg4 ;
-(void)setZoomScale:(float)arg1 animated:(char)arg2 ;
-(float)_zoomAnimationDurationForScale:(float)arg1 ;
-(void)_zoomAnimationDidStop;
-(void)_adjustContentSizeForView:(id)arg1 atScale:(float)arg2 ;
-(CADoublePoint)_zoomAnchorPoint;
-(void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2 ;
-(float)_zoomScaleForRubberBandScale:(float)arg1 ;
-(double)_contentOffsetAnimationDuration;
-(void)_setContentOffsetAnimationDuration:(double)arg1 ;
-(char)_getPagingDecelerationOffset:(CADoublePoint*)arg1 forTimeInterval:(double)arg2 ;
-(char)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8 ;
-(void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7 ;
-(void)_updateRubberbandingStatisticTrackingState;
-(void)_springBoardBlankedScreenNotification:(id)arg1 ;
-(void)_smoothScrollDisplayLink:(id)arg1 ;
-(void)_registerForSpringBoardBlankedScreenNotification;
-(void)_runLoopModePopped:(id)arg1 ;
-(int)_effectiveIndicatorStyle;
-(void)_quicklyHideScrollIndicator:(id)arg1 animated:(char)arg2 ;
-(char)_isAnimatingScroll;
-(CGPoint)_animatedTargetOffset;
-(CGPoint)_contentOffsetForLowFidelityScrollInDirection:(CGPoint)arg1 duration:(double*)arg2 ;
-(void)_lowFidelityScrollInDirection:(CGPoint)arg1 ;
-(void)_showFocusFastScrollingIndexBar:(id)arg1 ;
-(void)_removeFocusFastScrollingUI;
-(void)_showFocusFastScrollingUI;
-(id)_focusFastScrollingDestinationItem;
-(id)_focusFastScrollingDestinationItemForIndexEntry:(id)arg1 ;
-(id)_focusFastScrollingDestinationItemAtContentStart;
-(id)_focusFastScrollingDestinationItemNearItem:(id)arg1 isEnd:(char)arg2 ;
-(id)_focusFastScrollingDestinationItemAtContentEnd;
-(id)_focusFastScrollingDestinationItemAtRelativePosition:(float)arg1 isEnding:(char)arg2 ;
-(float)_heightForFocusFastScrollingUI:(float)arg1 ;
-(int)_fastScrollingIndexMaximumSlotCount;
-(id)_focusFastScrollingIndexEntries;
-(id)_focusFastScrollingIndexEntriesForDisplay;
-(void)_updateIndicatedFocusFastScrollingDestination;
-(UIEdgeInsets)_fastScrollingIndexBarInsets;
-(void)setAlwaysBounceVertical:(char)arg1 ;
-(UIRefreshControl *)_refreshControl;
-(void)_addContentSubview:(id)arg1 atBack:(char)arg2 ;
-(char)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3 ;
-(char)delaysContentTouches;
-(double)_touchDelayForScrollDetection;
-(float)_scrollHysteresis;
-(id)_layoutObserver;
-(void)_setLayoutObserver:(id)arg1 ;
-(id)_swipeGestureRecognizer;
-(id)_touchesDelayedGestureRecognizer;
-(void)_setPanGestureRecognizer:(id)arg1 ;
-(void)_setPinchGestureRecognizer:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(char)_isRectFullyVisible:(CGRect)arg1 ;
-(char)_adjustsTargetsOnContentOffsetChanges;
-(void)_setAdjustsTargetsOnContentOffsetChanges:(char)arg1 ;
-(void)setScrollingEnabled:(char)arg1 ;
-(void)setZoomEnabled:(char)arg1 ;
-(char)isZoomEnabled;
-(void)_setFirstResponderKeyboardAvoidanceEnabled:(char)arg1 ;
-(char)_isFirstResponderKeyboardAvoidanceEnabled;
-(char)_isScrollingToTop;
-(void)setPagingEnabled:(char)arg1 ;
-(void)_setInterpageSpacing:(CGSize)arg1 ;
-(void)_setPagingOrigin:(CGPoint)arg1 ;
-(UIOffset)_firstPageOffset;
-(void)_setFirstPageOffset:(UIOffset)arg1 ;
-(unsigned)_abuttedPagingEdges;
-(void)setBounces:(char)arg1 ;
-(void)setBouncesHorizontally:(char)arg1 ;
-(char)bouncesHorizontally;
-(void)setBouncesVertically:(char)arg1 ;
-(char)bouncesVertically;
-(void)setUpdateInsetBottomDuringKeyboardDismiss:(char)arg1 ;
-(char)updateInsetBottomDuringKeyboardDismiss;
-(float)keyboardBottomInsetAdjustmentDelta;
-(void)setAlwaysBounceHorizontal:(char)arg1 ;
-(void)_setTransfersScrollToContainer:(char)arg1 ;
-(char)_isVerticalBouncing;
-(char)_isHorizontalBouncing;
-(char)showsHorizontalScrollIndicator;
-(char)showsVerticalScrollIndicator;
-(int)indexDisplayMode;
-(void)setIndexDisplayMode:(int)arg1 ;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsets;
-(void)setIndicatorStyle:(int)arg1 ;
-(float)decelerationRate;
-(void)setDecelerationRate:(float)arg1 ;
-(int)indicatorStyle;
-(float)horizontalScrollDecelerationFactor;
-(void)setHorizontalScrollDecelerationFactor:(float)arg1 ;
-(float)verticalScrollDecelerationFactor;
-(void)setVerticalScrollDecelerationFactor:(float)arg1 ;
-(void)setAllowsMultipleFingers:(char)arg1 ;
-(char)allowsMultipleFingers;
-(void)setTracksImmediatelyWhileDecelerating:(char)arg1 ;
-(char)tracksImmediatelyWhileDecelerating;
-(char)_contentOffsetRoundingEnabled;
-(void)_setContentOffsetRoundingEnabled:(char)arg1 ;
-(unsigned)_allowedFocusBounceEdges;
-(void)_setAllowedFocusBounceEdges:(unsigned)arg1 ;
-(char)preservesCenterDuringRotation;
-(void)setPreservesCenterDuringRotation:(char)arg1 ;
-(void)flashScrollIndicators;
-(char)_showsBackgroundShadow;
-(void)setShowBackgroundShadow:(char)arg1 ;
-(CGPoint)_touchPositionForTouches:(id)arg1 ;
-(void)_setStaysCenteredDuringPinch:(char)arg1 ;
-(char)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(char)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleDirectionalPress:(id)arg1 ;
-(void)_setAllowedTouchTypesForScrolling:(id)arg1 ;
-(char)_forwardsTouchesUpResponderChain;
-(void)_setForwardsTouchesUpResponderChain:(char)arg1 ;
-(char)_disableUpdateOffsetOnCancelTracking;
-(void)_setDisableUpdateOffsetOnCancelTracking:(char)arg1 ;
-(void)_forcePanGestureToEndImmediately;
-(char)_isInterruptingDeceleration;
-(char)bouncesZoom;
-(void)setBouncesZoom:(char)arg1 ;
-(char)canCancelContentTouches;
-(void)setCanCancelContentTouches:(char)arg1 ;
-(void)setDelaysContentTouches:(char)arg1 ;
-(char)touchesShouldCancelInContentView:(id)arg1 ;
-(char)scrollsToTop;
-(void)setScrollsToTop:(char)arg1 ;
-(float)_pagingFriction;
-(void)_setPagingFriction:(float)arg1 ;
-(float)_defaultPagingFriction;
-(void)_setRelativePanView:(id)arg1 ;
-(id)_relativePanView;
-(char)_wantsConstrainedContentSize;
-(void)_setAutomaticContentConstraints:(id)arg1 ;
-(UIOffset)_offsetForCenterOfPossibleZoomView:(id)arg1 withIncomingBoundsSize:(CGSize)arg2 ;
-(void)_setVerticalFeedbackBehavior:(id)arg1 ;
-(id)_verticalFeedbackBehavior;
-(void)_setHorizontalFeedbackBehavior:(id)arg1 ;
-(id)_horizontalFeedbackBehavior;
-(void)_setZoomFeedbackBehavior:(id)arg1 ;
-(id)_zoomFeedbackBehavior;
-(float)maximumZoomScale;
-(void)_zoomToCenter:(CGPoint)arg1 scale:(float)arg2 duration:(double)arg3 ;
-(char)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2 ;
-(void)setZoomScale:(float)arg1 ;
-(void)zoomToRect:(CGRect)arg1 animated:(char)arg2 ;
-(char)isZoomBouncing;
-(char)_isAnimatingZoom;
-(CGPoint)_pageDecelerationTarget;
-(void)_smoothScrollTimer:(id)arg1 ;
-(void)_unregisterForSpringBoardBlankedScreenNotification;
-(char)_bounceForCarPlayIfNecessary;
-(char)_isShowingFocusFastScrollingPreview;
-(void)_setShowingFocusFastScrollingPreview:(char)arg1 ;
-(void)_beginIndicatingFocusFastScrollingDestination;
-(void)_endIndicatingFocusFastScrollingDestination;
-(void)_clearScrollBounceStatisticsTrackingState;
-(void)_commitScrollBounceStatisticsTrackingState;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)_beginRefreshing;
-(void)_endRefreshingAnimated:(char)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(id)scrollTestParameters;
-(void)setKeyboardDismissMode:(int)arg1 ;
-(UIGestureRecognizer *)directionalPressGestureRecognizer;
-(char)_useContentDimensionVariablesForConstraintLowering;
-(void)_setUseContentDimensionVariablesForConstraintLowering:(char)arg1 ;
-(NSArray *)_automaticContentConstraints;
-(NSArray *)_allowedTouchTypesForScrolling;
-(UIEdgeInsets)_contentScrollInset;
-(double)_horizontalVelocity;
-(double)_verticalVelocity;
-(UIEdgeInsets)_gradientMaskLengths;
-(UIEdgeInsets)_gradientMaskEdgeInsets;
-(void)_setGradientMaskLengths:(UIEdgeInsets)arg1 ;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(float)_rubberBandOffsetWithoutDecorationForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(char*)arg5 ;
-(float)_offsetWithoutDecorationForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 ;
-(float)_offsetForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 ;
-(float)_shadowHeightOffset;
-(void)_adjustBackgroundShadowsForContentSizeForcedVisible:(char)arg1 withOffset:(float)arg2 ;
-(void)_stopScrollDecelerationNotify:(char)arg1 ;
-(void)_stopScrollingNotify:(char)arg1 pin:(char)arg2 tramplingDragFlags:(char)arg3 ;
-(void)_clearContentOffsetAnimation;
-(void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(char)arg1 tramplingDragFlags:(char)arg2 ;
-(CGPoint)_originalOffsetForAnimatedSetContentOffset;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(char)arg2 ;
-(void)_delegateScrollViewAnimationEnded;
-(float)_contentFitCanScrollThreshold;
-(void)_scrollViewDidEndDraggingWithDeceleration:(char)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(CGPoint)_adjustedContentOffsetForContentOffset:(CGPoint)arg1 ;
-(void)_adjustShadowsIfNecessary;
-(UIEdgeInsets)_gradientMaskInsets;
-(void)_setGradientMaskInsets:(UIEdgeInsets)arg1 ;
-(void)_setGradientMaskEdgeInsets:(UIEdgeInsets)arg1 ;
-(char)_shouldTrackImmediatelyWhileDecelerating;
-(void)_clearParentAdjustment;
-(void)_stopScrollingAndZoomingAnimations;
-(char)_resetScrollingForGestureEvent:(id)arg1 ;
-(char)_canCancelContentTouches:(id)arg1 ;
-(void)_moveContentSubview:(id)arg1 toBack:(char)arg2 ;
-(void)_setContentOffset:(CGPoint)arg1 duration:(double)arg2 animationCurve:(int)arg3 ;
-(void)_setAbsoluteContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)_updateScrollAnimationForChangedTargetOffset:(CGPoint)arg1 ;
-(void)_setAutomaticContentOffsetAdjustmentEnabled:(char)arg1 ;
-(char)_isAutomaticContentOffsetAdjustmentEnabled;
-(void)_forceDelegateScrollViewDidZoom:(char)arg1 ;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3 ;
-(char)_scrollsToMakeFirstResponderVisible;
-(void)_setContentOffsetPinned:(CGPoint)arg1 ;
-(void)_setContentOffsetPinned:(CGPoint)arg1 animated:(char)arg2 ;
-(void)_setContentScrollInset:(UIEdgeInsets)arg1 ;
-(id)_parentScrollView;
-(CGPoint)_animatedOriginalOffset;
-(CGPoint)_focusTargetOffset;
-(void)_setAlwaysBounceVertical:(char)arg1 ;
-(void)_setShowsVerticalScrollIndicator:(char)arg1 ;
-(void)_setShowsHorizontalScrollIndicator:(char)arg1 ;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(char)arg2 lastAdjustment:(float*)arg3 ;
-(char)_pagingLeft;
-(char)_pagingRight;
-(char)_pagingUp;
-(char)_pagingDown;
-(void)_setAutoscrolling:(char)arg1 ;
-(char)_isAutoscrolling;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1 ;
-(CGRect)contentFrameForView:(id)arg1 ;
-(void)_adjustShadowsIfNecessaryForOffset:(float)arg1 ;
-(id)_backgroundShadowForSlideAnimation;
-(void)_pinContentOffsetToClosestPageBoundary;
-(CGRect)_rectForPageContainingView:(id)arg1 ;
-(char)_viewIsInsideNavigationController;
-(char)_temp_getFlag_systemGesturesRecognitionPossible;
-(void)_temp_setFlag_systemGesturesRecognitionPossible:(char)arg1 ;
-(void)_temp_setFlag_tracking:(char)arg1 ;
-(id)_scrollTestExtraResults;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
-(int)scrollableDirections;
-(float)maxVelocityInDirection:(int)arg1 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5 extraResultsBlock:(/*^block*/id)arg6 ;
-(void)_suppressImplicitAnimationsForScrollTest;
-(void)_incrementForScrollTest;
-(void)_reenableImplicitAnimationsAfterScrollTest;
-(void)_simulateGestureWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
-(char)_isAnimatingScrollTest;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 ;
-(void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
-(void)_performFullScreenScrollTest:(id)arg1 iterations:(int)arg2 scrollAxis:(int)arg3 ;
-(void)_simulateScrollWithTranslation:(CGPoint)arg1 duration:(double)arg2 willBeginDragging:(/*^block*/id)arg3 didEndDragging:(/*^block*/id)arg4 willBeginDecelerating:(/*^block*/id)arg5 didEndDecelerating:(/*^block*/id)arg6 ;
-(void)_simulateZoomByScaleFactor:(float)arg1 duration:(double)arg2 willBeginZooming:(/*^block*/id)arg3 didEndZooming:(/*^block*/id)arg4 ;
-(void)_accumulateViewConstraintsIntoArray:(id)arg1 ;
-(void)_didAddDependentConstraint:(id)arg1 ;
-(void)_didRemoveDependentConstraint:(id)arg1 ;
-(char)_constraintAffectsContentSize:(id)arg1 ;
-(id)_constraintsFromContentSize;
@end

