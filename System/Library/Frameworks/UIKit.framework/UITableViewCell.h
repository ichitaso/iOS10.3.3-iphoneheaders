/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/_UILayoutEngineSuspending.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITable_UITableViewCellDelegate, UITableConstants;
@class _UITableViewCellOldEditingData, NSString, _UIFloatingContentView, UIView, UIImageView, UILabel, UIColor, UIVisualEffect, UIStoryboardPreviewingSegueTemplateStorage, UIControl, _UITableViewCellSeparatorView, UITextField, NSTimer, UIImage, UILongPressGestureRecognizer, NSIndexPath, UITableViewCellDeleteConfirmationView, UITapGestureRecognizer, UIFocusGuide;

@interface UITableViewCell : UIView <UIScrollViewDelegate, _UILayoutEngineSuspending, NSCoding, UIGestureRecognizerDelegate> {

	id<UITable_UITableViewCellDelegate> _tableView;
	id _layoutManager;
	id _target;
	SEL _editAction;
	SEL _accessoryAction;
	_UITableViewCellOldEditingData* _oldEditingData;
	id _editingData;
	float _rightMargin;
	int _indentationLevel;
	float _indentationWidth;
	NSString* _reuseIdentifier;
	_UIFloatingContentView* _floatingContentView;
	int _lineBreakModeBeforeFocus;
	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UIView* _multipleSelectionBackgroundView;
	UIView* _selectedOverlayView;
	float _selectionFadeDuration;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _topShadowColor;
	UIColor* _bottomShadowColor;
	UIColor* _sectionBorderColor;
	UIView* _floatingSeparatorView;
	UIView* _topShadowAnimationView;
	UIView* _bottomShadowAnimationView;
	id _badge;
	CFDictionaryRef _unhighlightedStates;
	id _highlightingSupport;
	id _selectionSegueTemplate;
	id _accessoryActionSegueTemplate;
	UIStoryboardPreviewingSegueTemplateStorage* _accessoryActionPreviewingSegueTemplateStorage;
	UIControl* _accessoryView;
	UIControl* _editingAccessoryView;
	UIView* _customAccessoryView;
	UIView* _customEditingAccessoryView;
	_UITableViewCellSeparatorView* _separatorView;
	_UITableViewCellSeparatorView* _topSeparatorView;
	UIView* _topShadowView;
	UITextField* _editableTextField;
	double _lastSelectionTime;
	NSTimer* _deselectTimer;
	float _textFieldOffset;
	float _indexBarWidth;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	SEL _returnAction;
	UIColor* _selectionTintColor;
	UIColor* _accessoryTintColor;
	UIImage* _reorderControlImage;
	UILongPressGestureRecognizer* _menuGesture;
	NSIndexPath* _representedIndexPath;
	char _focusable;
	UITableViewCellDeleteConfirmationView* _swipeToDeleteConfirmationView;
	UITapGestureRecognizer* _swipeToDeleteCancelationGesture;
	UIView* _clearBlendingView;
	float _swipeToDeleteDistancePulled;
	float _sectionCornerRadius;
	float _sectionBorderWidth;
	float _defaultMarginWidth;
	UIFocusGuide* _editControlFocusGuide;
	UIFocusGuide* _reorderControlFocusGuide;
	id<UITableConstants> _constants;
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned usingDefaultBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned isCarPlayCell : 1;
		unsigned deleteAnimationInProgress : 1;
		unsigned deleteCancelationAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned shouldHaveFullLengthTopSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
		unsigned drawsSeparatorAtBottomOfSection : 1;
		unsigned separatorBackdropOverlayBlendMode : 3;
		unsigned separatorDrawsInVibrantLightMode : 1;
		unsigned separatorHidden : 1;
		unsigned hidingSeparatorsForSelection : 1;
		unsigned clippedBeforeSwiping : 1;
		unsigned allowsReorderingWhenNotEditing : 1;
		unsigned needsHeightCalculation : 1;
		unsigned reordering : 1;
		unsigned doesNotOverrideDidUpdateFocus : 1;
		unsigned hasEditingFocusGuides : 1;
		unsigned focusStyle : 3;
		unsigned accessoryViewsHidden : 1;
	}  _tableCellFlags;
	char _isLayoutEngineSuspended;

}

