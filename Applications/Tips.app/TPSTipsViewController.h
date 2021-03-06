/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <Tips/TPSViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Tips/TPSTipCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>
#import <Tips/TPSFetchControllerDelegate.h>

@protocol TPSTipsViewControllerDelegate;
@class UILabel, UIToolbar, NSMutableDictionary, TPSTipCellAppearance, NSArray, NSString, UICollectionView, TPSTip;

@interface TPSTipsViewController : TPSViewController <UICollectionViewDataSource, UICollectionViewDelegate, TPSTipCollectionViewCellDelegate, SFSafariViewControllerDelegate, TPSFetchControllerDelegate> {

	int _currentPagingIndex;
	char _scrollingTipContent;
	char _delegateCurrentTipUpdated;
	char _presentingShareSheet;
	char _animatingTipsScroll;
	char _updatingSize;
	CGSize _viewSize;
	UILabel* _pagingLabel;
	UIToolbar* _bottomActionToolbar;
	NSMutableDictionary* _tipsMap;
	TPSTipCellAppearance* _cellAppearance;
	id<TPSTipsViewControllerDelegate> _delegate;
	NSArray* _tips;
	NSString* _titleText;
	UICollectionView* _collectionView;
	TPSTip* _currentTip;
	NSString* _collectionID;

}

@property (assign,nonatomic,__weak) id<TPSTipsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tips;                                                   //@synthesize tips=_tips - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) TPSTip * currentTip;                                            //@synthesize currentTip=_currentTip - In the implementation block
@property (nonatomic,retain) NSString * collectionID;                                        //@synthesize collectionID=_collectionID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)fetchControllerDataUpdated:(id)arg1 listChanged:(char)arg2 ;
-(void)createViews;
-(id)initWithAppController:(id)arg1 ;
-(void)updateTips;
-(void)continueMovieForCurrentTip;
-(void)removeInlineMessageLabel;
-(void)fetchControllerWillStartLoading:(id)arg1 ;
-(void)fetchControllerDidFinishLoading:(id)arg1 ;
-(void)connectionChanged;
-(void)animateTipsScrollSafeGuard;
-(void)analyticsIncreaseCountForCurrentTipDelay;
-(TPSTip *)currentTip;
-(void)updateShareBarButtonItemForTip:(id)arg1 ;
-(void)updateNavigationTitle:(id)arg1 ;
-(NSArray *)tips;
-(void)updateTipForCell:(id)arg1 startMovie:(char)arg2 ;
-(void)analyticsIncreaseCountForCurrentTip;
-(id)tipForTipID:(id)arg1 ;
-(void)setCurrentTip:(TPSTip *)arg1 ;
-(void)shareCurrentTip:(id)arg1 ;
-(id)activityViewControllerForTip:(id)arg1 ;
-(id)cellForCurrentTip;
-(id)centerCell;
-(void)cellContentLoaded:(id)arg1 ;
-(void)updatePagingLabelToTip:(id)arg1 ;
-(void)ensureCellShowingOnScreenForSize:(CGSize)arg1 ;
-(void)showInlineLabelWithTitle:(id)arg1 message:(id)arg2 ;
-(char)scrollToTipIdIfAvailable:(id)arg1 animate:(char)arg2 ;
-(void)scrollToTipAtIndexPath:(id)arg1 animate:(char)arg2 forceScroll:(char)arg3 ;
-(id)centerCellIndexPath;
-(void)initCellAppearanceWithTrait:(id)arg1 size:(CGSize)arg2 ;
-(void)tipCollectionViewCell:(id)arg1 showLearnMoreForURL:(id)arg2 ;
-(void)tipCollectionViewCell:(id)arg1 showSafariViewForURL:(id)arg2 ;
-(void)tipCollectionViewCell:(id)arg1 showVideoForURL:(id)arg2 ;
-(char)tipCollectionViewCellCanShowMedia:(id)arg1 ;
-(void)setTips:(NSArray *)arg1 ;
-(char)scrollToTipIdIfAvailable:(id)arg1 ;
-(void)setDelegate:(id<TPSTipsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<TPSTipsViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSString *)titleText;
-(void)setCollectionID:(NSString *)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(NSString *)collectionID;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

