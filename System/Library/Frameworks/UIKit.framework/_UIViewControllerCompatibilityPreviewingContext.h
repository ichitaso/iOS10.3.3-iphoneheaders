/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPreviewInteractionControllerDelegate_Internal.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIView, UIViewController, UIPreviewInteractionController, NSString, UIGestureRecognizer;

@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _sourceView;
	UIViewController* _viewController;
	UIPreviewInteractionController* _previewInteractionController;
	CGRect _sourceRect;

}

@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteractionController * previewInteractionController;                          //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (nonatomic,readonly) UIView * sourceView;                                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
-(id)init;
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)unregister;
-(char)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1 ;
-(char)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(char)arg3 ;
-(char)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5 ;
-(void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2 ;
-(id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 ;
-(UIPreviewInteractionController *)previewInteractionController;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(id)initWithSourceView:(id)arg1 viewController:(id)arg2 ;
-(void)setPreviewInteractionController:(UIPreviewInteractionController *)arg1 ;
@end

