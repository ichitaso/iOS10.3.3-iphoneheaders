/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegatePrivate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MailCompositionService/MFApplicationSceneActor.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer, NSMutableArray, MailNavigationController, MailDetailNavigationController, UIMultiColumnViewController, _MailMultiColumnDetailTransitionView, NSString;

@interface MailSplitViewController : UISplitViewController <UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate, UIGestureRecognizerDelegate, MFApplicationSceneActor> {

	UIPanGestureRecognizer* _overlaySwipeRecognizer;
	UITapGestureRecognizer* _overlayTapRecognizer;
	unsigned _lastGestureRecognized;
	float _panHysteresisHorizontalLocation;
	NSMutableArray* _detailDimmingViews;
	char _detailDimmed;
	char _isInEditMode;
	char _overlayGesturesEnabled;
	char _primaryAlwaysVisible;
	char _primaryHasFocus;
	MailNavigationController* _messageListNavController;
	MailDetailNavigationController* _messageDetailNavController;
	UIMultiColumnViewController* _multiColumnController;
	unsigned _numVisibleColumns;
	_MailMultiColumnDetailTransitionView* _multicolumnDetailTransitionView;

}

@property (assign,nonatomic) char primaryHasFocus;                                                                //@synthesize primaryHasFocus=_primaryHasFocus - In the implementation block
@property (nonatomic,retain) _MailMultiColumnDetailTransitionView * multicolumnDetailTransitionView;              //@synthesize multicolumnDetailTransitionView=_multicolumnDetailTransitionView - In the implementation block
@property (nonatomic,readonly) MailNavigationController * messageListNavController;                               //@synthesize messageListNavController=_messageListNavController - In the implementation block
@property (nonatomic,readonly) MailDetailNavigationController * messageDetailNavController;                       //@synthesize messageDetailNavController=_messageDetailNavController - In the implementation block
@property (nonatomic,readonly) UIMultiColumnViewController * multiColumnController;                               //@synthesize multiColumnController=_multiColumnController - In the implementation block
@property (assign,nonatomic) char overlayGesturesEnabled;                                                         //@synthesize overlayGesturesEnabled=_overlayGesturesEnabled - In the implementation block
@property (assign,getter=isPrimaryAlwaysVisible,nonatomic) char primaryAlwaysVisible;                             //@synthesize primaryAlwaysVisible=_primaryAlwaysVisible - In the implementation block
@property (assign,nonatomic) unsigned numVisibleColumns;                                                          //@synthesize numVisibleColumns=_numVisibleColumns - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MailNavigationController *)messageListNavController;
-(unsigned)numVisibleColumns;
-(id)initWithMultiColumnController:(id)arg1 mailNavigationController:(id)arg2 mailDetailNavigationController:(id)arg3 numVisibleColumns:(unsigned)arg4 ;
-(void)setPrimaryVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNumVisibleColumns:(unsigned)arg1 ;
-(char)overlayGesturesEnabled;
-(MailDetailNavigationController *)messageDetailNavController;
-(void)setFocusedViewController:(id)arg1 ;
-(void)setPrimaryAlwaysVisible:(char)arg1 ;
-(id)_mailboxContentViewController;
-(UIMultiColumnViewController *)multiColumnController;
-(void)focusViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 ;
-(void)unfocusViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 ;
-(void)applicationSceneController:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)iterateNavigationControllersWithBlock:(/*^block*/id)arg1 ;
-(void)_forceTwoColumnMode;
-(void)_removeDetailDimmingViews;
-(void)_addDetailDimmingViewToViewController:(id)arg1 ;
-(void)_setDetailDimmingViewsAlpha:(float)arg1 removeViews:(char)arg2 animated:(char)arg3 ;
-(char)isPrimaryAlwaysVisible;
-(void)setPrimaryHasFocus:(char)arg1 ;
-(void)_createAndAttachOverlayGestures;
-(void)_dismissVisiblePopoverInPrimaryViewController;
-(void)_setDetailDimmingViewsHidden:(char)arg1 ;
-(char)_conversationViewControllerHasReferenceMessage;
-(char)primaryHasFocus;
-(void)setMulticolumnDetailTransitionView:(_MailMultiColumnDetailTransitionView *)arg1 ;
-(_MailMultiColumnDetailTransitionView *)multicolumnDetailTransitionView;
-(void)_swipedBack:(id)arg1 ;
-(void)_tappedDimmingView:(id)arg1 ;
-(void)_slideInOrNavigateBack:(char)arg1 ;
-(char)_swipeRecognizerShouldBegin:(id)arg1 ;
-(void)setDetailDimmed:(char)arg1 aboveViewControllers:(id)arg2 animated:(char)arg3 ;
-(char)isDetailVisible;
-(char)usePadTransferStyle;
-(void)_forceSingleColumnMode;
-(void)setOverlayGesturesEnabled:(char)arg1 ;
-(void)didBecomeActiveSceneActor;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)applicationWillSuspend;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)isCollapsed;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(char)_splitViewControllerIsPrimaryVisible:(id)arg1 ;
-(char)_splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 forRestorationOfCollapsedWhileSuspendedWithPrimaryVisible:(char)arg4 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2 ;
-(void)_splitViewController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 ;
-(void)_splitViewController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2 ;
-(char)_isPortrait;
-(char)_tapRecognizerShouldBegin:(id)arg1 ;
@end

