/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <MobileSafari/CloudTabTableDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol TiltedTabViewDelegate;
@class UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIScrollView, ViewReuseManager, GradientView, TiltedTabItem, UIView, UIPreviewForceInteractionProgress, HighlightRecognizer, ReorderingAutoscroller, NSOrderedSet, NSMutableSet, NSArray, WBSCloudTab, CloudTabTable, CloudTabItemView, NSTimer, UIImage, TabExplanationView, UISearchBar, NSString;

@interface TiltedTabView : UIView <CAAnimationDelegate, CloudTabTableDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIBasicAnimationFactory, UIInteractionProgressObserver, UISearchBarDelegate> {

	char _presented;
	char _sentDidDismissToDelegate;
	char _sentDidPresentToDelegate;
	UIPanGestureRecognizer* _tabCloseRecognizer;
	UILongPressGestureRecognizer* _tabReorderRecognizer;
	UITapGestureRecognizer* _tabSelectionRecognizer;
	UIScrollView* _scrollView;
	char _suppressingScrollViewDidScroll;
	ViewReuseManager* _viewReuseManager;
	GradientView* _statusBarGradient;
	unsigned _activeAnimationCount;
	TiltedTabItem* _animatingItem;
	char _startedAnimatingItem;
	UIView* _animatingTopBackdropView;
	TiltedTabItem* _itemToScrollIntoView;
	char _topBackdropViewHidden;
	UILongPressGestureRecognizer* _tabPreviewRecognizer;
	UILongPressGestureRecognizer* _tabCommitRecognizer;
	int _currentTabPreviewState;
	TiltedTabItem* _interactivelyPreviewingItem;
	float _tabPreviewProgress;
	float _tabReadyToCommitProgress;
	UIPreviewForceInteractionProgress* _tabPreviewInteractionProgress;
	UIPreviewForceInteractionProgress* _tabReadyToCommitInteractionProgress;
	TiltedTabItem* _interactivelyClosingItem;
	float _interactiveCloseProgress;
	float _interactiveCloseVelocity;
	TiltedTabItem* _onlyHorizontalVelocityItem;
	char _applyVelocityOnlyToHorizontalPosition;
	TiltedTabItem* _pressedItem;
	HighlightRecognizer* _pressRecognizer;
	TiltedTabItem* _interactivelyReorderingItem;
	float _interactiveReorderOffsetDistanceFromTouch;
	float _interactiveReorderOffset;
	char _reorderOffsetNeedsReset;
	char _itemsReordered;
	ReorderingAutoscroller* _reorderingAutoscroller;
	NSOrderedSet* _itemsInvolvedInAnimation;
	NSMutableSet* _itemsCurrentlyClosing;
	NSOrderedSet* _itemsInvolvedInTransition;
	TiltedTabItem* _visiblyCenteredItem;
	char _scrollingToTop;
	UIView* _cloudTabContainer;
	NSArray* _cloudTabDevices;
	NSArray* _cloudTabTables;
	WBSCloudTab* _selectedCloudTab;
	CloudTabTable* _selectedCloudTabTable;
	CloudTabItemView* _editedCloudTabItemView;
	char _cloudTabsNeedLayout;
	NSTimer* _itemActivationTimer;
	UIImage* _blankSnapshot;
	UIView* _bottomMaskView;
	TabExplanationView* _explanationView;
	char _explanationViewVisible;
	float _bottomInsetForKeyboard;
	NSArray* _items;
	float _pendingBottomInsetForKeyboard;
	UISearchBar* _searchBar;
	char _showingSearchBar;
	char _defersActivation;
	NSArray* _unfilteredItems;
	id<TiltedTabViewDelegate> _delegate;
	TiltedTabItem* _itemToActivate;
	TiltedTabItem* _itemToAdd;

}

