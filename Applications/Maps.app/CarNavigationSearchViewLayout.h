/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMapTable;

@interface CarNavigationSearchViewLayout : UICollectionViewLayout {

	NSMapTable* _layoutAttributes;
	CGSize _contentSize;

}
-(float)preferredHeightForItemCount:(unsigned)arg1 availableSize:(CGSize)arg2 ;
-(void)getNumberOfRows:(unsigned*)arg1 itemSize:(CGSize*)arg2 forItemCount:(unsigned)arg3 availableSize:(CGSize)arg4 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

