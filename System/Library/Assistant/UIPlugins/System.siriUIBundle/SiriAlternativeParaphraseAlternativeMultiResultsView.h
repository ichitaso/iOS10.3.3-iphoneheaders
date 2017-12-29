/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol SiriAlternativeParaphraseAlternativeViewControllerDelegate;
@class UIView, SAARAlternativeResultsView, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NSString;

@interface SiriAlternativeParaphraseAlternativeMultiResultsView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UIView* _containerView;
	SAARAlternativeResultsView* _result;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSMutableArray* _viewArray;
	id<SiriAlternativeParaphraseAlternativeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriAlternativeParaphraseAlternativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlternativeResult:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SiriAlternativeParaphraseAlternativeViewControllerDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriAlternativeParaphraseAlternativeViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