@property (setter=_setEditControlFocusGuide:,getter=_editControlFocusGuide,nonatomic,retain) UIFocusGuide * editControlFocusGuide;                       //@synthesize editControlFocusGuide=_editControlFocusGuide - In the implementation block
@property (setter=_setReorderControlFocusGuide:,getter=_reorderControlFocusGuide,nonatomic,retain) UIFocusGuide * reorderControlFocusGuide;              //@synthesize reorderControlFocusGuide=_reorderControlFocusGuide - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) int selectionStyle; 
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (nonatomic,readonly) int editingStyle; 
@property (assign,nonatomic) char showsReorderControl; 
@property (assign,nonatomic) char shouldIndentWhileEditing; 
@property (assign,nonatomic) int accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) int editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) int indentationLevel; 
@property (assign,nonatomic) float indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (nonatomic,readonly) char showingDeleteConfirmation; 
@property (assign,nonatomic) int focusStyle; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) char _layoutEngineSuspended;                              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(void)initialize;
+(void)_initializeForIdiom:(int)arg1 ;
+(id)_defaultTopShadowColor;
-(id)init;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(int)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(int)style;
-(id)image;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setLineBreakMode:(int)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)_target;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setLayoutEngineSuspended:(char)arg1 ;
-(char)_canDrawContent;
-(id)_encodableSubviews;
-(char)canBecomeFirstResponder;
-(char)canBecomeFocused;
-(void)focusedViewDidChange;
-(id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2 ;
-(id)_previewingSegueTemplateStorageForLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(char)_isLayoutEngineSuspended;
-(void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_setHiddenForReuse:(char)arg1 ;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)setNeedsUpdateConstraints;
-(void)setHighlighted:(char)arg1 ;
-(id)_defaultFont;
-(char)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_imageView;
-(char)isHighlighted;
-(id)font;
-(id)textColor;
-(id)_swipeToDeleteConfirmationView;
-(void)_beginSwiping;
-(void)_updateSwipeWithDistancePulled:(float)arg1 ;
-(void)_setIndexPath:(id)arg1 ;
-(void)_multiselectColorChanged;
-(id)separatorColor;
-(void)setSectionBorderColor:(id)arg1 ;
-(void)_setDrawsTopShadow:(char)arg1 ;
-(void)_setIndexBarWidth:(float)arg1 ;
-(id)_tableView;
-(id)_indexPath;
-(void)_setNeedsHeightCalculation:(char)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(float)_defaultMarginWidth;
-(char)_isMultiselecting;
-(int)selectionStyle;
-(void)_setSeparatorHidden:(char)arg1 ;
-(void)_setDeleteAnimationInProgress:(char)arg1 ;
-(int)accessoryType;
-(void)setTableViewStyle:(int)arg1 ;
-(id)_constants;
-(void)_setConstants:(id)arg1 ;
-(void)_setMarginWidth:(float)arg1 ;
-(void)_setRightMarginWidth:(float)arg1 ;
-(NSString *)reuseIdentifier;
-(void)_prepareToEnterReuseQueue;
-(void)_setNeedsSetup:(char)arg1 ;
-(void)_setAnimating:(char)arg1 clippingAdjacentCells:(char)arg2 ;
-(void)_setAnimating:(char)arg1 ;
-(void)_updateFullWidthSwipeDeletionView;
-(char)_shouldMaskToBoundsWhileAnimating;
-(char)_needsSetup;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_removeFloatingSeparator;
-(void)_removeInnerShadow;
-(void)_setDrawsSeparatorAtTopOfSection:(char)arg1 ;
-(void)_setDrawsSeparatorAtBottomOfSection:(char)arg1 ;
-(id)accessoryActionSegueTemplate;
-(void)setSeparatorColor:(id)arg1 ;
-(void)_systemTextSizeChanged;
-(void)_endSwiping:(char)arg1 ;
-(int)_popoverControllerStyle;
-(char)drawingEnabled;
-(int)editingStyle;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(id)selectionSegueTemplate;
-(char)isSelected;
-(void)_setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)setTopShadowColor:(id)arg1 ;
-(void)setBottomShadowColor:(id)arg1 ;
-(void)_updateHighlightColors;
-(void)_setTableBackgroundCGColor:(CGColorRef)arg1 withSystemColorName:(id)arg2 ;
-(void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(char)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(id)layoutManager;
-(void)_startToEditTextField;
-(void)_setDefaultMarginWidth:(float)arg1 ;
-(SEL)returnAction;
-(void)_setTableView:(id)arg1 ;
-(void)setIndentationLevel:(int)arg1 ;
-(unsigned)currentStateMask;
-(void)_setMultiselecting:(char)arg1 ;
-(void)_setTarget:(id)arg1 ;
-(void)_setAccessoryAction:(SEL)arg1 ;
-(void)_setIsCarPlayCell:(char)arg1 ;
-(char)_backgroundColorSet;
-(char)_isCarPlayCell;
-(id)sectionBorderColor;
-(int)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(int)arg1 ;
-(void)_setSeparatorEffect:(id)arg1 ;
-(float)_sectionBorderWidth;
-(void)_setSectionBorderWidth:(float)arg1 ;
-(void)_setAllowsReorderingWhenNotEditing:(char)arg1 ;
-(void)_setCurrentScreenScale:(float)arg1 ;
-(void)setSectionLocation:(int)arg1 animated:(char)arg2 ;
-(void)_setFrame:(CGRect)arg1 skipLayout:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(char)_drawsTopSeparatorDuringReordering;
-(void)_setDrawsTopSeparator:(char)arg1 ;
-(void)_saveOpaqueViewState:(id)arg1 ;
-(void)_setOpaque:(char)arg1 forSubview:(id)arg2 ;
-(void)_setReordering:(char)arg1 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(char)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(char)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setAccessoryType:(int)arg1 ;
-(void)_setShowsReorderControl:(char)arg1 ;
-(void)_setEditingStyle:(int)arg1 ;
-(void)_setShouldIndentWhileEditing:(char)arg1 ;
-(void)setWasSwiped:(char)arg1 ;
-(void)_setShowingDeleteConfirmation:(char)arg1 ;
-(char)shouldIndentWhileEditing;
-(char)showingDeleteConfirmation;
-(char)showsReorderControl;
-(char)_isAnimating;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)_setDeleteCancelationAnimationInProgress:(char)arg1 ;
-(UIView *)backgroundView;
-(void)didTransitionToState:(unsigned)arg1 ;
-(int)separatorStyle;
-(UIEdgeInsets)_backgroundInset;
-(void)_setSeparatorDrawsInVibrantLightMode:(char)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(char)_needsHeightCalculation;
-(UIEdgeInsets)separatorInset;
-(float)_marginWidth;
-(void)setEditing:(char)arg1 ;
-(UIEdgeInsets)_rawSeparatorInset;
-(char)_isInModalViewController;
-(id)_titleForDeleteConfirmationButton;
-(char)_allowsReorderingWhenNotEditing;
-(id)_separatorEffect;
-(id)tableBackgroundColor;
-(int)textAlignment;
-(id)selectedImage;
-(void)setLayoutManager:(id)arg1 ;
-(UIImageView *)imageView;
-(void)_setBadgeText:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(char)_isHighlighted;
-(void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1 ;
-(CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2 ;
-(CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2 ;
-(void)removeControlWillHideRemoveConfirmation:(id)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(void)setShowingDeleteConfirmation:(char)arg1 ;
-(void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2 ;
-(void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2 ;
-(void)removeControl:(id)arg1 willRemoveTarget:(id)arg2 ;
-(void)setSelectionStyle:(int)arg1 ;
-(int)tableViewStyle;
-(int)lineBreakMode;
-(id)_layoutDebuggingTitle;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(char)_drawsSeparatorAtTopOfSection;
-(char)_drawsSeparatorAtBottomOfSection;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(int)indentationLevel;
-(void)setEditingStyle:(int)arg1 ;
-(void)setShouldIndentWhileEditing:(char)arg1 ;
-(void)setShowsReorderControl:(char)arg1 ;
-(UIView *)selectedBackgroundView;
-(void)setSelectedBackgroundView:(UIView *)arg1 ;
-(id)_accessoryView:(char)arg1 ;
-(id)_separatorView:(char)arg1 ;
-(id)editingData:(char)arg1 ;
-(void)_setAccessoryViewsHidden:(char)arg1 ;
-(void)removeEditingData;
-(void)_setEditing:(char)arg1 animated:(char)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3 ;
-(float)selectionFadeDuration;
-(UIView *)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(int)editingAccessoryType;
-(void)setEditingAccessoryType:(int)arg1 ;
-(UIView *)editingAccessoryView;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(float)indentationWidth;
-(void)setIndentationWidth:(float)arg1 ;
-(int)focusStyle;
-(void)setFocusStyle:(int)arg1 ;
-(id)_removeControl;
-(void)_grabberBeganReorder:(id)arg1 touch:(id)arg2 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3 ;
-(void)_grabberReleased:(id)arg1 ;
-(void)setSelectionTintColor:(id)arg1 ;
-(id)selectionTintColor;
-(id)_multiselectBackgroundColor;
-(void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1 ;
-(id)oldEditingData;
-(CGRect)reorderRectForBounds:(CGRect)arg1 ;
-(void)setOldEditingData:(id)arg1 ;
-(void)_releaseReorderingControl;
-(id)_disclosureChevronImage:(char)arg1 ;
-(id)_tintedDisclosureImagePressed:(char)arg1 ;
-(id)_detailDisclosureImage:(char)arg1 ;
-(id)_checkmarkImage:(char)arg1 ;
-(id)_defaultAccessoryView;
-(void)_releaseRemoveControl;
-(float)_separatorHeight;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(char)arg2 ;
-(char)_isCurrentlyConsideredHighlighted;
-(id)_reorderingControl;
-(id)_currentAccessoryView:(char)arg1 ;
-(void)_menuDismissed:(id)arg1 ;
-(char)_insetsBackground;
-(char)_drawsTopShadow;
-(id)_selectedBackgroundView:(char)arg1 ;
-(id)topShadowColor;
-(void)_topShadowDidFadeOut;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateSeparatorContent;
-(void)_updateSeparatorInset;
-(float)_rightMarginWidth;
-(UIEdgeInsets)_backgroundSeparatorInset;
-(char)_showFullLengthTopSeparatorForTopOfSection;
-(CGRect)_separatorFrame;
-(id)_addSeparatorWithFrame:(CGRect)arg1 ;
-(char)_shouldHideSeparator;
-(char)_showSeparatorAtTopOfSection;
-(CGRect)_topSeparatorFrame;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelectionFadeDuration:(float)arg1 ;
-(id)_subviewsForFloatingContentView;
-(void)_releaseTextLabel;
-(void)_releaseDetailTextLabel;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)_setupTableViewCellCommon;
-(void)_drawContentInRect:(CGRect)arg1 selected:(char)arg2 ;
-(void)_setupMenuGesture;
-(void)_didCreateContentView;
-(id)_textLabel;
-(id)_detailTextLabel;
-(id)_textLabel:(char)arg1 ;
-(void)_setFont:(id)arg1 layout:(char)arg2 ;
-(id)_badge;
-(void)_updateTopShadowView:(char)arg1 ;
-(void)_setupBackgroundView;
-(void)_setupSelectedBackgroundView;
-(void)setSelectedBackgroundView:(id)arg1 animated:(char)arg2 ;
-(void)_resetSelectionTimer;
-(void)_setSelectionStyle:(int)arg1 selectionTintColor:(id)arg2 ;
-(void)_deselectAnimationFinished;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(void)_cancelInternalPerformRequests;
-(void)showSelectedBackgroundView:(char)arg1 animated:(char)arg2 ;
-(void)_updateFloatingContentControlStateAnimated:(char)arg1 ;
-(void)_delayedDeselect;
-(void)_removeRemoveControl;
-(void)_willTransitionToState:(unsigned)arg1 ;
-(void)_didTransitionToState:(unsigned)arg1 ;
-(void)_createReorderControlIfNeeded;
-(void)_syncAccessoryViewsIfNecessary;
-(id)_editingAccessoryView:(char)arg1 ;
-(void)_updateContentClip;
-(char)wasSwiped;
-(id)_createRemoveControlForStyle:(int)arg1 ;
-(void)_showReorderControl;
-(void)_layoutSubviewsAnimated:(char)arg1 ;
-(float)_editingButtonOffset;
-(CGRect)accessoryRectForBounds:(CGRect)arg1 accessoryView:(id)arg2 isCustom:(char)arg3 ;
-(CGRect)_delegateConfirmationRect;
-(CGSize)_textInsetSize;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGSize)_imageInsetSize;
-(void)_updateViewsForDeleteButton;
-(void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2 ;
-(void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(char)arg3 ;
-(void)_layoutFloatingContentView;
-(id)_reorderingSeparatorView;
-(CGRect)textRectForContentRect:(CGRect)arg1 ;
-(void)_setSectionLocation:(int)arg1 animated:(char)arg2 forceBackgroundSetup:(char)arg3 ;
-(void)_updateSeparatorContent:(char)arg1 ;
-(id)_editableTextField;
-(void)_willBeDeleted;
-(void)_setGrabberHidden:(char)arg1 ;
-(id)_disclosureImage:(char)arg1 ;
-(id)_disclosurePressedImage:(char)arg1 ;
-(id)_newAccessoryView:(char)arg1 ;
-(void)_clearOpaqueViewState:(id)arg1 ;
-(id)editableTextField;
-(float)_imageViewTrailingX;
-(void)_actionButtonPushed:(id)arg1 ;
-(void)_handleSwipeDeleteCancelation:(id)arg1 ;
-(id)accessoryActionPreviewingSegueTemplateStorage;
-(void)_removeFocusedFloatingContentView;
-(void)_ensureFocusedFloatingContentView;
-(void)_updateDefaultAccessoryViewForFocus:(char)arg1 ;
-(void)_finishedFadingGrabber:(id)arg1 finished:(char)arg2 ;
-(char)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_contentViewLabelTextDidChange:(id)arg1 ;
-(void)_setDrawsTopSeparatorDuringReordering:(char)arg1 ;
-(void)setAccessoryActionSegueTemplate:(id)arg1 ;
-(void)setSelectionSegueTemplate:(id)arg1 ;
-(char)_shouldHaveFullLengthBottomSeparator;
-(char)_shouldHaveFullLengthTopSeparator;
-(void)setDrawingEnabled:(char)arg1 ;
-(void)setSelectedTextColor:(id)arg1 ;
-(id)selectedTextColor;
-(void)setSelectedImage:(id)arg1 ;
-(id)_badgeText;
-(id)_forSpringBoardDefaultSelectedBackgroundView;
-(void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1 ;
-(id)_contentBackgroundColor;
-(void)setTableBackgroundColor:(id)arg1 ;
-(id)bottomShadowColor;
-(char)isAtLeastHalfSelected;
-(float)selectionPercent;
-(id)selectedOverlayView;
-(void)_transitionToReorderingAppearance:(char)arg1 ;
-(void)_finishTransitioningToReorderingAppearance:(char)arg1 ;
-(void)_setAccessoryTintColor:(id)arg1 ;
-(id)_accessoryTintColor;
-(void)setHidesAccessoryWhenEditing:(char)arg1 ;
-(char)hidesAccessoryWhenEditing;
-(void)setClipsContents:(char)arg1 ;
-(char)clipsContents;
-(CGRect)editRectForBounds:(CGRect)arg1 ;
-(void)setEditAction:(SEL)arg1 ;
-(SEL)editAction;
-(void)setAccessoryAction:(SEL)arg1 ;
-(SEL)accessoryAction;
-(CGRect)contentRectForState:(unsigned)arg1 ;
-(id)_detailTextLabel:(char)arg1 ;
-(id)_editableTextField:(char)arg1 ;
-(id)_imageView:(char)arg1 ;
-(id)_badge:(char)arg1 ;
-(void)_setReorderControlImage:(id)arg1 ;
-(id)_reorderControlImage;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(void)_animateFloatingSeparatorForInsertion:(char)arg1 withRowAnimation:(int)arg2 ;
-(void)_animateInnerShadowForInsertion:(char)arg1 withRowAnimation:(int)arg2 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(char)_isReorderable;
-(id)_customAccessoryView:(char)arg1 ;
-(id)_customEditingAccessoryView:(char)arg1 ;
-(id)_backgroundView:(char)arg1 ;
-(id)_topShadowView:(char)arg1 ;
-(char)_hasAccessoryView;
-(char)_hasEditingAccessoryView;
-(SEL)_accessoryAction;
-(char)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(char)_isUsingOldStyleMultiselection;
-(char)_isDeleteCancelationAnimationInProgress;
-(id)_deleteConfirmationView;
-(char)_isDeleteAnimationInProgress;
-(void)_swipeDeleteButtonPushed;
-(void)_swipeAccessoryButtonPushed;
-(void)setTextFieldOffset:(float)arg1 ;
-(float)textFieldOffset;
-(void)setPlaceHolderValue:(id)arg1 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)setReturnAction:(SEL)arg1 ;
-(char)_separatorDrawsInVibrantLightMode;
-(float)_indexBarWidth;
-(char)_separatorHidden;
-(char)_accessoryViewsHidden;
-(char)_usesRoundedGroups;
-(void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1 ;
-(void)setTableSpecificElementsHidden:(char)arg1 ;
-(char)tableSpecificElementsHidden;
-(void)_updateDefaultLabelsForFocus:(char)arg1 ;
-(id)_editControlFocusGuide;
-(void)_setEditControlFocusGuide:(id)arg1 ;
-(id)_reorderControlFocusGuide;
-(void)_setReorderControlFocusGuide:(id)arg1 ;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
@end

