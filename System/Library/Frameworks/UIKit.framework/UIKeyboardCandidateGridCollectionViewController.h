/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateGridLayoutDelegate.h>

@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateListDelegate;
@class NSArray, TIKeyboardCandidateResultSet, UIButton, UIView, UIKBCandidateCollectionView, UIKeyboardCandidateGridLayout, UIKeyboardCandidateGridCollectionView, NSString;

@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate> {

	char _layoutExtensionCandidates;
	char _hasSecondaryCandidates;
	char _singleLineMode;
	char _supportsNumberKeySelection;
	char _secondaryCandidatesViewIsCurrent;
	char __usesDeemphasizedTextAppearance;
	NSArray* _filteredCandidates;
	id<UIKeyboardCandidateGridCollectionViewControllerDelegate> _delegate;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSArray* _candidateGroups;
	float _rowHeight;
	SCD_Struct_UI35 _visualStyling;
	int _candidatesVisualStyle;
	UIButton* _padInlineFloatingArrowButton;
	UIView* _headerView;
	UIKBCandidateCollectionView* _secondaryCandidatesView;
	float _groupBarWidth;

}

@property (nonatomic,readonly) UIKeyboardCandidateGridLayout * collectionViewGridLayout; 
@property (assign,nonatomic) float groupBarWidth;                                                               //@synthesize groupBarWidth=_groupBarWidth - In the implementation block
@property (assign,nonatomic) char supportsNumberKeySelection;                                                   //@synthesize supportsNumberKeySelection=_supportsNumberKeySelection - In the implementation block
@property (nonatomic,retain) UIKBCandidateCollectionView * secondaryCandidatesView;                             //@synthesize secondaryCandidatesView=_secondaryCandidatesView - In the implementation block
@property (assign,nonatomic) char secondaryCandidatesViewIsCurrent;                                             //@synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent - In the implementation block
@property (assign,nonatomic) char _usesDeemphasizedTextAppearance;                                              //@synthesize _usesDeemphasizedTextAppearance=__usesDeemphasizedTextAppearance - In the implementation block
@property (nonatomic,readonly) NSArray * filteredCandidates;                                                    //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateGridCollectionView * collectionView; 
@property (assign,nonatomic) id<UIKeyboardCandidateGridCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                         //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                       //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,retain) NSArray * candidateGroups;                                                         //@synthesize candidateGroups=_candidateGroups - In the implementation block
@property (assign,nonatomic) float rowHeight;                                                                   //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI35 visualStyling;                                                     //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                                         //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) char layoutExtensionCandidates;                                                    //@synthesize layoutExtensionCandidates=_layoutExtensionCandidates - In the implementation block
@property (nonatomic,readonly) UIButton * padInlineFloatingArrowButton;                                         //@synthesize padInlineFloatingArrowButton=_padInlineFloatingArrowButton - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                               //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) char hasSecondaryCandidates;                                                       //@synthesize hasSecondaryCandidates=_hasSecondaryCandidates - In the implementation block
@property (assign,nonatomic) char singleLineMode;                                                               //@synthesize singleLineMode=_singleLineMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<UIKeyboardCandidateGridCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<UIKeyboardCandidateGridCollectionViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)layout;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(UIKeyboardCandidateGridCollectionView *)collectionView;
-(id)selectedItemIndexPath;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(char)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(char)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
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
-(char)handleNumberKey:(unsigned)arg1 ;
-(char)hasNextPage;
-(char)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)secureCandidateRenderTraits;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setVisualStyling:(SCD_Struct_UI35)arg1 ;
-(SCD_Struct_UI35)visualStyling;
-(unsigned)maxNumberOfProactiveCells;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(void)loadSecondaryCandidatesView;
-(char)hasSecondaryCandidates;
-(UIKBCandidateCollectionView *)secondaryCandidatesView;
-(int)candidatesVisualStyle;
-(void)setSecondaryCandidatesView:(UIKBCandidateCollectionView *)arg1 ;
-(UIView *)headerView;
-(void)scrollToTopWithAnimation:(char)arg1 ;
-(void)scrollToTopWithAnimation:(char)arg1 revealHeaderView:(char)arg2 ;
-(void)scrollToBottomWithAnimation:(char)arg1 ;
-(void)set_usesDeemphasizedTextAppearance:(char)arg1 ;
-(UIKeyboardCandidateGridLayout *)collectionViewGridLayout;
-(char)_usesDeemphasizedTextAppearance;
-(NSArray *)candidateGroups;
-(unsigned)padInlineHighlightedRowIndex;
-(void)padInlineFloatingExpand;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSecondaryCandidatesViewIsCurrent:(char)arg1 ;
-(unsigned)groupsCount;
-(char)secondaryCandidatesViewIsCurrent;
-(id)groupAtIndex:(unsigned)arg1 ;
-(unsigned)candidateIndexOffset;
-(id)firstCandidateIndexPathInGroupAtIndex:(unsigned)arg1 ;
-(id)lastCandidateIndexPathInGroupAtIndex:(unsigned)arg1 ;
-(void)updateHeaderView;
-(void)updateIndexTitles;
-(char)supportsNumberKeySelection;
-(void)setSupportsNumberKeySelection:(char)arg1 ;
-(char)padInlineFloatingIsExpanded;
-(void)setCandidateGroups:(NSArray *)arg1 ;
-(void)setHasSecondaryCandidates:(char)arg1 ;
-(float)groupBarWidth;
-(void)setGroupBarWidth:(float)arg1 ;
-(void)scrollViewIndexChanged:(id)arg1 ;
-(id)indexPathForCandidate:(id)arg1 ;
-(id)firstCandidateIndexPath;
-(char)layoutExtensionCandidates;
-(void)setLayoutExtensionCandidates:(char)arg1 ;
-(void)stepOneLine:(char)arg1 ;
-(id)candidateAtIndexPath:(id)arg1 ;
-(NSArray *)filteredCandidates;
-(unsigned)rowIndexForCellAtIndexPath:(id)arg1 ;
-(CGSize)rowSizeForGridLayout;
-(void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1 ;
-(void)candidateViewDidFinishExtending;
-(id)lastCandidateIndexPath;
-(UIButton *)padInlineFloatingArrowButton;
-(char)singleLineMode;
-(void)setSingleLineMode:(char)arg1 ;
@end

