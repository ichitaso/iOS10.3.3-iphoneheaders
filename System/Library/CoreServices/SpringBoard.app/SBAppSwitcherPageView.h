/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBAppSwitcherPageContentView, SBAppSwitcherPageViewDelegate;
@class UIView, SBDisplayItem, SBAppSwitcherSoftOutlineShadowView, SBAppSwitcherSettings;

@interface SBAppSwitcherPageView : UIView {

	UIView* _hitTestBlocker;
	UIView*<SBAppSwitcherPageContentView> _view;
	UIView* _overlayView;
	SBDisplayItem* _displayItem;
	UIView* _contentDarkeningView;
	int _shadowStyle;
	float _shadowAlpha;
	float _cornerRadius;
	SBAppSwitcherSoftOutlineShadowView* _shadowView;
	SBAppSwitcherSettings* _settings;
	UIView* auxiliaryView;
	id<SBAppSwitcherPageViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView*<SBAppSwitcherPageContentView> view;                     //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) SBDisplayItem * displayItem;                                    //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,retain) UIView * overlay;                                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * auxiliaryView; 
@property (assign,nonatomic) int shadowStyle;                                                //@synthesize shadowStyle=_shadowStyle - In the implementation block
@property (assign,nonatomic) float shadowAlpha;                                              //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) float overlayAlpha; 
@property (assign,nonatomic) float contentAlpha; 
@property (assign,nonatomic) float darkeningAlpha; 
@property (assign,nonatomic) float cornerRadius;                                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) char shouldClipShadow; 
@property (assign,nonatomic) CGRect shadowClippingFrame; 
@property (assign,nonatomic,__weak) id<SBAppSwitcherPageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)shadowOutset;
-(CGPoint)_centerForSubviewLayout;
-(CGAffineTransform)_scaleTransform;
-(CGAffineTransform)_overlayTransform;
-(void)setView:(id)arg1 animated:(char)arg2 ;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)updateTransitionProgress:(float)arg1 ;
-(void)interactionDidEnd:(char)arg1 ;
-(void)transitionDidEnd:(char)arg1 forPresentation:(char)arg2 ;
-(void)_setupShadowImage;
-(void)setBlocksTouches:(char)arg1 ;
-(void)setShadowStyle:(int)arg1 ;
-(void)setOverlayAlpha:(float)arg1 ;
-(float)overlayAlpha;
-(void)setDarkeningAlpha:(float)arg1 ;
-(float)darkeningAlpha;
-(void)setShouldClipShadow:(char)arg1 ;
-(char)shouldClipShadow;
-(void)setShadowClippingFrame:(CGRect)arg1 ;
-(CGRect)shadowClippingFrame;
-(int)shadowStyle;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(SBDisplayItem *)displayItem;
-(void)viewDismissing:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)invalidate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShadowAlpha:(float)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)layoutSubviews;
-(void)setDelegate:(id<SBAppSwitcherPageViewDelegate>)arg1 ;
-(id<SBAppSwitcherPageViewDelegate>)delegate;
-(UIView*<SBAppSwitcherPageContentView>)view;
-(void)setView:(UIView*<SBAppSwitcherPageContentView>)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(float)shadowAlpha;
-(UIView *)overlay;
-(void)_updateShadow;
-(void)_orderSubviews;
-(CGRect)_viewFrame;
-(void)setContentAlpha:(float)arg1 ;
-(float)contentAlpha;
-(void)setOverlay:(UIView *)arg1 ;
-(UIView *)auxiliaryView;
-(void)_updateCornerRadius;
@end

