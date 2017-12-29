/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HOGridActionSetListViewController.h>

@protocol HOSelectableGridActionSetListViewControllerDelegate;
@class HFMutableSetDiff;

@interface HOSelectableGridActionSetListViewController : HOGridActionSetListViewController {

	id<HOSelectableGridActionSetListViewControllerDelegate> _delegate;
	HFMutableSetDiff* _mutableSelectedActionSets;

}

@property (nonatomic,retain) HFMutableSetDiff * mutableSelectedActionSets;                                         //@synthesize mutableSelectedActionSets=_mutableSelectedActionSets - In the implementation block
@property (assign,nonatomic,__weak) id<HOSelectableGridActionSetListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2 ;
-(void)setMutableSelectedActionSets:(HFMutableSetDiff *)arg1 ;
-(void)_selectedItemStateChanged:(id)arg1 isSelected:(char)arg2 accessoryViewCell:(id)arg3 ;
-(HFMutableSetDiff *)mutableSelectedActionSets;
-(void)selectedActionSetStateChanged:(id)arg1 isSelected:(char)arg2 ;
-(id)init;
-(void)setDelegate:(id<HOSelectableGridActionSetListViewControllerDelegate>)arg1 ;
-(id<HOSelectableGridActionSetListViewControllerDelegate>)delegate;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(char)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(void)_updateSelectionState:(char)arg1 forCell:(id)arg2 ;
@end

