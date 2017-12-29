/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSMutableArray, UIView, NSString;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	char _transitionIsInFlight;
	NSMutableArray* _alongsideAnimations;
	NSMutableArray* _alongsideCompletions;
	UIView* _containerView;

}

@property (assign,nonatomic) UIView * containerView;                               //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) char animated; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) char initiallyInteractive; 
@property (nonatomic,readonly) char isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) char interactive; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) float percentComplete; 
@property (nonatomic,readonly) float completionVelocity; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(char)isInteractive;
-(float)percentComplete;
-(void)_runAlongsideCompletionsAndClearAlongsideAnimations;
-(int)presentationStyle;
-(char)isRotating;
-(char)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runAlongsideAnimations;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_runAlongsideCompletionsAfterCommit;
-(char)isInterruptible;
-(char)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(char)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isCancelled;
-(char)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_mainContext;
-(double)transitionDuration;
-(int)completionCurve;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(char)isAnimated;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(char)initiallyInteractive;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(CGAffineTransform)targetTransform;
-(id)_alongsideAnimations:(char)arg1 ;
-(id)_alongsideCompletions:(char)arg1 ;
-(void)_runAlongsideCompletions;
-(float)completionVelocity;
@end

