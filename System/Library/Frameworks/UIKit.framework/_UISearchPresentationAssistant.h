/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>

@protocol _UISearchControllerPresenting, UIViewControllerTransitionCoordinator;
@class UIPresentationController, UIView, UIDimmingView;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {

	UIPresentationController* _searchPresentationController;
	UIView* _searchBarContainerView;
	UIDimmingView* _dimmingView;
	char _isFormSheetPresentation;
	char _presentationWasAnimated;
	UIPresentationController*<_UISearchControllerPresenting> _adaptivePresentationController;
	id<UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;

}

@property (assign,nonatomic) char presentationWasAnimated;                                                                         //@synthesize presentationWasAnimated=_presentationWasAnimated - In the implementation block
@property (assign,nonatomic) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController;              //@synthesize adaptivePresentationController=_adaptivePresentationController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;                             //@synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator - In the implementation block
-(void)dealloc;
-(id)initWithSearchPresentationController:(id)arg1 ;
-(void)setPresentationWasAnimated:(char)arg1 ;
-(void)ensureAppropriatelySizedSearchBar:(id)arg1 ;
-(id)searchBarContainerView;
-(char)searchBarToBecomeTopAttached;
-(float)statusBarAdjustment;
-(id)dimmingView;
-(void)setAdaptivePresentationController:(UIPresentationController*<_UISearchControllerPresenting>)arg1 ;
-(float)resultsControllerContentOffset;
-(char)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(char)presentationIsPopoverToOverFullScreenAdaptation;
-(id)_searchBarContainerSuperview;
-(CGRect)optimalFrameForSearchBar:(id)arg1 ;
-(char)_currentTransitionIsRotating;
-(char)searchBarWillResizeForScopeBar;
-(CGRect)_containerFrame;
-(id)_searchControllerPresenting;
-(char)_statusBarPreferredHiddenForInterfaceOrientation:(int)arg1 ;
-(id)locateNavigationController;
-(float)_statusBarHeightChangeDueToRotation;
-(char)_statusBarPreferredHidden;
-(void)removeContainerViewFromSuperview;
-(CGSize)updateSearchBarContainerFrame;
-(char)presentationWasAnimated;
-(id<UIViewControllerTransitionCoordinator>)transitioningToSizeCoordinator;
-(void)setTransitioningToSizeCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end

