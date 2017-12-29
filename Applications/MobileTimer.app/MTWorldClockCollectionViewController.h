/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <MobileTimer/WorldClockCollectionCellDelegate.h>

@protocol MTWorldClockCollectionViewDelegate;
@class WorldClockCollectionCell, MTWorldClockGridLayout, NSString;

@interface MTWorldClockCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, WorldClockCollectionCellDelegate> {

	float _cellHeight;
	id<MTWorldClockCollectionViewDelegate> _delegate;
	WorldClockCollectionCell* _sizingCell;

}

@property (nonatomic,retain) WorldClockCollectionCell * sizingCell;                               //@synthesize sizingCell=_sizingCell - In the implementation block
@property (assign,nonatomic,__weak) id<MTWorldClockCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MTWorldClockGridLayout * collectionViewLayout; 
@property (nonatomic,readonly) float cellHeight;                                                  //@synthesize cellHeight=_cellHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleContentSizeChange;
-(WorldClockCollectionCell *)sizingCell;
-(void)scrollToPageContainingIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)removeCityAtIndexPath:(id)arg1 ;
-(void)handleScrollEnd;
-(void)setSizingCell:(WorldClockCollectionCell *)arg1 ;
-(void)deleteCell:(id)arg1 ;
-(void)setDelegate:(id<MTWorldClockCollectionViewDelegate>)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<MTWorldClockCollectionViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setEditing:(char)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(float)cellHeight;
@end

