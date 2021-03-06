/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFeedbackGenerator.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIFeedbackModulationBehaviorConfiguration;

@interface _UIFeedbackModulationBehavior : UIFeedbackGenerator {

	float _currentValue;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_modulationConfiguration,nonatomic,readonly) _UIFeedbackModulationBehaviorConfiguration * modulationConfiguration; 
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;                                               //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
+(id)modulationBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2 ;
-(void)activateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)deactivate;
-(id)_stats_key;
-(void)valueUpdated:(float)arg1 ;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)playingContinuousFeedback;
-(id)_modulationConfiguration;
-(void)setPlayingContinuousFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)activateWithInitialValue:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

