/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <System/SiriAlternativeParaphraseAlternativeViewControllerDelegate.h>

@class SAARParaphrasedAlternativeResultsPod, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NSString;

@interface SiriAlternativeParaphraseAlternativeViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SiriAlternativeParaphraseAlternativeViewControllerDelegate> {

	SAARParaphrasedAlternativeResultsPod* _resultsPod;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSMutableArray* _viewArray;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createViewArray;
-(float)viewControllerExpectedWidth;
-(void)performAceCommands:(id)arg1 userUtterance:(id)arg2 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setAceObject:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(char)removedAfterDialogProgresses;
-(float)desiredHeightForTransparentHeaderView;
-(char)wantsConfirmationInsets;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(Class)transparentHeaderViewClass;
@end
