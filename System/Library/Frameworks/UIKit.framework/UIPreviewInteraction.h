/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIPreviewInteractionDelegate;
@class UIView, _UITouchesObservingGestureRecognizer, _UIPreviewInteractionStateRecognizer, UITouch, CADisplayLink, _UIDeepPressAnalyzer, _UIFeedbackStatesBehavior, NSHashTable, NSString;

@interface UIPreviewInteraction : NSObject <UIGestureRecognizerDelegate> {

	UIView* _view;
	struct {
		unsigned interactive : 1;
		unsigned delegateDidPreventInteraction : 1;
		unsigned interactionRequiresRestart : 1;
		unsigned interactionWasCancelled : 1;
		unsigned previousProgressWasNegativeOrZero : 1;
		unsigned interactionPaused : 1;
		unsigned currentState : 3;
	}  _previewInteractionFlags;
	_UITouchesObservingGestureRecognizer* _touchObservingGestureRecognizer;
	_UITouchesObservingGestureRecognizer* _modalTouchObservingGestureRecognizer;
	_UIPreviewInteractionStateRecognizer* _currentInteractionStateRecognizer;
	UITouch* _currentTouch;
	CADisplayLink* _continuousEvaluationDisplayLink;
	_UIDeepPressAnalyzer* _deepPressAnalyzer;
	_UIFeedbackStatesBehavior* _feedbackBehavior;
	char _feedbackBehaviorTurnedOn;
	NSHashTable* _activeSystemAnimators;
	NSHashTable* _activeFailureRequirementGestureRecognizers;
	id<UIPreviewInteractionDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) UIView * view;                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<UIPreviewInteractionDelegate>)arg1 ;
-(id<UIPreviewInteractionDelegate>)delegate;
-(UIView *)view;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(void)cancelInteraction;
-(id)_touchObservingGestureRecognizerForView:(id)arg1 ;
-(void)_resetAfterInteraction;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)_endContinuousEvaluation;
-(void)_endUsingFeedbackIfNeeded;
-(void)_handleTouchObservingGesture:(id)arg1 ;
-(char)_interactionIsPaused;
-(void)_prepareForInteractionWithGestureRecognizer:(id)arg1 ;
-(void)_updateInteractionStateRecognizerForTouch:(id)arg1 ;
-(void)_prepareUsingFeedbackIfNeeded;
-(void)_endInteractionIfNeeded;
-(void)_updateAnimatorsIfNeeded;
-(void)_updateInteractionStateRecognizerForTouchForce:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(void)_prepareUsingFeedback;
-(void)_updateFailureRequirementGestureRecognizersIfNeeded;
-(char)_shouldCancelTransitionToState:(int)arg1 ;
-(void)_actuateFeedbackForStateIfNeeded:(int)arg1 ;
-(char)_delegateRespondsToCommitStateTransitions;
-(void)_endInteractiveStateTransitions;
-(void)_updateFeedbackTowardNextState:(int)arg1 progress:(float)arg2 ;
-(void)_turnOffFeedbackBehavior;
-(void)_turnOnFeedbackBehavior;
-(char)_delegateRespondsToPreviewStateCancellations;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)_pauseInteraction;
-(void)_resumeInteraction;
-(void)_attachToModalViewForRemainerOfInteraction:(id)arg1 ;
-(id)newAnimator;
-(id)newGestureRecognizerForFailureRelationship;
-(id)newAnimatorForViewControllerTransition;
@end

