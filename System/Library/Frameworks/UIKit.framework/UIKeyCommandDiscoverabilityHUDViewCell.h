/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIKeyCommandDiscoverabilityHUDColumnView, NSArray;

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell {

	char _constraintsForTwoColumns;
	UIKeyCommandDiscoverabilityHUDColumnView* _leftColumnView;
	UIKeyCommandDiscoverabilityHUDColumnView* _rightColumnView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * leftColumnView;               //@synthesize leftColumnView=_leftColumnView - In the implementation block
@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * rightColumnView;              //@synthesize rightColumnView=_rightColumnView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                   //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) char constraintsForTwoColumns;                                           //@synthesize constraintsForTwoColumns=_constraintsForTwoColumns - In the implementation block
-(NSArray *)constraints;
-(UIKeyCommandDiscoverabilityHUDColumnView *)leftColumnView;
-(void)setLeftColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(UIKeyCommandDiscoverabilityHUDColumnView *)rightColumnView;
-(void)setRightColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(char)constraintsForTwoColumns;
-(void)setConstraintsForTwoColumns:(char)arg1 ;
@end
