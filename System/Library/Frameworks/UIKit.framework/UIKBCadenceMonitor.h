/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIKBRTRecognizerAveragingRuleProtocol.h>

@class UIDelayedAction;

@interface UIKBCadenceMonitor : NSObject <_UIKBRTRecognizerAveragingRuleProtocol> {

	char _isUserTyping;
	float _cadence;
	float _confidence;
	float _typingAvg;
	int _touchCount;
	UIDelayedAction* _touchLogTimer;
	double _gapAvg;
	double _prevTouchDown;

}

@property (assign,nonatomic) char isUserTyping;                            //@synthesize isUserTyping=_isUserTyping - In the implementation block
@property (assign,nonatomic) float cadence;                                //@synthesize cadence=_cadence - In the implementation block
@property (assign,nonatomic) float confidence;                             //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) float typingAvg;                              //@synthesize typingAvg=_typingAvg - In the implementation block
@property (assign,nonatomic) double gapAvg;                                //@synthesize gapAvg=_gapAvg - In the implementation block
@property (assign,nonatomic) double prevTouchDown;                         //@synthesize prevTouchDown=_prevTouchDown - In the implementation block
@property (assign,nonatomic) int touchCount;                               //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,retain) UIDelayedAction * touchLogTimer;              //@synthesize touchLogTimer=_touchLogTimer - In the implementation block
-(id)init;
-(void)reset;
-(void)addTypingTouchTime:(double)arg1 ;
-(id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2 ;
-(id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2 ;
-(int)touchCount;
-(float)confidence;
-(double)gapAvg;
-(void)setConfidence:(float)arg1 ;
-(double)prevTouchDown;
-(float)typingAvg;
-(void)setTypingAvg:(float)arg1 ;
-(void)setGapAvg:(double)arg1 ;
-(void)setCadence:(float)arg1 ;
-(void)updateConfidenceWithGap:(double)arg1 ;
-(UIDelayedAction *)touchLogTimer;
-(void)logUserTyping:(id)arg1 ;
-(void)setTouchLogTimer:(UIDelayedAction *)arg1 ;
-(void)setIsUserTyping:(char)arg1 ;
-(void)setPrevTouchDown:(double)arg1 ;
-(void)setTouchCount:(int)arg1 ;
-(void)typingCadence:(double)arg1 ;
-(char)isUserTyping;
-(float)cadence;
@end

