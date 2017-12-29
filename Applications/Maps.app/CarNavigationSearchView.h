/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, NSArray, NSString;

@interface CarNavigationSearchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	NSArray* _categories;
	/*^block*/id _siriSearchHandler;
	/*^block*/id _categorySearchHandler;

}

@property (nonatomic,retain) NSArray * categories;                  //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy) id siriSearchHandler;                    //@synthesize siriSearchHandler=_siriSearchHandler - In the implementation block
@property (nonatomic,copy) id categorySearchHandler;                //@synthesize categorySearchHandler=_categorySearchHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)preferredHeightForAvailableSize:(CGSize)arg1 ;
-(id)siriSearchHandler;
-(void)setSiriSearchHandler:(id)arg1 ;
-(id)categorySearchHandler;
-(void)setCategorySearchHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(unsigned)_numberOfItems;
@end

