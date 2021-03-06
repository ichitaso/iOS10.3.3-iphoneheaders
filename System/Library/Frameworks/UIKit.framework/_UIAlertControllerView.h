/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@class UIAlertController, UIAlertControllerVisualStyle, UIView, _UIAlertControllerInterfaceActionGroupView, UILabel, _UIKeyboardLayoutAlignmentView, NSMutableArray, NSArray, UIAlertAction, _UIAlertControllerActionViewMetrics, NSLayoutConstraint, NSString;

@interface _UIAlertControllerView : UIView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {

	UIAlertController* _alertController;
	UIAlertControllerVisualStyle* _visualStyle;
	UIView* _contentView;
	UIView* _contentViewTopItemsView;
	_UIAlertControllerInterfaceActionGroupView* _mainInterfaceActionsGroupView;
	_UIAlertControllerInterfaceActionGroupView* _discreteCancelActionGroupView;
	UILabel* _titleLabel;
	char _hasAppliedTitleConstraints;
	UILabel* _messageLabel;
	char _hasAppliedMessageConstraints;
	UILabel* _detailMessageLabel;
	char _hasAppliedDetailConstraints;
	UIView* _contentViewControllerContainerView;
	UIView* _textFieldViewControllerContainerView;
	_UIKeyboardLayoutAlignmentView* _keyboardLayoutAlignmentView;
	UIView* _keyboardLayoutAlignmentAvailableSpaceView;
	UIView* _dimmingView;
	NSMutableArray* _actionViews;
	CGPoint _actionSelectionInitialLocation;
	char _inPopover;
	char _hasDimmingView;
	char _showsCancelAction;
	char _cancelActionIsDiscrete;
	char _shouldHaveBackdropView;
	char _alignsToKeyboard;
	NSArray* _dimmingViewConstraints;
	NSArray* _dimmingViewForegroundViewTopConstraints;
	NSArray* _dimmingViewForegroundViewBottomConstraints;
	NSArray* _dimmingViewConstraintsForAlertStyle;
	NSArray* _dimmingViewConstraintsForActionSheetStyle;
	NSArray* _noDimmingViewConstraints;
	char _hasCachedLargestActionDimension;
	CGSize _largestActionDimension;
	UIAlertAction* _effectivePreferredAction;
	int _coalescingActionsChangedCount;
	char _needsActionsChangedHandling;
	char _actionsReversed;
	char _presentationContextPrefersCancelActionShown;
	_UIAlertControllerActionViewMetrics* _actionViewMetrics;
	NSLayoutConstraint* _foregroundViewWidthConstraint;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _contentViewMaxHeightConstraint;
	NSLayoutConstraint* _titleLabelTopAlignmentConstraint;
	NSLayoutConstraint* _messageLabelTopAlignmentConstraint;
	NSLayoutConstraint* _detailMessageLabelTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerViewLeftConstraint;
	NSLayoutConstraint* _contentViewControllerViewRightConstraint;
	NSLayoutConstraint* _contentViewControllerViewTopConstraint;
	NSLayoutConstraint* _contentViewControllerViewBottomConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewLeftConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewRightConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewTopConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewMaximumWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewTopAlignmentConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _mainActionButtonSequenceViewWidthConstraint;
	NSLayoutConstraint* _mainActionButtonSequenceViewHeightConstraint;
	NSLayoutConstraint* _mainActionButtonSequenceViewHorizontalAlignmentConstraint;
	NSLayoutConstraint* _discreteActionGroupViewHorizontalLayoutTrailingConstraint;
	NSLayoutConstraint* _actionGroupEqualsContentViewWidthConstraint;
	NSLayoutConstraint* _discreteCancelActionViewTopConstraint;
	NSLayoutConstraint* _discreteCancelActionViewLeadingConstraint;
	NSLayoutConstraint* _discreteCancelActionViewWidthConstraint;
	NSLayoutConstraint* _discreteCancelActionViewHeightConstraint;
	CGSize _layoutSize;

}

