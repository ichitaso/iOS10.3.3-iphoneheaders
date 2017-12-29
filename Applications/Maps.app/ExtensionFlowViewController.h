/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ControlContaineeViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol ExtensionFlowDelegate, ExtensionContainer;
@class ExtensionFlowHeaderView, UIViewController, NSMutableArray, UIScrollView, UIView, NSLayoutConstraint, UINavigationController, NSString;

@interface ExtensionFlowViewController : ControlContaineeViewController <UIScrollViewDelegate> {

	char _keyboardDisplayed;
	id<ExtensionFlowDelegate> _contentUpdateDelegate;
	ExtensionFlowHeaderView* _headerView;
	id<ExtensionContainer> _extensionContainer;
	UIViewController* _topViewController;
	UIViewController* _pendingViewController;
	NSMutableArray* _controllers;
	UIScrollView* _containerScrollView;
	UIView* _contentContainerView;
	NSLayoutConstraint* _contentContainerViewSpacerConstraint;
	NSLayoutConstraint* _bottomToBottomConstraint;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) UIViewController * topViewController;                                   //@synthesize topViewController=_topViewController - In the implementation block
@property (nonatomic,retain) UIViewController * pendingViewController;                               //@synthesize pendingViewController=_pendingViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * controllers;                                           //@synthesize controllers=_controllers - In the implementation block
@property (nonatomic,retain) UIScrollView * containerScrollView;                                     //@synthesize containerScrollView=_containerScrollView - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                                          //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentContainerViewSpacerConstraint;              //@synthesize contentContainerViewSpacerConstraint=_contentContainerViewSpacerConstraint - In the implementation block
@property (assign,nonatomic) char keyboardDisplayed;                                                 //@synthesize keyboardDisplayed=_keyboardDisplayed - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToBottomConstraint;                          //@synthesize bottomToBottomConstraint=_bottomToBottomConstraint - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                          //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) id<ExtensionFlowDelegate> contentUpdateDelegate;                 //@synthesize contentUpdateDelegate=_contentUpdateDelegate - In the implementation block
@property (nonatomic,retain) ExtensionFlowHeaderView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) id<ExtensionContainer> extensionContainer;                            //@synthesize extensionContainer=_extensionContainer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupHeaderView;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(id)initWithExtensionContainer:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 extensionContainer:(id)arg3 ;
-(char)shouldAllowBlurToCardView;
-(char)viewControllerUseExtensionFlowHeader:(id)arg1 ;
-(void)popViewController;
-(void)setScrollContentOffset:(CGPoint)arg1 ;
-(void)setupContainerViewWithRootViewController:(id)arg1 ;
-(void)_setMaskOnNavigationBar:(id)arg1 ;
-(id<ExtensionFlowDelegate>)contentUpdateDelegate;
-(void)setContentUpdateDelegate:(id<ExtensionFlowDelegate>)arg1 ;
-(id<ExtensionContainer>)extensionContainer;
-(UIViewController *)pendingViewController;
-(void)setPendingViewController:(UIViewController *)arg1 ;
-(void)setControllers:(NSMutableArray *)arg1 ;
-(NSLayoutConstraint *)contentContainerViewSpacerConstraint;
-(void)setContentContainerViewSpacerConstraint:(NSLayoutConstraint *)arg1 ;
-(char)keyboardDisplayed;
-(void)setKeyboardDisplayed:(char)arg1 ;
-(NSLayoutConstraint *)bottomToBottomConstraint;
-(void)setBottomToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSMutableArray *)controllers;
-(UIViewController *)topViewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UINavigationController *)navigationController;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(ExtensionFlowHeaderView *)headerView;
-(void)setHeaderView:(ExtensionFlowHeaderView *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setContainerScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)containerScrollView;
-(void)pushViewController:(id)arg1 ;
-(void)setTopViewController:(UIViewController *)arg1 ;
-(void)setContentContainerView:(UIView *)arg1 ;
-(UIView *)contentContainerView;
@end
