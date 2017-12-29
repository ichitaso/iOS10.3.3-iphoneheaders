/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class _MFConversationTransitionWrapperView, UIView, UINavigationBar, MFConversationViewCell, NSString;

@interface MFInteractiveMessageDismissalTransition : NSObject <UIViewControllerInteractiveTransitioning> {

	_MFConversationTransitionWrapperView* _transitionView;
	UIView* _navBarTransitionView;
	UIView* _fromView;
	CGRect _toFrame;
	CGRect _fromFrame;
	UINavigationBar* _navBar;
	float _percentComplete;
	float _rangeOfMotion;
	float _targetScale;
	MFConversationViewCell* _conversationCell;
	id<UIViewControllerContextTransitioning> _transitionContext;
	CGPoint _translation;
	CGPoint _velocity;

}

@property (nonatomic,retain) MFConversationViewCell * conversationCell;                               //@synthesize conversationCell=_conversationCell - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) float percentComplete;                                                 //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) float rangeOfMotion;                                                   //@synthesize rangeOfMotion=_rangeOfMotion - In the implementation block
@property (assign,nonatomic) CGPoint translation;                                                     //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                                        //@synthesize velocity=_velocity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float completionSpeed; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) char wantsInteractiveStart; 
-(float)rangeOfMotion;
-(void)setConversationCell:(MFConversationViewCell *)arg1 ;
-(MFConversationViewCell *)conversationCell;
-(void)_completeTransitionAnimationCancelled:(char)arg1 ;
-(void)dealloc;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setVelocity:(CGPoint)arg1 ;
-(void)cancelInteractiveTransition;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)finishInteractiveTransition;
-(float)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(float)arg1 ;
-(CGPoint)velocity;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end

