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

@class UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NSString, SAUIAlternateProviderSnippet;

@interface ACAssistantAlternateProviderController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSMutableArray* _viewArray;
	NSString* _snippetTitle;
	SAUIAlternateProviderSnippet* _snippet;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlternateProviderSnippet:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(float)desiredHeightForTransparentHeaderView;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(Class)transparentHeaderViewClass;
@end

