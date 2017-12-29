/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PassThroughViewController.h>
#import <Maps/PassThroughViewControllerDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/ContainerProtocol.h>
#import <Maps/ContainerStyleManagerProtocol.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Maps/ContainerDynamicsDelegate.h>

@protocol ContainerDelegate, StackedChromeModeController, ContaineeProtocol;
@class NSString, CardAnimation, ContainerStyleManager, ContainerGestureManager, ContainerTransitionManager, ContainerStack, IOSChromeViewController, UIView, UIViewController, CardAnimationManager;

@interface ContainerViewController : PassThroughViewController <PassThroughViewControllerDelegate, GEOLogContextDelegate, ContainerProtocol, ContainerStyleManagerProtocol, UIViewControllerTransitioningDelegate, ContainerDynamicsDelegate> {

	ContainerStyleManager* _containerStyleManager;
	ContainerGestureManager* _gestureManager;
	ContainerTransitionManager* _transitionManager;
	ContainerStack* _containerStack;
	CGSize _nextSize;
	char _shouldEndTransitionWhenAnimationCompletes;
	char _chromeHidden;
	char _fullscreenMode;
	char _transitioning;
	char _allowsLimitedInteractionOnly;
	unsigned _containeeLayout;
	id<ContainerDelegate> _containerDelegate;
	id<StackedChromeModeController> _mode;
	IOSChromeViewController* _chromeViewController;
	UIView* _containerView;
	UIViewController*<ContaineeProtocol> _currentViewController;
	CardAnimationManager* _animationManager;

}

