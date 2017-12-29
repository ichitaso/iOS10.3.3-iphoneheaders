/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITabBarControllerInterruptibleTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class NSString;

@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning> {

	char _transitionFromRight;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (assign,nonatomic) char transitionFromRight;                                                //@synthesize transitionFromRight=_transitionFromRight - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)setTransitionFromRight:(char)arg1 ;
-(void)interruptTabBarControllerTransition;
-(void)finishTransition;
-(char)transitionFromRight;
@end
