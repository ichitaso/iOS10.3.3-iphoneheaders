/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <UIKit/UICollectionView.h>

@interface CRCollectionView : UICollectionView

@property (nonatomic,readonly) unsigned currentPageIndex; 
-(void)scrollToSectionAtIndex:(unsigned)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)cr_ScrollToItemAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(unsigned)currentPageIndex;
-(CGRect)frameForSectionAtIndex:(unsigned)arg1 ;
@end