@property (assign,nonatomic,__weak) id<ContainerDelegate> containerDelegate;                          //@synthesize containerDelegate=_containerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<StackedChromeModeController> mode;                             //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) IOSChromeViewController * chromeViewController;                   //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (assign,nonatomic) char allowOnlyStandardStyle; 
@property (assign,nonatomic) char chromeHidden;                                                       //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (assign,nonatomic) char fullscreenMode;                                                     //@synthesize fullscreenMode=_fullscreenMode - In the implementation block
@property (assign,nonatomic) char transitioning;                                                      //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIViewController*<ContaineeProtocol> currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (nonatomic,readonly) ContainerGestureManager * gestureManager;                              //@synthesize gestureManager=_gestureManager - In the implementation block
@property (nonatomic,readonly) float topEdgeInset; 
@property (nonatomic,readonly) float bottomEdgeInset; 
@property (assign,nonatomic) char allowsLimitedInteractionOnly;                                       //@synthesize allowsLimitedInteractionOnly=_allowsLimitedInteractionOnly - In the implementation block
@property (nonatomic,readonly) CardAnimationManager * animationManager;                               //@synthesize animationManager=_animationManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * blurGroupName; 
@property (nonatomic,readonly) unsigned containerStyle; 
@property (nonatomic,readonly) unsigned containeeLayout;                                              //@synthesize containeeLayout=_containeeLayout - In the implementation block
@property (nonatomic,readonly) float availableHeight; 
@property (readonly) CardAnimation * cardHeightAnimation; 
-(void)updateLayoutAnimated:(char)arg1 ;
-(char)allowsLimitedInteractionOnly;
-(void)setAllowsLimitedInteractionOnly:(char)arg1 ;
-(IOSChromeViewController *)chromeViewController;
-(void)setChromeViewController:(IOSChromeViewController *)arg1 ;
-(void)presentController:(id)arg1 ;
-(void)presentController:(id)arg1 animated:(char)arg2 ;
-(void)presentController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentController:(id)arg1 animated:(char)arg2 useDefaultContaineeLayout:(char)arg3 ;
-(void)presentController:(id)arg1 animated:(char)arg2 useDefaultContaineeLayout:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)controller:(id)arg1 wantsLayout:(unsigned)arg2 ;
-(unsigned)originalLayoutForViewController:(id)arg1 ;
-(void)replaceCurrentWithController:(id)arg1 ;
-(void)popLastViewControllerAnimated:(char)arg1 ;
-(void)popLastViewControllerAnimated:(char)arg1 useDefaultContaineeLayout:(char)arg2 ;
-(void)popLastViewControllerFromViewController:(id)arg1 animated:(char)arg2 ;
-(void)popLastViewControllerFromViewController:(id)arg1 animated:(char)arg2 useDefaultContaineeLayout:(char)arg3 ;
-(unsigned)overriddenLayoutForCurrentController:(unsigned)arg1 ;
-(id)dragScrollTracker;
-(id)dragGestureTracker;
-(NSString *)blurGroupName;
-(unsigned)containerStyle;
-(unsigned)containeeLayout;
-(float)availableHeight;
-(CardAnimation *)cardHeightAnimation;
-(id)passThroughView;
-(id)heightsForCurrentContainee;
-(void)updateHeightConstraint:(id)arg1 withValue:(float)arg2 ;
-(id)dynamicsView;
-(void)containerStyleManagerWillChangeStyle:(unsigned)arg1 ;
-(void)containerStyleManagerConfigureLayoutForStyle:(unsigned)arg1 ;
-(void)containerStyleManagerDidChangeStyle:(unsigned)arg1 ;
-(void)setAllowOnlyStandardStyle:(char)arg1 ;
-(char)allowOnlyStandardStyle;
-(id)currentContaineeState;
-(void)willChangeStyle:(unsigned)arg1 ;
-(void)didChangeChangeStyle:(unsigned)arg1 ;
-(void)containee:(id)arg1 willChangeLayout:(unsigned)arg2 source:(unsigned)arg3 ;
-(void)containee:(id)arg1 didChangeLayout:(unsigned)arg2 ;
-(void)willPresentContainee:(id)arg1 animated:(char)arg2 ;
-(void)willResignContainee:(id)arg1 animated:(char)arg2 ;
-(void)didPresentContainee:(id)arg1 finished:(char)arg2 ;
-(void)didResignContainee:(id)arg1 finished:(char)arg2 ;
-(void)_updateOverrideTraitCollectionsForStyle:(unsigned)arg1 withDefaultTraits:(id)arg2 ;
-(int)VKApplicationUILayoutForStyle:(unsigned)arg1 ;
-(float)bottomEdgeInset;
-(char)shouldUpdateMapEdgeInsets;
-(void)updateMapEdgeInsets;
-(unsigned)transitionFrom:(id)arg1 to:(id)arg2 ;
-(void)setFullscreenMode:(char)arg1 ;
-(void)transitionEnded;
-(char)shouldPassPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(float)_mapPeek;
-(void)updateContaineeStackState;
-(void)setLayoutIfSupported:(unsigned)arg1 animated:(char)arg2 ;
-(void)setLayoutIfSupported:(unsigned)arg1 animated:(char)arg2 source:(unsigned)arg3 ;
-(void)snapToLayout:(unsigned)arg1 ;
-(id)containeeTransitionController;
-(void)contentHeightUpdatedWithValue:(float)arg1 ;
-(unsigned)nextBiggerLayout:(unsigned)arg1 ;
-(unsigned)nextSmallerLayout:(unsigned)arg1 ;
-(id<ContainerDelegate>)containerDelegate;
-(void)setContainerDelegate:(id<ContainerDelegate>)arg1 ;
-(char)fullscreenMode;
-(id)init;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(float)statusBarHeight;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewDidLoad;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)setMode:(id<StackedChromeModeController>)arg1 ;
-(id<StackedChromeModeController>)mode;
-(void)setChromeHidden:(char)arg1 ;
-(char)chromeHidden;
-(char)transitioning;
-(void)setTransitioning:(char)arg1 ;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(void)removeControllerFromStack:(id)arg1 ;
-(float)topEdgeInset;
-(CardAnimationManager *)animationManager;
-(ContainerGestureManager *)gestureManager;
-(UIViewController*<ContaineeProtocol>)currentViewController;
-(void)setCurrentViewController:(UIViewController*<ContaineeProtocol>)arg1 ;
@end
