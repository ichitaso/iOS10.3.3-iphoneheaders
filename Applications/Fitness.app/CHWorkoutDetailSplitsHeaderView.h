/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@protocol CHWorkoutSplitsHeaderViewDelegate;
@class UIView, UILabel, UIButton;

@interface CHWorkoutDetailSplitsHeaderView : UIView {

	UIView* _separatorView;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UIButton* _expandButton;
	char _expanded;
	id<CHWorkoutSplitsHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic) char expanded;                                                      //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<CHWorkoutSplitsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)preferredHeight;
-(void)_constrainViews;
-(void)_transformButtonForExpandedState:(char)arg1 ;
-(void)restoreExpandedState:(char)arg1 ;
-(void)hideSplitsButton;
-(void)configureWithWorkout:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CHWorkoutSplitsHeaderViewDelegate>)arg1 ;
-(id<CHWorkoutSplitsHeaderViewDelegate>)delegate;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)_buttonTapped:(id)arg1 ;
@end

