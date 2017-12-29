/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIMultiColumnViewControllerDelegate.h>

@protocol ICSplitViewControllerDelegate;
@class UIMultiColumnViewController, UINavigationController, UIView, NotesTextureBackgroundView, UILabel, NSLayoutConstraint, NSMutableArray, UIViewController, NSString;

@interface ICSplitViewController : UISplitViewController <UISplitViewControllerDelegate, UIMultiColumnViewControllerDelegate> {

	char _detailDimmed;
	UIMultiColumnViewController* _multiColumnViewController;
	UINavigationController* _masterNavigationController;
	UINavigationController* _detailNavigationController;
	id<ICSplitViewControllerDelegate> _icSplitViewControllerDelegate;
	UIView* _detailDimmingView;
	NotesTextureBackgroundView* _dimLabelBackgroundView;
	UILabel* _dimViewTitleLabel;
	NSLayoutConstraint* _dimViewTitleLabelLeadingConstraint;
	NSMutableArray* _dismissDetailDimmingBlocks;
	NSMutableArray* _dimViewTitles;
	UINavigationController* _secondaryNavigationController;

}

@property (assign,getter=isDetailDimmed,nonatomic) char detailDimmed;                                             //@synthesize detailDimmed=_detailDimmed - In the implementation block
@property (nonatomic,retain) UIView * detailDimmingView;                                                          //@synthesize detailDimmingView=_detailDimmingView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * dimLabelBackgroundView;                                 //@synthesize dimLabelBackgroundView=_dimLabelBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * dimViewTitleLabel;                                                         //@synthesize dimViewTitleLabel=_dimViewTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dimViewTitleLabelLeadingConstraint;                             //@synthesize dimViewTitleLabelLeadingConstraint=_dimViewTitleLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * dismissDetailDimmingBlocks;                                         //@synthesize dismissDetailDimmingBlocks=_dismissDetailDimmingBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * dimViewTitles;                                                      //@synthesize dimViewTitles=_dimViewTitles - In the implementation block
@property (nonatomic,retain) UINavigationController * secondaryNavigationController;                              //@synthesize secondaryNavigationController=_secondaryNavigationController - In the implementation block
@property (nonatomic,retain) UIMultiColumnViewController * multiColumnViewController;                             //@synthesize multiColumnViewController=_multiColumnViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * masterNavigationController;                                 //@synthesize masterNavigationController=_masterNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * detailNavigationController;                                 //@synthesize detailNavigationController=_detailNavigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * currentNoteEditorController; 
@property (assign,nonatomic,__weak) id<ICSplitViewControllerDelegate> icSplitViewControllerDelegate;              //@synthesize icSplitViewControllerDelegate=_icSplitViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) char isDisplayingOverlayOnPad; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UINavigationController *)detailNavigationController;
-(id)mainNavigationController;
-(void)setMultiColumnViewController:(UIMultiColumnViewController *)arg1 ;
-(UIMultiColumnViewController *)multiColumnViewController;
-(id)listControllerForCurrentNoteEditor;
-(void)setDetailNavigationController:(UINavigationController *)arg1 ;
-(void)setSecondaryNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)secondaryNavigationController;
-(void)setDismissDetailDimmingBlocks:(NSMutableArray *)arg1 ;
-(void)setDimViewTitles:(NSMutableArray *)arg1 ;
-(void)updateNoteEditorNavigation;
-(char)isDetailDimmed;
-(void)updateDetailDimmingViewFrame;
-(void)showPrimaryControllerAnimated:(char)arg1 ;
-(void)updateDisplayModeButtonItemAccessibilityLabel:(id)arg1 ;
-(UIViewController *)currentNoteEditorController;
-(id)htmlNoteEditorController;
-(char)hasHTMLNoteEditorController;
-(id)noteEditorController;
-(void)switchToNoteEditorControllerIfNecessary:(id)arg1 switchListController:(char)arg2 ;
-(void)switchToNoteEditorController;
-(void)switchToHTMLNoteEditorController;
-(void)showDetailViewController:(id)arg1 animated:(char)arg2 sender:(id)arg3 ;
-(char)isNoteEditorControllerVisible;
-(char)isInMultiColumnMode;
-(void)cancelDetailDimmingIfNecessary;
-(char)handleCollapseSecondaryViewControllerForRestorationOfCollapsedWhileSuspendedWithPrimaryVisible:(char)arg1 ;
-(id<ICSplitViewControllerDelegate>)icSplitViewControllerDelegate;
-(char)allowsLandscapeOrientation;
-(NSMutableArray *)dismissDetailDimmingBlocks;
-(UIView *)detailDimmingView;
-(NSLayoutConstraint *)dimViewTitleLabelLeadingConstraint;
-(void)setDetailDimmed:(char)arg1 ;
-(void)setDetailDimmingView:(UIView *)arg1 ;
-(void)setDimLabelBackgroundView:(NotesTextureBackgroundView *)arg1 ;
-(void)setDimViewTitleLabel:(UILabel *)arg1 ;
-(UILabel *)dimViewTitleLabel;
-(void)setDimViewTitleLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSMutableArray *)dimViewTitles;
-(void)setDetailDimmed:(char)arg1 animated:(char)arg2 title:(id)arg3 ;
-(void)setDimViewTitle:(id)arg1 animated:(char)arg2 ;
-(NotesTextureBackgroundView *)dimLabelBackgroundView;
-(id)activeSearchViewController;
-(void)setupViewControllersWithMasterNavigationController:(id)arg1 detailViewController:(id)arg2 ;
-(void)switchToModernNoteEditorAndListController;
-(void)switchToHTMLNoteEditorAndListController;
-(char)isVisibleViewController:(id)arg1 ;
-(void)pushOrShowViewController:(id)arg1 animated:(char)arg2 ;
-(char)isInHTMLEditorMode;
-(void)showDetailViewControllerAnimated:(char)arg1 sender:(id)arg2 ;
-(void)dismissPrimaryControllerAnimated:(char)arg1 ;
-(void)dimDetailViewWithTitle:(id)arg1 dismissBlock:(/*^block*/id)arg2 animated:(char)arg3 ;
-(void)undimDetailViewAnimated:(char)arg1 ;
-(char)isDisplayingOverlayOnPad;
-(void)cancelSearchIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIcSplitViewControllerDelegate:(id<ICSplitViewControllerDelegate>)arg1 ;
-(char)isDisplayControllerVisible;
-(void)showLegacyListControllerAnimated:(char)arg1 ;
-(void)showDisplayControllerAnimated:(char)arg1 ;
-(void)dismissDisplayControllerAnimated:(char)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)displayModeButtonItem;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(char)_splitViewControllerIsPrimaryVisible:(id)arg1 ;
-(char)_splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 forRestorationOfCollapsedWhileSuspendedWithPrimaryVisible:(char)arg4 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2 ;
-(int)targetDisplayModeForActionInSplitViewController:(id)arg1 ;
-(void)multiColumnViewController:(id)arg1 willShowColumns:(unsigned)arg2 ;
-(void)_splitViewController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 ;
-(void)_splitViewController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(UINavigationController *)masterNavigationController;
-(void)setMasterNavigationController:(UINavigationController *)arg1 ;
@end
