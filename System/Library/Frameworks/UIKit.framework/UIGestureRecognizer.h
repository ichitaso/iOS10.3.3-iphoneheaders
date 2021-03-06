/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIForceLevelClassifierDelegate.h>
#import <UIKit/_UIExcludable.h>
#import <UIKit/_UITouchable.h>

@protocol UIGestureRecognizerDelegate;
@class NSMutableArray, UIView, NSMutableSet, _UIForceLevelClassifier, _UITouchForceObservable, NSObservation, NSObservationSource, NSArray, UIGestureEnvironment, NSSet, NSString;

@interface UIGestureRecognizer : NSObject <_UIForceLevelClassifierDelegate, _UIExcludable, _UITouchable> {

	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldReceivePress : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateCanPrevent : 1;
		unsigned privateDelegateCanBePrevented : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned privateDelegateShouldReceivePress : 1;
		unsigned privateDelegateShouldRequireFailure : 1;
		unsigned privateDelegateShouldBeRequiredToFail : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned subclassShouldBeRequiredToFail : 1;
		unsigned hasSubclassDynamicFailureRequirements : 1;
		unsigned hasDelegateDynamicFailureRequirements : 1;
		unsigned subclassTouchesEstimatedPropertiesUpdated : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned delivered : 1;
		unsigned deliveredEndedOrCancelled : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
		unsigned willBeginAfterSatisfyingFailureRequirements : 1;
		unsigned requiresSystemGesturesToFail : 1;
		unsigned acceptsFailureRequirements : 1;
		unsigned requiresExclusiveTouchType : 1;
		unsigned initialTouchTypeIsValid : 1;
		unsigned forceRequirementSatisfied : 1;
	}  _gestureFlags;
	NSMutableArray* _targets;
	NSMutableArray* _delayedTouches;
	NSMutableArray* _delayedPresses;
	UIView* _view;
	double _lastTouchTimestamp;
	int _state;
	int _allowedTouchTypes;
	int _initialTouchType;
	NSMutableSet* _internalActiveTouches;
	_UIForceLevelClassifier* _forceClassifier;
	int _requiredPreviewForceState;
	_UITouchForceObservable* _touchForceObservable;
	NSObservation* _touchForceObservableAndClassifierObservation;
	NSMutableArray* _forceTargets;
	unsigned _forcePressCount;
	NSObservationSource* _beganObservable;
	NSMutableSet* _failureRequirements;
	NSMutableSet* _failureDependents;
	id<UIGestureRecognizerDelegate> _delegate;
	NSArray* _allowedPressTypes;
	UIGestureEnvironment* _gestureEnvironment;

}

