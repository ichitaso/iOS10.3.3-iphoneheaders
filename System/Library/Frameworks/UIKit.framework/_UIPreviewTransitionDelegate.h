/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, _UIFeedbackStatesBehavior, NSString;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;
	_UIFeedbackStatesBehavior* _feedbackBehavior;

}

@property (nonatomic,retain) _UIFeedbackStatesBehavior * feedbackBehavior;                            //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
-(_UIFeedbackStatesBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(_UIFeedbackStatesBehavior *)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
@end

