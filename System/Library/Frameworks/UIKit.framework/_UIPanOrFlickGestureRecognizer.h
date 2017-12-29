/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@class UIDelayedAction;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {

	unsigned _touchCount;
	char _didLongPress;
	unsigned _allowedFlickDirections;
	float _minimumFlickDistance;
	float _allowableMovement;
	UIDelayedAction* _elapsedAction;
	UIDelayedAction* _responsivenessAction;
	double _maximumFlickDuration;
	double _minimumPressDuration;
	double _responsivenessDelay;
	double _timestampBeforeGestureBegan;
	double _timestampOfLastEvent;
	CGPoint _initialCentroidLocation;

}

@property (assign,nonatomic) double timestampBeforeGestureBegan;                                           //@synthesize timestampBeforeGestureBegan=_timestampBeforeGestureBegan - In the implementation block
@property (assign,nonatomic) double timestampOfLastEvent;                                                  //@synthesize timestampOfLastEvent=_timestampOfLastEvent - In the implementation block
@property (nonatomic,retain) UIDelayedAction * elapsedAction;                                              //@synthesize elapsedAction=_elapsedAction - In the implementation block
@property (nonatomic,retain) UIDelayedAction * responsivenessAction;                                       //@synthesize responsivenessAction=_responsivenessAction - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroidLocation;                                              //@synthesize initialCentroidLocation=_initialCentroidLocation - In the implementation block
@property (nonatomic,readonly) id<_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate; 
@property (assign,nonatomic) unsigned allowedFlickDirections;                                              //@synthesize allowedFlickDirections=_allowedFlickDirections - In the implementation block
@property (assign,nonatomic) double maximumFlickDuration;                                                  //@synthesize maximumFlickDuration=_maximumFlickDuration - In the implementation block
@property (assign,nonatomic) float minimumFlickDistance;                                                   //@synthesize minimumFlickDistance=_minimumFlickDistance - In the implementation block
@property (nonatomic,readonly) unsigned recognizedFlickDirection; 
@property (assign,nonatomic) double minimumPressDuration;                                                  //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) float allowableMovement;                                                      //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) char didLongPress;                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (assign,nonatomic) double responsivenessDelay;                                                   //@synthesize responsivenessDelay=_responsivenessDelay - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setAllowableMovement:(float)arg1 ;
-(void)enoughTimeElapsed:(id)arg1 ;
-(char)didLongPress;
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(unsigned)recognizedFlickDirection;
-(void)setAllowedFlickDirections:(unsigned)arg1 ;
-(void)setMaximumFlickDuration:(double)arg1 ;
-(void)setMinimumFlickDistance:(float)arg1 ;
-(void)setResponsivenessDelay:(double)arg1 ;
-(void)clearTimer;
-(void)startTimer;
-(float)allowableMovement;
-(double)timestampOfLastEvent;
-(double)timestampBeforeGestureBegan;
-(double)maximumFlickDuration;
-(float)minimumFlickDistance;
-(unsigned)allowedFlickDirections;
-(CGPoint)initialCentroidLocation;
-(char)isValidLongPress;
-(id<_UIPanOrFlickGestureRecognizerDelegate>)panOrFlickDelegate;
-(double)responsivenessDelay;
-(void)responsivenessTimeElapsed:(id)arg1 ;
-(void)setTimestampOfLastEvent:(double)arg1 ;
-(void)setTimestampBeforeGestureBegan:(double)arg1 ;
-(void)setInitialCentroidLocation:(CGPoint)arg1 ;
-(UIDelayedAction *)elapsedAction;
-(void)setElapsedAction:(UIDelayedAction *)arg1 ;
-(UIDelayedAction *)responsivenessAction;
-(void)setResponsivenessAction:(UIDelayedAction *)arg1 ;
@end

