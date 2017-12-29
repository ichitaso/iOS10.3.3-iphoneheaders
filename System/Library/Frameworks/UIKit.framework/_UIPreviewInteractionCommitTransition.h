/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, UIWindow;

@interface _UIPreviewInteractionCommitTransition : NSObject {

	UIViewController* _viewController;
	UIWindow* _currentCommitEffectWindow;

}

@property (nonatomic,retain) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIWindow * currentCommitEffectWindow;              //@synthesize currentCommitEffectWindow=_currentCommitEffectWindow - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithPresentedViewController:(id)arg1 ;
-(void)performTransitionWithPresentationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentCommitEffectWindow:(UIWindow *)arg1 ;
-(id)_preferredTransitionAnimator;
-(void)_applyCommitEffectTransformToView:(id)arg1 ;
-(UIWindow *)currentCommitEffectWindow;
@end
