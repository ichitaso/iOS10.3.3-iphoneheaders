/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIInterfaceActionVisualStyle, NSArray, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView {

	UIInterfaceActionVisualStyle* _visualStyle;
	int _axis;
	int _distribution;
	NSArray* _arrangedContentViews;
	unsigned _visualCornerPosition;
	UIStackView* _stackView;
	NSArray* _arrangedContentSeparatorViews;
	NSArray* _arrangedContentViewsDistributionConstraints;

}

@property (nonatomic,readonly) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentSeparatorViews;                            //@synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentViewsDistributionConstraints;              //@synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic) int axis;                                                             //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) int distribution;                                                     //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSArray * arrangedContentViews;                                       //@synthesize arrangedContentViews=_arrangedContentViews - In the implementation block
@property (assign,nonatomic) unsigned visualCornerPosition;                                        //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAxis:(int)arg1 ;
-(void)setDistribution:(int)arg1 ;
-(void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(/*^block*/id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(int)axis;
-(void)reloadDisplayedContentVisualStyle;
-(NSArray *)arrangedContentViews;
-(void)_reloadStackViewArrangement;
-(void)_updateSeparatorConstantSizedAxis;
-(void)_updateRoundedCornerPositionForActionRepViews;
-(void)_updateActionRepresentationViewsOnlyKeepVisibleContentInHierarchySetting;
-(char)_isVerticalLayout;
-(int)_separatorConstantSizedAxis;
-(void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
-(CGRect)_stackViewFrameForViewBounds:(CGRect)arg1 ;
-(void)_reloadContentDistributionConstraintsForArrangedContentViews;
-(CGSize)_systemLayoutSizeFittingStackView;
-(CGRect)_viewBoundsForStackViewFrame:(CGRect)arg1 ;
-(int)_dimensionAttributeToConstrainEqual;
-(void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(char)arg2 ;
-(void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1 ;
-(void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned)arg2 ;
-(unsigned)visualCornerPosition;
-(void)setVisualCornerPosition:(unsigned)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(void)setArrangedContentViews:(NSArray *)arg1 ;
-(float)fittingWidthForLayoutAxis:(int)arg1 ;
-(int)distribution;
-(UIStackView *)stackView;
-(NSArray *)arrangedContentSeparatorViews;
-(NSArray *)arrangedContentViewsDistributionConstraints;
@end