@property (assign,nonatomic) UIGestureEnvironment * gestureEnvironment;                    //@synthesize gestureEnvironment=_gestureEnvironment - In the implementation block
@property (nonatomic,readonly) NSSet * _failureRequirements; 
@property (nonatomic,readonly) NSSet * _failureDependents; 
@property (nonatomic,readonly) int state; 
@property (assign,nonatomic,__weak) id<UIGestureRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) char cancelsTouchesInView; 
@property (assign,nonatomic) char delaysTouchesBegan; 
@property (assign,nonatomic) char delaysTouchesEnded; 
@property (nonatomic,copy) NSArray * allowedTouchTypes; 
@property (nonatomic,copy) NSArray * allowedPressTypes;                                    //@synthesize allowedPressTypes=_allowedPressTypes - In the implementation block
@property (assign,nonatomic) char requiresExclusiveTouchType; 
@property (nonatomic,readonly) unsigned numberOfTouches; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldDefaultToTouches;
+(char)_shouldUseLinearForceLevelClassifier;
+(char)_shouldSupportStylusTouches;
-(id)init;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIGestureRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<UIGestureRecognizerDelegate>)delegate;
-(UIView *)view;
-(void)setDelaysTouchesBegan:(char)arg1 ;
-(int)state;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setRequiresSystemGesturesToFail:(char)arg1 ;
-(NSSet *)_failureDependents;
-(NSSet *)_failureRequirements;
-(char)_shouldDelayUntilForceLevelRequirementIsMet;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)ignorePress:(id)arg1 forEvent:(id)arg2 ;
-(void)reset;
-(void)setView:(UIView *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setCancelsTouchesInView:(char)arg1 ;
-(void)setAllowedTouchTypes:(NSArray *)arg1 ;
-(void)setAllowedPressTypes:(NSArray *)arg1 ;
-(char)isEnabled;
-(char)_shouldReceivePress:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(char)_requiresSystemGesturesToFail;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelaysTouchesEnded:(char)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(unsigned)numberOfTouches;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(char)_isRecognized;
-(char)_isDirty;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_defaultAllowedTouchTypes;
-(unsigned)_forcePressCount;
-(int)currentPreviewForceState;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(char)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(CGPoint)locationOfTouch:(unsigned)arg1 inView:(id)arg2 ;
-(char)_isActive;
-(id)stringValue;
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(int)arg2 ;
-(int)_currentForceLevel;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(char)_delegateShouldReceivePress:(id)arg1 ;
-(NSArray *)allowedPressTypes;
-(int)requiredPreviewForceState;
-(void)_setForceLevelClassifier:(id)arg1 ;
-(void)setRequiredPreviewForceState:(int)arg1 ;
-(void)_addForceTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_touchForceObservable;
-(void)_resetGestureRecognizer;
-(void)_setAcceptsFailureRequiments:(char)arg1 ;
-(char)delaysTouchesBegan;
-(char)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(id)_briefDescription;
-(void)_requiredGestureRecognizerCompleted:(id)arg1 withEvent:(id)arg2 pressesEvent:(id)arg3 ;
-(void)setGestureEnvironment:(UIGestureEnvironment *)arg1 ;
-(void)_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2 ;
-(void)_setDirty;
-(void)_enqueueDelayedTouchToSend:(id)arg1 ;
-(void)_enqueueDelayedPressToSend:(id)arg1 ;
-(id)_delayedTouches;
-(int)_depthFirstViewCompare:(id)arg1 ;
-(char)_requiresGestureRecognizerToFail:(id)arg1 ;
-(char)_affectedByGesture:(id)arg1 ;
-(char)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg1 ;
-(char)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg1 ;
-(void)_touchWasCancelled:(id)arg1 ;
-(void)_pressWasCancelled:(id)arg1 ;
-(void)_enqueueDelayedTouchesAndPressesToSend;
-(void)_invalidateInitialTouchType;
-(char)_inForceCapableEnvironment;
-(void)_ensureForceObservationChain;
-(char)_wantsPartialTouchSequences;
-(char)_shouldBegin;
-(void)_updateForceClassifierWithEvent:(id)arg1 ;
-(void)_registerTouches:(id)arg1 forEstimationUpdatesWithEvent:(id)arg2 ;
-(void)_delayTouch:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayPress:(id)arg1 forEvent:(id)arg2 ;
-(void)_delayTouchesForEvent:(id)arg1 inPhase:(int)arg2 ;
-(void)_delayPressesForEvent:(id)arg1 inPhase:(int)arg2 ;
-(void)_enqueueDelayedTouchesToSend;
-(void)_enqueueDelayedPressesToSend;
-(void)_clearDelayedTouches;
-(void)_clearDelayedPresses;
-(char)_forceRequirementSatisfied;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)_delayTouchesForEventIfNeeded:(id)arg1 ;
-(void)_delayPressesForEventIfNeeded:(id)arg1 ;
-(void)_ignoreTouchesAndPressesFromEvent:(id)arg1 pressesEvent:(id)arg2 ;
-(char)requiresExclusiveTouchType;
-(char)_touchTypeIsAllowed:(id)arg1 ;
-(char)_delegateShouldReceiveTouch:(id)arg1 ;
-(void)_setInitialTouchType:(int)arg1 ;
-(char)_delegateCanBePreventedByGestureRecognizer:(id)arg1 ;
-(char)_delegateCanPreventGestureRecognizer:(id)arg1 ;
-(void)_addFailureDependent:(id)arg1 ;
-(void)_removeFailureDependent:(id)arg1 ;
-(char)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(char)_requiredPreviewForceStateSatisfiedByForceLevel:(int)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(char)arg3 ;
-(char)cancelsTouchesInView;
-(char)delaysTouchesEnded;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4 ;
-(char)_canExcludeOtherExcludables;
-(char)_isExcludedByExcludable:(id)arg1 ;
-(void)_exclude;
-(void)setRequiresExclusiveTouchType:(char)arg1 ;
-(double)lastTouchTimestamp;
-(int)_exclusiveDirectionalPressAxis;
-(CGPoint)_centroidOfTouches:(id)arg1 excludingEnded:(char)arg2 ;
-(float)_distanceBetweenTouches:(id)arg1 ;
-(id)_beganObservable;
-(void)_cancelRecognition;
-(void)removeFailureRequirement:(id)arg1 ;
-(char)_acceptsFailureRequirements;
-(int)_requiredForceLevel;
-(void)_setRequiredForceLevel:(int)arg1 ;
-(id)_forceLevelClassifier;
-(void)_removeForceTarget:(id)arg1 action:(SEL)arg2 ;
-(NSArray *)allowedTouchTypes;
-(id)_defaultAllowedPressTypes;
-(UIGestureEnvironment *)gestureEnvironment;
-(void)_detach;
@end

