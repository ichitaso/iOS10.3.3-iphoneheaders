/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackDragBehaviorConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIFeedbackDragSnappingBehaviorConfiguration : _UIFeedbackDragBehaviorConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _objectSnappedFeedback;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> objectSnappedFeedback;              //@synthesize objectSnappedFeedback=_objectSnappedFeedback - In the implementation block
+(id)defaultConfiguration;
-(id)feedbackKeyPaths;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)objectSnappedFeedback;
-(void)setObjectSnappedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
@end
