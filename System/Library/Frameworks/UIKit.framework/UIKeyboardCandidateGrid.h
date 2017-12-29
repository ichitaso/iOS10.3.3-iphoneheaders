/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>
#import <UIKit/UIKeyboardCandidateRowViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate, UICollectionViewDelegate;
@class UIImageView, UIView, UIKeyboardCandidateSortControl, UIKeyboardCandidateGridHeader, TIKeyboardCandidateResultSet, NSMutableDictionary, UIKeyboardCandidateGridCollectionViewController, UIKBBackdropView, NSArray, NSString, UIKeyboardCandidateRowViewController;

@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateRowViewControllerDelegate> {

	UIImageView* _backgroundView;
	UIView* _topBarShadow;
	UIView* _bottomBarShadow;
	UIKeyboardCandidateSortControl* _sortBar;
	UIKeyboardCandidateGridHeader* _gridHeader;
	char _drawTopShadow;
	char _drawBottomShadow;
	char _secondaryCandidatesViewIsCurrent;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSMutableDictionary* _collectionViewControllers;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	id<UICollectionViewDelegate> _scrollViewDelegate;
	int _candidatesVisualStyle;
	UIKBBackdropView* _backdropView;
	NSArray* _sortedCandidates;
	NSString* _inlineText;
	UIKeyboardCandidateRowViewController* _secondaryCandidatesViewController;

}

@property (nonatomic,readonly) NSMutableDictionary * collectionViewControllers;                                       //@synthesize collectionViewControllers=_collectionViewControllers - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateRowViewController * secondaryCandidatesViewController;                //@synthesize secondaryCandidatesViewController=_secondaryCandidatesViewController - In the implementation block
@property (assign,nonatomic) char secondaryCandidatesViewIsCurrent;                                                   //@synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * backdropView;                                                         //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) char drawTopShadow;                                                                      //@synthesize drawTopShadow=_drawTopShadow - In the implementation block
@property (assign,nonatomic) char drawBottomShadow;                                                                   //@synthesize drawBottomShadow=_drawBottomShadow - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                             //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,retain) NSArray * sortedCandidates;                                                              //@synthesize sortedCandidates=_sortedCandidates - In the implementation block
@property (nonatomic,retain) NSString * inlineText;                                                                   //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                                               //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateSortControl * sortBar;                                                //@synthesize sortBar=_sortBar - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateGridHeader * gridHeader;                                              //@synthesize gridHeader=_gridHeader - In the implementation block
@property (assign,nonatomic) id<UICollectionViewDelegate> scrollViewDelegate;                                         //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                               //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)layout;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(char)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
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
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(char)arg6 ;
-(void)setInlineText:(NSString *)arg1 ;
-(char)handleNumberKey:(unsigned)arg1 ;
-(char)handleTabKeyWithShift:(char)arg1 ;
-(char)hasNextPage;
-(char)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(char)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(unsigned)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(void)setSecondaryCandidatesViewIsCurrent:(char)arg1 ;
-(char)secondaryCandidatesViewIsCurrent;
-(unsigned)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1 ;
-(void)candidateViewDidFinishExtending;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(UIKeyboardCandidateGridCollectionViewController *)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setBackdropView:(UIKBBackdropView *)arg1 ;
-(UIKBBackdropView *)backdropView;
-(void)setDrawTopShadow:(char)arg1 ;
-(void)setDrawBottomShadow:(char)arg1 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)setSortBar:(UIKeyboardCandidateSortControl *)arg1 ;
-(void)setGridHeader:(UIKeyboardCandidateGridHeader *)arg1 ;
-(UIKeyboardCandidateSortControl *)sortBar;
-(char)drawTopShadow;
-(char)drawBottomShadow;
-(UIKeyboardCandidateRowViewController *)secondaryCandidatesViewController;
-(void)setSecondaryCandidatesViewController:(UIKeyboardCandidateRowViewController *)arg1 ;
-(UIKeyboardCandidateGridHeader *)gridHeader;
-(void)clearViews;
-(NSMutableDictionary *)collectionViewControllers;
-(id<UICollectionViewDelegate>)scrollViewDelegate;
-(void)showArrowButton:(char)arg1 ;
-(void)setScrollViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(NSArray *)sortedCandidates;
-(void)setSortedCandidates:(NSArray *)arg1 ;
@end

