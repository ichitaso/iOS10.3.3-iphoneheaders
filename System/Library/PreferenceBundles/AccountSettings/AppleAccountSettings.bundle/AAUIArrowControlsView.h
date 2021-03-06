/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountSettings/AppleAccountSettings-Structs.h>
#import <UIKit/UIView.h>

@protocol AAUIArrowControlsViewDelegate;
@class UIButton;

@interface AAUIArrowControlsView : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	id<AAUIArrowControlsViewDelegate> _delegate;
	int _interfaceOrientation;

}

@property (assign,nonatomic) id<AAUIArrowControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * downButton;                                 //@synthesize downButton=_downButton - In the implementation block
@property (nonatomic,readonly) UIButton * upButton;                                   //@synthesize upButton=_upButton - In the implementation block
@property (assign,nonatomic) int interfaceOrientation;                                //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(float)defaultWidthForOrientation:(int)arg1 ;
+(float)defaultHeightForOrientation:(int)arg1 ;
-(UIButton *)upButton;
-(void)_arrowButtonWasTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<AAUIArrowControlsViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<AAUIArrowControlsViewDelegate>)delegate;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
-(UIButton *)downButton;
@end

