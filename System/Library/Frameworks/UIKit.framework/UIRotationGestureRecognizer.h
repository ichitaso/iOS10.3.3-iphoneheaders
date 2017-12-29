/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	int _currentRotationCount;
	double _lastTouchTime;
	float _velocity;
	float _previousVelocity;
	CGPoint _anchorSceneReferencePoint;
	id _transformAnalyzer;
	UITouch* _touches[2];
	float _preRecognitionWeight;
	float _postRecognitionWeight;

}

@property (assign,nonatomic) float rotation; 
@property (nonatomic,readonly) float velocity; 
+(char)_shouldDefaultToTouches;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(float)velocity;
-(CGPoint)anchorPoint;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(void)_resetGestureRecognizer;
-(void)_updateTransformAnalyzerWeights;
-(void)_setPreRecognitionWeight:(float)arg1 ;
-(float)_preRecognitionWeight;
-(void)_setPostRecognitionWeight:(float)arg1 ;
-(float)_postRecognitionWeight;
@end

