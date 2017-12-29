/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/IMViewController.h>

@class UIColor, UIImage, UIView, UIImageView, UIViewController, _UIBackdropView;

@interface IMSplitViewController : IMViewController {

	float _distance;
	float _dividerWidth;
	UIColor* _dividerColor;
	UIImage* _dividerImage;
	UIView* _leftView;
	UIView* _rightView;
	UIImageView* _divider;
	UIViewController* _rightViewController;
	UIViewController* _leftViewController;
	float _leftViewControllerWidth;
	char _showLeftViewInPortrait;
	_UIBackdropView* _backdropView;
	char _usesBackdropView;
	char _ignoresDistanceInPortrait;
	char _usesDidLayoutSubviews;
	char _showDividerDuringRotation;
	float _portraitDistance;

}

@property (assign,nonatomic) char usesBackdropView;                               //@synthesize usesBackdropView=_usesBackdropView - In the implementation block
@property (assign,nonatomic) float distance;                                      //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) float portraitDistance;                              //@synthesize portraitDistance=_portraitDistance - In the implementation block
@property (assign,nonatomic) char ignoresDistanceInPortrait;                      //@synthesize ignoresDistanceInPortrait=_ignoresDistanceInPortrait - In the implementation block
@property (assign,nonatomic) char usesDidLayoutSubviews;                          //@synthesize usesDidLayoutSubviews=_usesDidLayoutSubviews - In the implementation block
@property (assign,nonatomic) char showDividerDuringRotation;                      //@synthesize showDividerDuringRotation=_showDividerDuringRotation - In the implementation block
@property (assign,nonatomic) float dividerWidth;                                  //@synthesize dividerWidth=_dividerWidth - In the implementation block
@property (nonatomic,retain) UIColor * dividerColor;                              //@synthesize dividerColor=_dividerColor - In the implementation block
@property (nonatomic,retain) UIImage * dividerImage;                              //@synthesize dividerImage=_dividerImage - In the implementation block
@property (nonatomic,retain) UIViewController * leftViewController;               //@synthesize leftViewController=_leftViewController - In the implementation block
@property (nonatomic,retain) UIViewController * rightViewController;              //@synthesize rightViewController=_rightViewController - In the implementation block
@property (assign,nonatomic) float leftViewControllerWidth;                       //@synthesize leftViewControllerWidth=_leftViewControllerWidth - In the implementation block
@property (assign,nonatomic) char showLeftViewInPortrait;                         //@synthesize showLeftViewInPortrait=_showLeftViewInPortrait - In the implementation block
-(void)releaseViews;
-(void)setLeftViewController:(UIViewController *)arg1 ;
-(UIViewController *)leftViewController;
-(void)setLeftViewControllerWidth:(float)arg1 ;
-(UIViewController *)rightViewController;
-(char)showDividerDuringRotation;
-(float)portraitDistance;
-(char)showLeftViewInPortrait;
-(float)leftViewControllerWidth;
-(void)setPortraitDistance:(float)arg1 ;
-(void)setRightViewController:(UIViewController *)arg1 ;
-(void)setShowLeftViewInPortrait:(char)arg1 ;
-(char)usesBackdropView;
-(void)setUsesBackdropView:(char)arg1 ;
-(char)ignoresDistanceInPortrait;
-(void)setIgnoresDistanceInPortrait:(char)arg1 ;
-(char)usesDidLayoutSubviews;
-(void)setUsesDidLayoutSubviews:(char)arg1 ;
-(void)setShowDividerDuringRotation:(char)arg1 ;
-(void)dealloc;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setDistance:(float)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(UIColor *)dividerColor;
-(float)distance;
-(void)_layout;
-(void)setDividerColor:(UIColor *)arg1 ;
-(void)initCommon;
-(UIImage *)dividerImage;
-(void)setDividerImage:(UIImage *)arg1 ;
-(void)setDividerWidth:(float)arg1 ;
-(float)dividerWidth;
@end

