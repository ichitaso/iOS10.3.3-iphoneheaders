/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class ICFreeTransformInteractiveTransition, NSString;

@interface ICFreeTransformableViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	ICFreeTransformInteractiveTransition* _interactiveTransition;

}

@property (nonatomic,retain) ICFreeTransformInteractiveTransition * interactiveTransition;              //@synthesize interactiveTransition=_interactiveTransition - In the implementation block
@property (assign,nonatomic) char contentHidden; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)freeTransformGesture:(id)arg1 ;
-(char)contentHidden;
-(void)setContentHidden:(char)arg1 ;
-(id)newInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)setInteractiveTransition:(ICFreeTransformInteractiveTransition *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(ICFreeTransformInteractiveTransition *)interactiveTransition;
@end

