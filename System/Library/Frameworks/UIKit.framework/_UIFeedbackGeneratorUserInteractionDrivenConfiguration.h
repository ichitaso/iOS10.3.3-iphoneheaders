/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionStartedFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionEndedFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionCancelledFeedback;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionStartedFeedback;                //@synthesize interactionStartedFeedback=_interactionStartedFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionEndedFeedback;                  //@synthesize interactionEndedFeedback=_interactionEndedFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionCancelledFeedback;              //@synthesize interactionCancelledFeedback=_interactionCancelledFeedback - In the implementation block
-(id)feedbackKeyPaths;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionStartedFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionEndedFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionCancelledFeedback;
-(void)setInteractionStartedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setInteractionEndedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setInteractionCancelledFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
@end
