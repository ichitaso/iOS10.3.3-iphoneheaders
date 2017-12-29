/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateBarDelegate, UIKeyboardCandidateListDelegate;
@class NSString, UIImageView, NSArray, UIKBThemedView, TIKeyboardCandidateResultSet, UIKeyboardCandidatePocketShadow, NSIndexPath, UIKBCandidateCollectionView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource> {

	char _canExtend;
	char _forceReloadInitiallyHiddenCandidates;
	NSString* _inlineText;
	UIImageView* _candidateMaskView;
	id<UIKeyboardCandidateBarDelegate> _delegate;
	float _upArrowWidth;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	NSArray* _candidateViews;
	unsigned _currentCandidateViewIndex;
	UIKBThemedView* _secondaryCandidatesViewEdgeGradient;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSArray* _filteredCandidates;
	UIKeyboardCandidatePocketShadow* _leftBorder;
	UIKeyboardCandidatePocketShadow* _rightBorder;
	NSIndexPath* _dragStartNextPageIndexPath;
	NSIndexPath* _dragStartPreviousPageIndexPath;
	CGPoint _dragStartOffset;

}

@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) NSArray * candidateViews;                                               //@synthesize candidateViews=_candidateViews - In the implementation block
@property (assign,nonatomic) unsigned currentCandidateViewIndex;                                     //@synthesize currentCandidateViewIndex=_currentCandidateViewIndex - In the implementation block
@property (nonatomic,readonly) UIKBCandidateCollectionView * currentCandidateView; 
@property (nonatomic,retain) UIImageView * candidateMaskView;                                        //@synthesize candidateMaskView=_candidateMaskView - In the implementation block
@property (nonatomic,retain) UIKBThemedView * secondaryCandidatesViewEdgeGradient;                   //@synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                      //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,retain) NSArray * filteredCandidates;                                           //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                    //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) char canExtend;                                                         //@synthesize canExtend=_canExtend - In the implementation block
@property (assign,nonatomic) char forceReloadInitiallyHiddenCandidates;                              //@synthesize forceReloadInitiallyHiddenCandidates=_forceReloadInitiallyHiddenCandidates - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * leftBorder;                           //@synthesize leftBorder=_leftBorder - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * rightBorder;                          //@synthesize rightBorder=_rightBorder - In the implementation block
@property (assign,nonatomic) CGPoint dragStartOffset;                                                //@synthesize dragStartOffset=_dragStartOffset - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartNextPageIndexPath;                                 //@synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartPreviousPageIndexPath;                             //@synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (assign,nonatomic) id<UIKeyboardCandidateBarDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float upArrowWidth;                                                     //@synthesize upArrowWidth=_upArrowWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)numberOfRows;
+(float)height;
+(float)heightForInterfaceOrientation:(int)arg1 ;
+(void)setScreenTraits:(id)arg1 ;
+(unsigned)numberOfRowsForInterfaceOrientation:(int)arg1 ;
+(float)heightForRowAtIndex:(unsigned)arg1 interfaceOrientation:(int)arg2 ;
+(float)interRowOverlap;
+(float)defaultPagingVelocityThreshold;
+(float)defaultPagingDistanceThreshold;
+(float)heightForLastRow;
+(float)heightForRowAtIndex:(unsigned)arg1 ;
+(float)widthForCurrentScreenTraits;
+(float)defaultCandidateWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<UIKeyboardCandidateBarDelegate>)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<UIKeyboardCandidateBarDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(TIKeyboardCandidateResultSet *)candidates;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)_stepSelectedCandidateInDirection:(char)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(char)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(char)isExtendedList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(char)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(unsigned)selectedSortIndex;
-(void)setInlineText:(NSString *)arg1 ;
-(char)hasNextPage;
-(char)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(unsigned)viewOffsetForCandidateAtIndex:(unsigned)arg1 ;
-(id)secureCandidateRenderTraits;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(float)leftMarginForCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)candidateBarLayoutDidFinishPreparingLayout;
-(UIKeyboardCandidatePocketShadow *)leftBorder;
-(void)setLeftBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(float)singleCellWidthForProactiveCellCount:(unsigned)arg1 ;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(unsigned)maxNumberOfProactiveCells;
-(NSArray *)filteredCandidates;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)_updateBorders;
-(void)_clearData;
-(NSArray *)candidateViews;
-(int)_sectionForSectionIndex:(unsigned)arg1 candidateView:(id)arg2 ;
-(unsigned)_countOfItemsInSection:(int)arg1 ;
-(id)_itemAtIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(Class)_barCellClassForSection:(int)arg1 ;
-(UIKBCandidateCollectionView *)currentCandidateView;
-(float)_widthOfItemAtIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(void)_updateCanExtendState;
-(void)setCurrentCandidateViewIndex:(unsigned)arg1 ;
-(void)setDragStartOffset:(CGPoint)arg1 ;
-(id)_nextPageIndexPath;
-(void)setDragStartNextPageIndexPath:(NSIndexPath *)arg1 ;
-(id)_previousPageIndexPath;
-(void)setDragStartPreviousPageIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)dragStartOffset;
-(id)_indexPathForFirstVisibleItem;
-(NSIndexPath *)dragStartNextPageIndexPath;
-(char)canExtend;
-(id)_candidateViewForSection:(int)arg1 ;
-(NSIndexPath *)dragStartPreviousPageIndexPath;
-(id)_indexPathForLastVisibleItem;
-(id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2 ;
-(void)adjustSelectionToNearestVisibleCandidate;
-(char)forceReloadInitiallyHiddenCandidates;
-(void)setForceReloadInitiallyHiddenCandidates:(char)arg1 ;
-(void)setFilteredCandidates:(NSArray *)arg1 ;
-(void)_reloadDataByAppendingAtEnd:(char)arg1 initiallyHiddenCandidatesChanged:(char)arg2 ;
-(void)_reloadData;
-(void)_showCandidateAtIndex:(unsigned)arg1 inSection:(int)arg2 scrollCellToVisible:(char)arg3 animated:(char)arg4 ;
-(void)_showPageAtIndexPath:(id)arg1 ;
-(unsigned)currentCandidateViewIndex;
-(void)_stepSelectedCandidateInDirection:(char)arg1 candidateView:(id)arg2 section:(int)arg3 ;
-(id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1 ;
-(void)setCandidateViews:(NSArray *)arg1 ;
-(float)upArrowWidth;
-(UIKBThemedView *)secondaryCandidatesViewEdgeGradient;
-(void)setSecondaryCandidatesViewEdgeGradient:(UIKBThemedView *)arg1 ;
-(UIKeyboardCandidatePocketShadow *)rightBorder;
-(void)setRightBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(void)_updateCandidateViews;
-(void)_scrollToFirstCandidateInSection:(int)arg1 withAnimation:(char)arg2 ;
-(unsigned)_sectionIndexForSection:(int)arg1 ;
-(void)setCanExtend:(char)arg1 ;
-(float)_emptySpaceForItemsToIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(id)visibleCandidates;
-(void)setUpArrowWidth:(float)arg1 ;
-(UIImageView *)candidateMaskView;
-(void)setCandidateMaskView:(UIImageView *)arg1 ;
@end

