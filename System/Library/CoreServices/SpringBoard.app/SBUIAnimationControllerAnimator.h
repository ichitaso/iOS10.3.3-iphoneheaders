/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBViewControllerAnimatedTransitioning.h>

@class SBUIAnimationController, NSString;

@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning> {

	SBUIAnimationController* _animationController;

}

@property (nonatomic,__weak,readonly) SBUIAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transitionAnimationFactory:(id)arg1 ;
-(id)initWithAnimationController:(id)arg1 ;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(SBUIAnimationController *)animationController;
@end

