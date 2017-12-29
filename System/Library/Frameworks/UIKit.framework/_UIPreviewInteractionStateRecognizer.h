/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIPreviewInteractionStateRecognizer : NSObject {

	unsigned _deepPressCount;
	float _smoothedForce;
	float _maximumForce;
	float _previousEffectiveTouchForce;
	float _smoothedDistance;
	float _lowpassDistanceAlpha;
	float _distanceThreshold;
	CGPoint _previousSceneReferenceLocation;
	char _isFirstForceEvaluation;
	double _timeMark;
	double _currentTime;
	double _previousTime;
	float _popOffsetInitial;
	float _popOffsetLongterm;
	float _popOffsetDecayAlpha;
	float _lowpassForceAlpha;
	float _popDecayingOffset;
	float _popReductionForce;
	float _progressToStrongThreshold;
	char _allowsPopOffsetDecay;
	float _popForceReductionThreshold;
	float _popAlwaysThreshold;
	float _highPopThreshold;
	float _previousPopThreshold;
	float _saturationForce;
	float _revealThreshold;
	float _standardThreshold;
	float _strongThreshold;
	float _hintAndPeekInterval;
	float _hintReductionForce;
	double _transitionInterval;
	float _actualHintForce;
	float _actualPeekForce;
	float _actualPopForce;
	double _actualHintTime;
	double _actualPeekTime;
	double _actualPopTime;
	int _currentState;
	float _currentTouchForce;

}

@property (assign,nonatomic) int currentState;                     //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) float currentTouchForce;              //@synthesize currentTouchForce=_currentTouchForce - In the implementation block
@property (nonatomic,readonly) float velocity; 
-(id)init;
-(void)dealloc;
-(id)description;
-(void)reset;
-(int)currentState;
-(float)velocity;
-(void)evaluateWithTouchForce:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(float)currentProgressToState:(int)arg1 ;
-(void)setCurrentState:(int)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(float)_currentTouchForceMultiplier;
-(float)_thresholdForForceLevel:(int)arg1 ;
-(float)currentTouchForce;
-(float)_normalizedTouchForceValue:(float)arg1 ;
-(float)_denormalizedTouchForceValue:(float)arg1 ;
-(void)setCurrentTouchForce:(float)arg1 ;
@end
