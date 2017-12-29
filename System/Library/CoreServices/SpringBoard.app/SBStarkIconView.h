/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconView.h>

@interface SBStarkIconView : SBIconView {

	char _alwaysAppearsFocused;

}

@property (assign,nonatomic) char alwaysAppearsFocused;              //@synthesize alwaysAppearsFocused=_alwaysAppearsFocused - In the implementation block
+(CGSize)defaultIconSize;
+(CGSize)maxLabelSize;
+(UIEdgeInsets)minimumInterIconSpacing;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(float)_labelHeight;
+(int)_defaultIconFormat;
+(char)canShowLabelAccessoryView;
+(UIEdgeInsets)iconImagePaddingInsets;
-(void)setAlwaysAppearsFocused:(char)arg1 ;
-(CGRect)_frameForLabel;
-(id)_labelImageParameters;
-(char)alwaysAppearsFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)canBecomeFocused;
-(void)prepareForReuse;
@end
