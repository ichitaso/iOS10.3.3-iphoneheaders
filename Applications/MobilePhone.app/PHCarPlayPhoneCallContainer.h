/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@protocol MPCarPlayPhoneCallContainerDataSource, MPCarPlayPhoneCallContainerDelegate;
@class NSMutableArray;

@interface PHCarPlayPhoneCallContainer : UIView {

	char _shouldMerge;
	char _merging;
	id<MPCarPlayPhoneCallContainerDataSource> _dataSource;
	id<MPCarPlayPhoneCallContainerDelegate> _delegate;
	NSMutableArray* _visibleCells;

}

@property (retain) NSMutableArray * visibleCells;                                               //@synthesize visibleCells=_visibleCells - In the implementation block
@property (assign) char shouldMerge;                                                            //@synthesize shouldMerge=_shouldMerge - In the implementation block
@property (getter=isMerging) char merging;                                                      //@synthesize merging=_merging - In the implementation block
@property (assign,nonatomic) id<MPCarPlayPhoneCallContainerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<MPCarPlayPhoneCallContainerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)setNeedsMerge;
-(id)_reloadQueue;
-(char)shouldReloadCellsWithNumberOfCells:(unsigned)arg1 ;
-(void)updateNumberOfCellsWithNewValue:(unsigned)arg1 animated:(char)arg2 ;
-(void)updateCell:(id)arg1 atIndex:(unsigned)arg2 animated:(char)arg3 ;
-(void)createVisibleCells:(unsigned)arg1 ;
-(void)updateLayoutAnimated:(char)arg1 ;
-(void)mergeVisibleCells;
-(void)removeVisibleCells:(unsigned)arg1 ;
-(void)updateAllCellConstraints;
-(void)animateLayoutOfViewWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)mergeAllCellConstraints;
-(void)phoneCallViewCellTapped:(id)arg1 ;
-(void)addConstraintsForNewCell:(id)arg1 ;
-(id)constraintToFillContainerWithLeftOfCell:(id)arg1 ;
-(id)constraintToFillContainerWithRightOfCell:(id)arg1 ;
-(void)addRelationForWidthOfCell:(id)arg1 ;
-(void)removeAllConstraintsForCell:(id)arg1 ;
-(void)addRelationForLeftOfCell:(id)arg1 ;
-(void)addRelationForRightOfCell:(id)arg1 ;
-(void)setVisibleCells:(NSMutableArray *)arg1 ;
-(char)shouldMerge;
-(void)setShouldMerge:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<MPCarPlayPhoneCallContainerDataSource>)arg1 ;
-(void)setDelegate:(id<MPCarPlayPhoneCallContainerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<MPCarPlayPhoneCallContainerDataSource>)dataSource;
-(id<MPCarPlayPhoneCallContainerDelegate>)delegate;
-(NSMutableArray *)visibleCells;
-(void)setMerging:(char)arg1 ;
-(char)isMerging;
-(void)reloadDataAnimated:(char)arg1 ;
@end

