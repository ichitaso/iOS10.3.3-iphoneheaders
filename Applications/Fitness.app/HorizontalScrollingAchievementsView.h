/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@protocol HorizontalScrollingAchievementsView;
@class UICollectionView, HorizontalScrollingAchievementsDataSource, NSArray;

@interface HorizontalScrollingAchievementsView : UIView {

	UICollectionView* _collectionView;
	HorizontalScrollingAchievementsDataSource* _dataSource;
	NSArray* _achievements;
	id<HorizontalScrollingAchievementsView> _delegate;
	UIEdgeInsets _scrollViewContentInset;

}

@property (nonatomic,copy) NSArray * achievements;                                                 //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollViewContentInset;                                  //@synthesize scrollViewContentInset=_scrollViewContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<HorizontalScrollingAchievementsView> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_createLayout;
-(UIEdgeInsets)scrollViewContentInset;
-(void)setScrollViewContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<HorizontalScrollingAchievementsView>)arg1 ;
-(id<HorizontalScrollingAchievementsView>)delegate;
-(NSArray *)achievements;
-(void)setAchievements:(NSArray *)arg1 ;
@end