@property (__weak) UIAlertController * alertController; 
@property (readonly) UIView * _contentView;                                                                         //@synthesize contentView=_contentView - In the implementation block
@property (readonly) UIView * _dimmingView;                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle; 
@property (nonatomic,retain) _UIAlertControllerActionViewMetrics * actionViewMetrics;                               //@synthesize actionViewMetrics=_actionViewMetrics - In the implementation block
@property (assign,setter=_setActionsReversed:,getter=_actionsReversed,nonatomic) char actionsReversed;              //@synthesize actionsReversed=_actionsReversed - In the implementation block
@property (assign,setter=_setLayoutSize:,getter=_layoutSize,nonatomic) CGSize layoutSize;                           //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) float effectAlpha; 
@property (assign) char inPopover; 
@property (assign) char hasDimmingView; 
@property (assign,nonatomic) char presentationContextPrefersCancelActionShown;                                      //@synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown - In the implementation block
@property (assign) char cancelActionIsDiscrete; 
@property (assign) char shouldHaveBackdropView; 
@property (assign) char alignsToKeyboard; 
@property (retain) NSLayoutConstraint * foregroundViewWidthConstraint;                                              //@synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewTopConstraint;                                                   //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewBottomConstraint;                                                //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewMaxHeightConstraint;                                             //@synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * titleLabelTopAlignmentConstraint;                                           //@synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * messageLabelTopAlignmentConstraint;                                         //@synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * detailMessageLabelTopAlignmentConstraint;                                   //@synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewLeftConstraint;                                    //@synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewRightConstraint;                                   //@synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewTopConstraint;                                     //@synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewBottomConstraint;                                  //@synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewLeftConstraint;                                  //@synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewRightConstraint;                                 //@synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewTopConstraint;                                   //@synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewBottomConstraint;                                //@synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewBottomConstraint;                                          //@synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewMaximumWidthConstraint;                                    //@synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewTopAlignmentConstraint;                   //@synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewWidthConstraint;                          //@synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewHeightConstraint;                         //@synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewTopAlignmentConstraint;                 //@synthesize textFieldViewControllerContainerViewTopAlignmentConstraint=_textFieldViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewWidthConstraint;                        //@synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewHeightConstraint;                       //@synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerXConstraint;                                                          //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerYConstraint;                                                          //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (retain) NSLayoutConstraint * widthConstraint;                                                            //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;                                                           //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * mainActionButtonSequenceViewWidthConstraint;                                //@synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * mainActionButtonSequenceViewHeightConstraint;                               //@synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * mainActionButtonSequenceViewHorizontalAlignmentConstraint;                  //@synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteActionGroupViewHorizontalLayoutTrailingConstraint;                  //@synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * actionGroupEqualsContentViewWidthConstraint;                                //@synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewTopConstraint;                                      //@synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewLeadingConstraint;                                  //@synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewWidthConstraint;                                    //@synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewHeightConstraint;                                   //@synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)_retroactivelyRequiresConstraintBasedLayout;
-(void)_UIAppearance_setAlignsToKeyboard:(char)arg1 ;
-(void)_UIAppearance_setShouldHaveBackdropView:(char)arg1 ;
-(void)_UIAppearance_setHasDimmingView:(char)arg1 ;
-(void)_UIAppearance_setInPopover:(char)arg1 ;
-(void)_UIAppearance_setPresentationContextPrefersCancelActionShown:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)_contentView;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)actions;
-(id)title;
-(id)preferredFocusedView;
-(int)tintAdjustmentMode;
-(char)shouldChangeFocusedItem:(id)arg1 heading:(unsigned)arg2 ;
-(void)setTintAdjustmentMode:(int)arg1 ;
-(void)didMoveToSuperview;
-(id)contentViewController;
-(UIView *)_dimmingView;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(char)inPopover;
-(void)_actionsChanged;
-(void)_performBatchActionChangesWithBlock:(/*^block*/id)arg1 ;
-(void)_propertiesChanged;
-(void)_updatePreferredAction;
-(id)textFields;
-(void)_textFieldsChanged;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setHasDimmingView:(char)arg1 ;
-(void)setShouldHaveBackdropView:(char)arg1 ;
-(void)setAlignsToKeyboard:(char)arg1 ;
-(void)_setActionsReversed:(char)arg1 ;
-(char)_actionsReversed;
-(void)_setTitle:(id)arg1 ;
-(id)message;
-(void)_setMessage:(id)arg1 ;
-(id)_attributedTitle;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedMessage;
-(void)_setAttributedMessage:(id)arg1 ;
-(id)_attributedDetailMessage;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(void)_didAddContentViewController;
-(void)_recomputeActionMetrics;
-(void)_setLayoutSize:(CGSize)arg1 ;
-(void)_actionLayoutDirectionChanged;
-(void)_setVisualStyle:(id)arg1 ;
-(void)_updateCancelActionBeingDiscrete;
-(char)_hasTitle;
-(char)_hasMessage;
-(id)cancelAction;
-(char)_hasAttributedTitle;
-(char)_hasAttributedMessage;
-(id)_focusedAction;
-(void)_removeContentViewController;
-(void)_sizeOfContentViewControllerChanged;
-(void)_sizeOfTextFieldViewControllerChanged;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg1 ;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg1 ;
-(void)setEffectAlpha:(float)arg1 ;
-(float)effectAlpha;
-(id)_textFieldViewController;
-(char)_hasDetailMessage;
-(id)_indexesOfActionSectionSeparators;
-(CGSize)_layoutSize;
-(id)_preferredActionView;
-(UIAlertController *)alertController;
-(void)_contentSizeChanged;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInPopover:(char)arg1 ;
-(void)_updateTintColor;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_forceLayoutEngineSolutionInRationalEdges;
-(void)_accessibilityColorsChanged;
-(void)_updateActionViewVisualStyle:(id)arg1 ;
-(void)setPresentationContextPrefersCancelActionShown:(char)arg1 ;
-(void)_prepareViewsAndAddConstraints;
-(void)_prepareContentView;
-(void)_prepareMainInterfaceActionsGroupView;
-(void)_prepareDiscreteCancelActionGroupView;
-(void)_prepareContentViewTopItemsView;
-(void)_prepareTitleLabel;
-(void)_prepareMesssageLabel;
-(void)_prepareDetailMessageLabel;
-(void)_prepareContentViewControllerContainerView;
-(void)_prepareTextFieldViewControllerContainerView;
-(void)_prepareDimmingView;
-(void)_prepareKeyboardLayoutAlignmentViews;
-(void)_applyViewConstraints;
-(void)_applyTitleConstraints;
-(void)_applyMessageConstraints;
-(void)_applyDetailMessageConstraints;
-(void)_applyContentViewControllerContainerViewConstraints;
-(void)_applyTextFieldViewControllerContainerViewConstraints;
-(void)_prepareDimmingViewConstraints;
-(void)_updateTitleLabelContents;
-(void)_updateLabelTextColor;
-(void)_updateLabelMaximumLines;
-(void)_updateTitleLabelFontSize;
-(void)_updateMessageLabelContents;
-(void)_updateMessageLabelFontSize;
-(void)_updateDetailLabelContents;
-(void)_updateDetailLabelFontSize;
-(void)_updateActionsGroupPresentationStyles;
-(void)setDiscreteCancelActionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewWidthConstraint;
-(void)setDiscreteCancelActionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewHeightConstraint;
-(void)setActionGroupEqualsContentViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentScrollViewMaximumWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentScrollViewMaximumWidthConstraint;
-(void)setContentViewMaxHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_labelHorizontalInsets;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewWidthConstraint;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewHeightConstraint;
-(CGSize)_sizeForLayoutWidthDetermination;
-(CGSize)_minimumSizeForAllActions;
-(char)_horizontalLayoutCanUseFullWidth;
-(float)_verticalLayoutWidth;
-(CGSize)_contentViewControllerSize;
-(float)_availableWidthForHorizontalLayout:(char)arg1 ;
-(int)_numberOfActionsForMainActionButtonSequenceView;
-(float)_idealLayoutWidth;
-(char)hasDiscreteHorizontalCancelAction;
-(CGSize)_itemSizeForHorizontalLayout:(char)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(char*)arg2 ;
-(float)_spaceRequiredForActionSectionsSpacing;
-(CGSize)_itemSizeForHorizontalLayout:(char)arg1 ;
-(char)cancelActionIsDiscrete;
-(id)__cancelActionView;
-(char)showsCancelAction;
-(char)_canLayOutActionsHorizontally;
-(NSLayoutConstraint *)foregroundViewWidthConstraint;
-(float)_layoutWidthForHorizontalLayout:(char)arg1 ;
-(void)setForegroundViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_recomputeAlertControllerWidth;
-(void)_configureActionGroupViewToAllowHorizontalLayout:(char)arg1 ;
-(CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(char)arg1 itemSize:(CGSize)arg2 ;
-(NSLayoutConstraint *)mainActionButtonSequenceViewWidthConstraint;
-(void)setMainActionButtonSequenceViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mainActionButtonSequenceViewHeightConstraint;
-(void)setMainActionButtonSequenceViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mainActionButtonSequenceViewHorizontalAlignmentConstraint;
-(void)setMainActionButtonSequenceViewHorizontalAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteActionGroupViewHorizontalLayoutTrailingConstraint;
-(void)setDiscreteActionGroupViewHorizontalLayoutTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_discreteCancelActionView;
-(NSLayoutConstraint *)actionGroupEqualsContentViewWidthConstraint;
-(NSLayoutConstraint *)discreteCancelActionViewTopConstraint;
-(NSLayoutConstraint *)discreteCancelActionViewLeadingConstraint;
-(void)setDiscreteCancelActionViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_marginBetweenContentAndDiscreteCancelAction;
-(void)setDiscreteCancelActionViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(char)_buttonsAreTopMost;
-(void)_updateMainScrollableHeaderViewHasRealContent;
-(NSLayoutConstraint *)titleLabelTopAlignmentConstraint;
-(NSLayoutConstraint *)messageLabelTopAlignmentConstraint;
-(NSLayoutConstraint *)contentViewControllerContainerViewTopAlignmentConstraint;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewTopAlignmentConstraint;
-(NSLayoutConstraint *)detailMessageLabelTopAlignmentConstraint;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(NSLayoutConstraint *)contentScrollViewBottomConstraint;
-(void)setTitleLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(char)_hasTextFields;
-(void)setTextFieldViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailMessageLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(char)_hasDiscreteCancelAction;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateConstraintConstants;
-(void)_reloadInterfaceActionViewRepresentations;
-(id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
-(void)_ensureActionViewRepresentationsHaveMetrics;
-(void)_reloadInterfaceActionsGroupViewPreferredAction;
-(id)_effectivePreferredAction;
-(id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2 ;
-(id)_unlocalizedOrderedPresentableAlertActions;
-(char)_shouldHaveCancelActionInMainActionButtonSequenceView;
-(id)_presentableAlertActions;
-(char)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1 ;
-(void)_updateStyleForIdiomChange:(char)arg1 ;
-(void)_updateLabelFontSizes;
-(void)_updateInsets;
-(void)_updateContentView;
-(NSLayoutConstraint *)contentViewMaxHeightConstraint;
-(void)_reevaluateSuperviewSizingConstraints;
-(char)hasDimmingView;
-(char)presentationContextPrefersCancelActionShown;
-(void)setCancelActionIsDiscrete:(char)arg1 ;
-(char)alignsToKeyboard;
-(void)_applyKeyboardAlignmentViewsConstraints;
-(NSLayoutConstraint *)contentViewControllerViewLeftConstraint;
-(NSLayoutConstraint *)contentViewControllerViewRightConstraint;
-(void)setContentViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerViewTopConstraint;
-(NSLayoutConstraint *)contentViewControllerViewBottomConstraint;
-(void)setContentViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewWidthConstraint;
-(void)setContentViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewHeightConstraint;
-(void)setContentViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActionViewMetrics:(_UIAlertControllerActionViewMetrics *)arg1 ;
-(_UIAlertControllerActionViewMetrics *)actionViewMetrics;
-(NSLayoutConstraint *)centerXConstraint;
-(NSLayoutConstraint *)centerYConstraint;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_scrollInitialActionToVisibleForPresentation;
-(id)_newStyledBackgroundView;
-(void)_prepareDimmingViewConstraintsIfNeeded;
-(char)_actionLayoutIsVertical;
-(char)shouldHaveBackdropView;
-(NSLayoutConstraint *)textFieldViewControllerViewLeftConstraint;
-(void)setTextFieldViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewRightConstraint;
-(void)setTextFieldViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewTopConstraint;
-(void)setTextFieldViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewBottomConstraint;
-(void)setTextFieldViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