@property (assign,nonatomic,__weak) id<TiltedTabViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items;                                          //@synthesize unfilteredItems=_unfilteredItems - In the implementation block
@property (assign,getter=isPresented,nonatomic) char presented;                      //@synthesize presented=_presented - In the implementation block
@property (nonatomic,retain) TiltedTabItem * itemToActivate;                         //@synthesize itemToActivate=_itemToActivate - In the implementation block
@property (assign,nonatomic) char defersActivation;                                  //@synthesize defersActivation=_defersActivation - In the implementation block
@property (nonatomic,retain) TiltedTabItem * itemToAdd;                              //@synthesize itemToAdd=_itemToAdd - In the implementation block
@property (nonatomic,readonly) char showsExplanationView; 
@property (nonatomic,readonly) float desiredSnapshotScale; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresented:(char)arg1 animated:(char)arg2 ;
-(void)_tabPressUpdated:(id)arg1 ;
-(void)_tabCloseRecognized:(id)arg1 ;
-(void)_tabReorderRecognized:(id)arg1 ;
-(void)_tabSelectionRecognized:(id)arg1 ;
-(float)_scrollingEffectFactorForTabsWithCount:(float)arg1 ;
-(float)_baseOffsetForItem:(id)arg1 index:(unsigned*)arg2 count:(float*)arg3 ;
-(float)_spaceBetweenTabsWithCount:(float)arg1 ;
-(float)_topAreaHeightForTabsWithCount:(float)arg1 ;
-(CGRect)_tabLayoutBounds;
-(CGRect)_hitRectForItem:(id)arg1 ;
-(id)_tiltedTabItemForLocation:(CGPoint)arg1 ;
-(void)_setPressedItem:(id)arg1 animated:(char)arg2 ;
-(char)_gestureRecognizer:(id)arg1 shouldInteractWithItem:(id)arg2 ;
-(float)_tabCloseAnimationSlideDistance;
-(void)_updateReorderGesture;
-(void)_resetInteractiveReorderOffsetAtLocation:(CGPoint)arg1 ;
-(void)_updateItemsInvolvedInAnimation;
-(void)_sendPresentedStateDidChangeToDelegateIfNeeded;
-(void)_resetItem:(id)arg1 ;
-(void)_finishAnimations;
-(void)_stopReorderingItem:(id)arg1 withFinalTimeAdjustment:(double)arg2 tabCount:(float)arg3 ;
-(char)_shouldContinueAnimatingItem:(id)arg1 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(float)_velocityForSpringAnimations;
-(void)_configureVelocityForSpringAnimation:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_updateSpringAnimationForView:(id)arg1 withBounds:(CGRect)arg2 animated:(char)arg3 ;
-(id)_makeReorderAnimationWithDirection:(int)arg1 springDuration:(float)arg2 tabCount:(float)arg3 ;
-(void)_updateReorderAnimationBeginTimeForLayer:(id)arg1 withTimeAdjustment:(double)arg2 ;
-(float)_interactiveCloseProgressForLayout;
-(CGSize)_contentSizeForItemCount:(float)arg1 ;
-(float)_baseOffsetForItemAtIndex:(unsigned)arg1 withItemCountForLayout:(float)arg2 ;
-(void)_updateReorderAnimationsForItem:(id)arg1 withTimeAdjustment:(double)arg2 tabCount:(float)arg3 createIfNecessary:(char)arg4 ;
-(void)_updateSpringAnimationForView:(id)arg1 withFrame:(CGRect)arg2 verticalScrollAdjustment:(float)arg3 animated:(char)arg4 ;
-(id)_snapshotForItem:(id)arg1 ;
-(void)cloudTabTable:(id)arg1 didSelectCloudTab:(id)arg2 ;
-(void)cloudTabTable:(id)arg1 didStartEditingTabItemView:(id)arg2 ;
-(void)cloudTabTable:(id)arg1 didFinishEditingTabItemView:(id)arg2 ;
-(void)cloudTabTable:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3 ;
-(id)_requestReusableTiltedTabThumbnailView;
-(void)_relinquishReusableTiltedTabThumbnailView:(id)arg1 ;
-(void)_tabPreviewGestureRecognized:(id)arg1 ;
-(void)_tabCommitGestureRecognized:(id)arg1 ;
-(void)_relinquishBorrowedContent;
-(float)_baseOffsetForCloudTabViews;
-(void)_layoutItemsAnimated:(char)arg1 ;
-(void)_updateTabPreviewProgress:(float)arg1 ;
-(void)_stopTabReordering;
-(void)_stopTabPreviewing;
-(void)_activateItemToActivate;
-(void)_attemptToRelinquishBorrowedContentEarly;
-(void)_setItemActivationTimer:(id)arg1 ;
-(void)setItemToActivate:(TiltedTabItem *)arg1 ;
-(void)_activateItemToActivate:(id)arg1 ;
-(void)_setItemsCloseButtonEnabled:(char)arg1 ;
-(void)setShowsExplanationView:(char)arg1 animated:(char)arg2 ;
-(void)setItems:(id)arg1 withTransition:(int)arg2 ;
-(id)_filterItems;
-(void)_setItems:(id)arg1 withTransition:(int)arg2 ;
-(void)_prepareForTransition:(int)arg1 toItems:(id)arg2 ;
-(void)_finishTransition;
-(void)_layoutItemsWithTransition:(int)arg1 ;
-(void)_updateSpringAnimationForView:(id)arg1 withFrame:(CGRect)arg2 transform:(CATransform3D)arg3 zPosition:(float)arg4 opacity:(float)arg5 verticalScrollAdjustment:(float)arg6 animated:(char)arg7 delay:(double)arg8 additionalSpeed:(float)arg9 useRelaxedTimingFunction:(char)arg10 useBounceAnimation:(char)arg11 ;
-(void)_configureStaticPropertiesForSpringAnimation:(id)arg1 ;
-(float)_speedForSpringAnimations;
-(double)_durationForSpringAnimations;
-(void)_addSpringAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 delay:(double)arg5 additionalSpeed:(float)arg6 useRelaxedTimingFunction:(char)arg7 useBounceAnimation:(char)arg8 ;
-(float)_cloudTabsContentHeightForItemCount:(float)arg1 ;
-(float)_cloudTabsTopPaddingForItemCount:(float)arg1 ;
-(char)_shouldUseFastExplanationViewAnimation;
-(CGRect)_visibleContentFrame;
-(char)_isTabCommitGestureRecognized;
-(double)_multipleItemCloseAnimationDelayForItemAtIndex:(unsigned)arg1 ;
-(void)_setTopBackdropViewHidden:(char)arg1 ;
-(float)_heightForStatusBarGradientWithItemCount:(float)arg1 ;
-(void)_updateExplanationViewVisibilityForcingLayout:(char)arg1 ;
-(CGSize)_requestedSnapshotSize;
-(char)showsExplanationView;
-(void)_stopTrackingEditedTabItemView;
-(void)setDefersActivation:(char)arg1 ;
-(void)setItemToAdd:(TiltedTabItem *)arg1 ;
-(void)enumerateItemsOrderedByVisibility:(/*^block*/id)arg1 ;
-(char)itemIsCoveredBySlidingWindow:(id)arg1 windowSize:(unsigned)arg2 ;
-(unsigned)countOfVisibleItems;
-(float)desiredSnapshotHeightForSize:(CGSize)arg1 ;
-(float)desiredSnapshotScale;
-(void)updateSnapshotForItem:(id)arg1 animated:(char)arg2 ;
-(void)setCloudTabDevices:(id)arg1 ;
-(TiltedTabItem *)itemToActivate;
-(char)defersActivation;
-(TiltedTabItem *)itemToAdd;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<TiltedTabViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
-(id<TiltedTabViewDelegate>)delegate;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(char)arg2 ;
-(char)isPresented;
-(void)setPresented:(char)arg1 ;
@end
