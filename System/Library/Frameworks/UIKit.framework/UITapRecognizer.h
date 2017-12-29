/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UITapRecognizerDelegate;
@class NSMutableSet, NSMutableArray, NSArray;

@interface UITapRecognizer : NSObject <NSCoding> {

	unsigned _numberOfTouchesRequired;
	unsigned _numberOfTapsRequired;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTouches;
	int _currentNumberOfTaps;
	int _numberOfTouchesForCurrentTap;
	CGPoint _location;
	CGPoint _startPoint;
	CGPoint _digitizerLocation;
	float _allowableMovement;
	float _allowableSeparation;
	double _allowableTouchTimeSeparation;
	double _maximumSingleTapDuration;
	double _maximumTapDuration;
	double _maximumIntervalBetweenSuccessiveTaps;
	NSMutableArray* _touches;
	int _strongestDirectionalAxis;
	float _strongestDirectionalForce;
	unsigned _timerOn : 1;
	unsigned _multitouchTimerOn : 1;
	unsigned _noNewTouches : 1;
	id<UITapRecognizerDelegate> _delegate;
	int _exclusiveDirectionalAxis;

}

@property (assign,nonatomic,__weak) id<UITapRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned numberOfTapsRequired;                            //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) unsigned numberOfTouchesRequired;                         //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) float allowableMovement; 
@property (assign,nonatomic) float allowableSeparation; 
@property (assign,nonatomic) double allowableTouchTimeSeparation;                      //@synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation - In the implementation block
@property (assign,nonatomic) double maximumSingleTapDuration; 
@property (assign,nonatomic) double maximumTapDuration;                                //@synthesize maximumTapDuration=_maximumTapDuration - In the implementation block
@property (assign,nonatomic) double maximumIntervalBetweenSuccessiveTaps; 
@property (assign,nonatomic) int exclusiveDirectionalAxis;                             //@synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis - In the implementation block
@property (nonatomic,readonly) NSArray * touches;                                      //@synthesize touches=_touches - In the implementation block
-(id)init;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITapRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id<UITapRecognizerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_reset;
-(CGPoint)_digitizerLocation;
-(void)setAllowableMovement:(float)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)touches;
-(unsigned)numberOfTouchesRequired;
-(unsigned)numberOfTapsRequired;
-(CGPoint)_locationInSceneReferenceSpace;
-(void)setNumberOfTapsRequired:(unsigned)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned)arg1 ;
-(float)allowableSeparation;
-(void)setMaximumTapDuration:(double)arg1 ;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(void)setAllowableSeparation:(float)arg1 ;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(char)activeTouchesExceedAllowableSeparation;
-(float)allowableMovement;
-(void)clearTapTimer;
-(void)clearMultitouchTimer;
-(void)tooSlow:(id)arg1 ;
-(void)multitouchExpired:(id)arg1 ;
-(void)_updateDigitizerLocationForEvent:(id)arg1 ;
-(void)_beginInteraction;
-(float)_effectiveAllowableMovement;
-(void)_interactionEndedTouch:(char)arg1 ;
-(double)maximumTapDuration;
-(void)startTapTimer:(double)arg1 ;
-(double)allowableTouchTimeSeparation;
-(void)startMultitouchTimer:(double)arg1 ;
-(double)maximumSingleTapDuration;
-(void)setAllowableTouchTimeSeparation:(double)arg1 ;
-(int)exclusiveDirectionalAxis;
-(void)setExclusiveDirectionalAxis:(int)arg1 ;
@end
