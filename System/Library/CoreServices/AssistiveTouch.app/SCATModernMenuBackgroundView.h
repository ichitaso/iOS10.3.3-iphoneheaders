/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@class SCATModernMenuBackgroundContainerView, _UIBackdropView;

@interface SCATModernMenuBackgroundView : UIView {

	CGPathRef _menuBorderPath;
	char _shouldRoundMenuCorners;
	SCATModernMenuBackgroundContainerView* _containerView;
	_UIBackdropView* _backdropView;
	int _tip;
	float _normalizedHorizontalTipCenter;

}

@property (nonatomic,retain) SCATModernMenuBackgroundContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                     //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) CGPathRef menuBorderPath; 
@property (assign,nonatomic) int tip;                                                            //@synthesize tip=_tip - In the implementation block
@property (assign,nonatomic) char shouldRoundMenuCorners;                                        //@synthesize shouldRoundMenuCorners=_shouldRoundMenuCorners - In the implementation block
@property (assign,nonatomic) float normalizedHorizontalTipCenter;                                //@synthesize normalizedHorizontalTipCenter=_normalizedHorizontalTipCenter - In the implementation block
-(char)scatPerformAction:(int)arg1 ;
-(char)scatSupportsAction:(int)arg1 ;
-(void)setMenuBorderPath:(CGPathRef)arg1 ;
-(float)_menuTipHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 includeTip:(char)arg2 ;
-(CGPathRef)_copyMenuPathWithNoTipForRect:(CGRect)arg1 ;
-(CGPathRef)_copyMenuPathWithTipForRect:(CGRect)arg1 ;
-(void)_updateBackdropWithPath:(CGPathRef)arg1 ;
-(char)shouldRoundMenuCorners;
-(float)normalizedHorizontalTipCenter;
-(float)_menuCornerRadius;
-(float)_menuTipBase;
-(float)_menuTipBaseCornerRadius;
-(float)_adjustedXAnchorPositionToClearCornersOfRect:(CGRect)arg1 ;
-(float)_menuTipCornerRadius;
-(CGPathRef)menuBorderPath;
-(void)setNormalizedHorizontalTipCenter:(float)arg1 ;
-(id)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(id)scatOverrideCursorTheme;
-(void)setShouldRoundMenuCorners:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SCATModernMenuBackgroundContainerView *)containerView;
-(void)setContainerView:(SCATModernMenuBackgroundContainerView *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(int)tip;
-(void)setTip:(int)arg1 ;
@end

