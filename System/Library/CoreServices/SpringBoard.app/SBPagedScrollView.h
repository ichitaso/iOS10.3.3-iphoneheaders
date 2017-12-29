/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@class NSArray;

@interface SBPagedScrollView : BSUIScrollView {

	char _changingScrollViewLayout;
	NSArray* _pageViews;
	unsigned _currentPageIndex;
	NSRange _visiblePageRange;

}

@property (assign,nonatomic) unsigned currentPageIndex;              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) NSRange visiblePageRange;               //@synthesize visiblePageRange=_visiblePageRange - In the implementation block
@property (nonatomic,copy) NSArray * pageViews;                      //@synthesize pageViews=_pageViews - In the implementation block
-(char)scrollToPageAtIndex:(unsigned)arg1 animated:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(char)resetContentOffsetToCurrentPage;
-(NSRange)visiblePageRange;
-(void)setPageViews:(NSArray *)arg1 ;
-(float)pageRelativeScrollOffset;
-(CGPoint)contentOffsetForPageAtIndex:(unsigned)arg1 ;
-(SCD_Struct_SB10)currentScrollInterval;
-(void)_updateVisiblePages;
-(void)_layoutPages;
-(void)_updateCurrentPageForScrollOffset;
-(void)setVisiblePageRange:(NSRange)arg1 ;
-(char)scrollToPageAtIndex:(unsigned)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned)arg1 ;
-(void)_bs_didScrollWithContext:(SCD_Struct_SB33)arg1 ;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(void)_layoutScrollView;
-(NSArray *)pageViews;
@end
