/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIInterfaceActionVisualSeparatorDisplayingUIInterfaceActionVisualSectionSeparatorDisplaying;
@class UIView, NSLayoutConstraint;

@interface _UIInterfaceActionSeparatorConstraintController : NSObject {

	float _constantAxisDimension;
	UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying> _separatorView;
	NSLayoutConstraint* _fixedHeightConstraint;
	NSLayoutConstraint* _fixedWidthConstraint;
	int _constantSizedAxis;

}

@property (nonatomic,__weak,readonly) UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying> separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * fixedHeightConstraint;                                                                                                //@synthesize fixedHeightConstraint=_fixedHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * fixedWidthConstraint;                                                                                                 //@synthesize fixedWidthConstraint=_fixedWidthConstraint - In the implementation block
@property (assign,nonatomic) int constantSizedAxis;                                                                                                                       //@synthesize constantSizedAxis=_constantSizedAxis - In the implementation block
@property (assign,nonatomic) float constantAxisDimension;                                                                                                                 //@synthesize constantAxisDimension=_constantAxisDimension - In the implementation block
-(void)_updateConstantSizedConstraints;
-(char)_isFixedWidth;
-(float)constantAxisDimension;
-(id)initWithSeparatorView:(id)arg1 ;
-(void)setConstantSizedAxis:(int)arg1 ;
-(void)setConstantAxisDimension:(float)arg1 ;
-(void)separatorViewDidUpdateConstraints;
-(UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying>)separatorView;
-(NSLayoutConstraint *)fixedHeightConstraint;
-(NSLayoutConstraint *)fixedWidthConstraint;
-(int)constantSizedAxis;
@end

