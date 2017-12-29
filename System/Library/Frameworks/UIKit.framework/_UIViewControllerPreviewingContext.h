/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIView, UIViewController, _UIPreviewInteractionController, NSString, UIGestureRecognizer;

@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _sourceView;
	UIViewController* _viewController;
	_UIPreviewInteractionController* _previewInteractionController;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                                                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionController * previewInteractionController;                         //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)unregister;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(_UIPreviewInteractionController *)previewInteractionController;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1 ;
-(id)initWithSourceView:(id)arg1 viewController:(id)arg2 ;
-(void)setPreviewInteractionController:(_UIPreviewInteractionController *)arg1 ;
@end

