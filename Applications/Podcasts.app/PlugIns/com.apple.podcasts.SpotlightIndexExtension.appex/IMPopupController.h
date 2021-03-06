/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class UIViewController, UIView, UIButton;

@interface IMPopupController : NSObject {

	id _delegate;
	int _transitionStyle;
	UIViewController* _parent;
	UIView* _dimmedView;
	UIViewController* _popup;
	UIButton* _mask;
	double _animationDuration;
	struct {
		unsigned delegateWillDismissPopup : 1;
		unsigned delegateDidDismissPopup : 1;
		unsigned delegateAnimatePresent : 1;
		unsigned delegateAnimateDismiss : 1;
		unsigned delegateAnimatePresentDismiss : 1;
	}  _popupFlags;

}

@property (assign,nonatomic) id<IMPopupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int transitionStyle;                                 //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (nonatomic,readonly) UIViewController * popup;                          //@synthesize popup=_popup - In the implementation block
@property (nonatomic,readonly) UIViewController * parent;                         //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) double animationDuration;                            //@synthesize animationDuration=_animationDuration - In the implementation block
-(void)dismissPopupViewControllerAnimated:(char)arg1 ;
-(void)presentPopupViewController:(id)arg1 parent:(id)arg2 dimmedView:(id)arg3 animated:(char)arg4 ;
-(void)onMaskTap:(id)arg1 ;
-(void)dismissPopupViewControllerAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<IMPopupControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IMPopupControllerDelegate>)delegate;
-(int)transitionStyle;
-(void)setTransitionStyle:(int)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
-(UIViewController *)popup;
-(UIViewController *)parent;
@end

