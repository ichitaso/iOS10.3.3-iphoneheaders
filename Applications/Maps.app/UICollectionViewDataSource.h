/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDataSource <NSObject>
@optional
-(int)numberOfSectionsInCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(id)indexTitlesForCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(int)arg3;

@required
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

