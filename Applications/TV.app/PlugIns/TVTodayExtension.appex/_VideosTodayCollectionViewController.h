/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/PlugIns/TVTodayExtension.appex/TVTodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@class UILabel, NSArray;

@interface _VideosTodayCollectionViewController : UICollectionViewController {

	UILabel* _noContentLabel;
	int _widgetActiveDisplayMode;
	int _titleStyle;
	NSArray* _items;

}

@property (assign,nonatomic) int widgetActiveDisplayMode;              //@synthesize widgetActiveDisplayMode=_widgetActiveDisplayMode - In the implementation block
@property (assign,nonatomic) int titleStyle;                           //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,copy) NSArray * items;                            //@synthesize items=_items - In the implementation block
-(void)setWidgetActiveDisplayMode:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)loadView;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(int)titleStyle;
-(void)setTitleStyle:(int)arg1 ;
-(int)widgetActiveDisplayMode;
@end

