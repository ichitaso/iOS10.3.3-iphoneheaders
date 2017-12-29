/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SVSPagerViewDataSource, SVSPagerViewDelegate;
@class SVSPagingScrollView, UIView, NSString;

@interface SVSPagerView : UIView <UIScrollViewDelegate> {

	SVSPagingScrollView* _scrollView;
	char _scrollViewIsDragging;
	char _scrollViewIsScrollingBetweenPages;
	UIView* _activePageView;
	unsigned _transitionState;
	id<SVSPagerViewDataSource> _dataSource;
	id<SVSPagerViewDelegate> _delegate;

}

@property (assign,setter=_setScrollViewIsDragging:,getter=_scrollViewIsDragging,nonatomic) char scrollViewIsDragging;                                                     //@synthesize scrollViewIsDragging=_scrollViewIsDragging - In the implementation block
@property (assign,setter=_setScrollViewIsScrollingBetweenPages:,getter=_scrollViewIsScrollingBetweenPages,nonatomic) char scrollViewIsScrollingBetweenPages;              //@synthesize scrollViewIsScrollingBetweenPages=_scrollViewIsScrollingBetweenPages - In the implementation block
@property (nonatomic,retain) UIView * activePageView;                                                                                                                     //@synthesize activePageView=_activePageView - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) char pagingEnabled; 
@property (nonatomic,readonly) unsigned transitionState;                                                                                                                  //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic,__weak) id<SVSPagerViewDataSource> dataSource;                                                                                                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SVSPagerViewDelegate> delegate;                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)activePageView;
-(id)_pageViews;
-(void)addPageView:(id)arg1 ;
-(void)setActivePageView:(UIView *)arg1 ;
-(void)insertPageView:(id)arg1 atIndex:(int)arg2 ;
-(void)setActivePageView:(id)arg1 animated:(char)arg2 ;
-(char)_containsPageView:(id)arg1 ;
-(void)_updateTransitionState;
-(char)_multiplePageViewsAreVisible;
-(void)_setScrollViewIsScrollingBetweenPages:(char)arg1 ;
-(void)_setScrollViewIsDragging:(char)arg1 ;
-(void)_scrollingDidEnd;
-(id)_activePageViewBasedOnScrollViewPosition;
-(void)removePageView:(id)arg1 ;
-(char)_scrollViewIsDragging;
-(char)_scrollViewIsScrollingBetweenPages;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(id<SVSPagerViewDataSource>)arg1 ;
-(void)setDelegate:(id<SVSPagerViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SVSPagerViewDataSource>)dataSource;
-(id<SVSPagerViewDelegate>)delegate;
-(char)isPagingEnabled;
-(void)setPagingEnabled:(char)arg1 ;
-(unsigned)transitionState;
@end

