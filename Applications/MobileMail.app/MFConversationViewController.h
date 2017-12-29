/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MFKeyboardAvoidable.h>
#import <MobileMail/MFLazyCacheDelegate.h>
#import <MobileMail/MessageMiniMallObserver.h>
#import <MobileMail/MFMessageViewControllerDelegate.h>
#import <MobileMail/MFPreviewable.h>
#import <MobileMail/MFSwipableCollectionViewLayoutDelegate.h>
#import <libobjc.A.dylib/MFPassthroughViewProvider.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <MobileMail/MFArrowControlsViewDelegate.h>
#import <MobileMail/MFMoveToPredictionTriageInteractionDelegate.h>
#import <MobileMail/MFConversationViewControllerDelegate.h>
#import <MobileMail/MFKeyCommandReacting.h>
#import <MobileMail/MFTransferStackControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobileMail/MFConversationViewCellSizeTrackerDelegate.h>
#import <MobileMail/_MFConversationViewCollectionViewDelegate.h>
#import <MobileMail/MFCollapsibleHeaderViewDelegate.h>

@protocol MFConversationViewControllerDelegate, MFMailboxPrediction;
@class MessageMiniMall, MFLazyCache, MFPriorityLoadingQueue, NSMapTable, MFSparseMutable64IndexSet, MFCollapsibleHeaderView, MFAccessorizedNavigationItem, _MFConversationViewCollectionView, MFSwipableCollectionViewLayout, MFConversationViewFlowLayout, _MFConversationViewUpdateContext, MFCollectionViewPagingAnimator, NSArray, LongPressableButtonItem, UIBarButtonItem, MFArrowControlsView, NoSelectedMessageView, UIKeyCommand, UIPanGestureRecognizer, MFConversationViewCellSizeTracker, MFMessageViewControllerReuseQueue, MFMailMessage, MFConversationViewNavigationAnimationController, CNContactStore, MFConversationHandoffCoordinator, NSIndexPath, NSString, MFTransferSplitViewController, MFTextSelectionScrollHandler, MFConversationAssistantContextProvider, MFConversationCurrentVisibleMessageStrategy, MSMessageLoadingAnalyticController, MFMailMessageLibrary, MFAttachmentManager, UICollectionView;

@interface MFConversationViewController : UIViewController <MFKeyboardAvoidable, MFLazyCacheDelegate, MessageMiniMallObserver, MFMessageViewControllerDelegate, MFPreviewable, MFSwipableCollectionViewLayoutDelegate, MFPassthroughViewProvider, CNContactViewControllerDelegate, MFArrowControlsViewDelegate, MFMoveToPredictionTriageInteractionDelegate, MFConversationViewControllerDelegate, MFKeyCommandReacting, MFTransferStackControllerDelegate, UIGestureRecognizerDelegate, MFConversationViewCellSizeTrackerDelegate, _MFConversationViewCollectionViewDelegate, MFCollapsibleHeaderViewDelegate> {

	MessageMiniMall* _conversationMall;
	MFLazyCache* _mostRecentAncestorCache;
	MFLazyCache* _displayNameCache;
	MFLazyCache* _loadingContextCache;
	MFPriorityLoadingQueue* _loadingContextQueue;
	NSMapTable* _delayedReadCancelables;
	MFSparseMutable64IndexSet* _disabledMarkAsReadMessageHashes;
	CGPoint _layoutInvalidationContentOffset;
	double _nextAvailableLoadMoreInterval;
	MFCollapsibleHeaderView* _conversationHeaderView;
	MFAccessorizedNavigationItem* _accessorizedNavigationItem;
	_MFConversationViewCollectionView* _conversationView;
	MFSwipableCollectionViewLayout* _defaultConversationLayout;
	MFConversationViewFlowLayout* _singleMessageLayout;
	_MFConversationViewUpdateContext* _currentUpdateContext;
	MFCollectionViewPagingAnimator* _pagingAnimator;
	NSArray* _defaultBarButtons;
	LongPressableButtonItem* _deleteButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIBarButtonItem* _replyButtonItem;
	UIBarButtonItem* _transferButtonItem;
	UIBarButtonItem* _arrowControlsButtonItem;
	UIBarButtonItem* _leftSpaceItem;
	MFArrowControlsView* _arrowControlsView;
	NoSelectedMessageView* _noSelectedMessageView;
	UIKeyCommand* _keyCommands[12];
	float _adjustmentForKeyboard;
	UIPanGestureRecognizer* _popRecognizer;
	NSArray* _messageSources;
	MFConversationViewCellSizeTracker* _cellSizeTracker;
	MFMessageViewControllerReuseQueue* _messageViewControllerReuseQueue;
	struct {
		unsigned shouldShowToolbar : 1;
		unsigned shouldShowDisplayModeButton : 1;
		unsigned shouldShowNavigationArrows : 1;
		unsigned shouldShowArchiveButton : 1;
		unsigned scrollToReferenceMessageOnNextAppearance : 1;
		unsigned nextArrowPressAdvancesConversation : 1;
		unsigned isUpdatingSources : 1;
		unsigned userDidCollapseBottomPadding : 1;
		unsigned viewIsVisible : 1;
		unsigned includeRelatedMessages : 1;
		unsigned isRotating : 1;
	}  _flags;
	char _isBeingPreviewed;
	char _isPrimary;
	char _isResizing;
	char _messagesShowSourceMailbox;
	char _toolbarHidden;
	char _shownAsConversation;
	char _shouldShowNoMessageSelectedView;
	unsigned _conversationSortOrder;
	UIBarButtonItem* _doneButton;
	MFMailMessage* _referenceMessage;
	MFConversationViewNavigationAnimationController* _animationController;
	id<MFConversationViewControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	MFConversationHandoffCoordinator* _handoffCoordinator;
	NSIndexPath* _pinnedIndexPath;
	NSString* _conversationSubject;
	MFTransferSplitViewController* _transferController;
	id<MFMailboxPrediction> _mailboxPrediction;
	MFTextSelectionScrollHandler* _textSelectionScrollHandler;
	MFConversationAssistantContextProvider* _assistantContextProvider;
	MFConversationCurrentVisibleMessageStrategy* _currentVisibleMessageStrategy;
	UIBarButtonItem* _contactLeftDoneButton;
	NSIndexPath* _removedSingleMessageIndexPath;
	MSMessageLoadingAnalyticController* _messageLoadingAnalyticController;
	CGPoint _initialScrollOffset;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) MFMailMessage * referenceMessage;                                                         //@synthesize referenceMessage=_referenceMessage - In the implementation block
@property (nonatomic,retain) MFConversationHandoffCoordinator * handoffCoordinator;                                    //@synthesize handoffCoordinator=_handoffCoordinator - In the implementation block
@property (nonatomic,retain) NSIndexPath * pinnedIndexPath;                                                            //@synthesize pinnedIndexPath=_pinnedIndexPath - In the implementation block
@property (nonatomic,copy) NSString * conversationSubject;                                                             //@synthesize conversationSubject=_conversationSubject - In the implementation block
@property (nonatomic,readonly) MFMailMessageLibrary * library; 
@property (nonatomic,readonly) MFAttachmentManager * attachmentManager; 
@property (assign,nonatomic) char shouldShowNoMessageSelectedView;                                                     //@synthesize shouldShowNoMessageSelectedView=_shouldShowNoMessageSelectedView - In the implementation block
@property (nonatomic,retain) MFTransferSplitViewController * transferController;                                       //@synthesize transferController=_transferController - In the implementation block
@property (nonatomic,retain) id<MFMailboxPrediction> mailboxPrediction;                                                //@synthesize mailboxPrediction=_mailboxPrediction - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * transferButtonItem;                                                     //@synthesize transferButtonItem=_transferButtonItem - In the implementation block
@property (nonatomic,retain) MFTextSelectionScrollHandler * textSelectionScrollHandler;                                //@synthesize textSelectionScrollHandler=_textSelectionScrollHandler - In the implementation block
@property (nonatomic,retain) MFConversationAssistantContextProvider * assistantContextProvider;                        //@synthesize assistantContextProvider=_assistantContextProvider - In the implementation block
@property (nonatomic,retain) MFConversationCurrentVisibleMessageStrategy * currentVisibleMessageStrategy;              //@synthesize currentVisibleMessageStrategy=_currentVisibleMessageStrategy - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * contactLeftDoneButton;                                                  //@synthesize contactLeftDoneButton=_contactLeftDoneButton - In the implementation block
@property (nonatomic,retain) NSIndexPath * removedSingleMessageIndexPath;                                              //@synthesize removedSingleMessageIndexPath=_removedSingleMessageIndexPath - In the implementation block
@property (nonatomic,retain) MSMessageLoadingAnalyticController * messageLoadingAnalyticController;                    //@synthesize messageLoadingAnalyticController=_messageLoadingAnalyticController - In the implementation block
@property (assign,nonatomic) unsigned conversationSortOrder;                                                           //@synthesize conversationSortOrder=_conversationSortOrder - In the implementation block
@property (assign,nonatomic) char isBeingPreviewed;                                                                    //@synthesize isBeingPreviewed=_isBeingPreviewed - In the implementation block
@property (assign,nonatomic) char isPrimary;                                                                           //@synthesize isPrimary=_isPrimary - In the implementation block
@property (assign,nonatomic) char isResizing;                                                                          //@synthesize isResizing=_isResizing - In the implementation block
@property (assign,nonatomic) char messagesShowSourceMailbox;                                                           //@synthesize messagesShowSourceMailbox=_messagesShowSourceMailbox - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                             //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,getter=isToolbarHidden,nonatomic) char toolbarHidden;                                                //@synthesize toolbarHidden=_toolbarHidden - In the implementation block
@property (nonatomic,readonly) MessageMiniMall * mall;                                                                 //@synthesize conversationMall=_conversationMall - In the implementation block
@property (nonatomic,readonly) MFArrowControlsView * arrowControlsView; 
@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (nonatomic,readonly) char shownAsConversation;                                                               //@synthesize shownAsConversation=_shownAsConversation - In the implementation block
@property (nonatomic,readonly) MFMailMessage * targetMessageForBarButtonTriage; 
@property (nonatomic,retain) MFConversationViewNavigationAnimationController * animationController;                    //@synthesize animationController=_animationController - In the implementation block
@property (assign,nonatomic) CGPoint initialScrollOffset;                                                              //@synthesize initialScrollOffset=_initialScrollOffset - In the implementation block
@property (assign,nonatomic) id<MFConversationViewControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MFTransferSplitViewController *)transferController;
-(void)setTransferController:(MFTransferSplitViewController *)arg1 ;
-(MFMailMessage *)targetMessageForBarButtonTriage;
-(MessageMiniMall *)mall;
-(id)_focusedMessage;
-(void)_splitViewDisplayModeDidChange:(id)arg1 ;
-(MFMailMessage *)referenceMessage;
-(void)deleteButtonLongPressed:(id)arg1 ;
-(void)setReferenceMessage:(id)arg1 showAsConversation:(char)arg2 messageSources:(id)arg3 animated:(char)arg4 ;
-(void)setMessagesShowSourceMailbox:(char)arg1 ;
-(void)setMailboxPrediction:(id<MFMailboxPrediction>)arg1 ;
-(void)previewNewIndicatorForMessage:(id)arg1 triageAction:(unsigned)arg2 ;
-(void)setIsBeingPreviewed:(char)arg1 ;
-(void)miniMallMessageCountWillChange:(id)arg1 ;
-(void)miniMallMessageCountDidChange:(id)arg1 ;
-(void)miniMallMessagesAtIndexPathsChanged:(id)arg1 ;
-(void)miniMallStartFetch:(id)arg1 ;
-(void)miniMallFinishedFetch:(id)arg1 ;
-(void)miniMallCurrentMessageRemoved:(id)arg1 ;
-(void)miniMallDidLoadMessages:(id)arg1 ;
-(void)miniMallGrowingMailboxesChanged:(id)arg1 ;
-(void)miniMallDidFinishSearch:(id)arg1 ;
-(char)conversationViewController:(id)arg1 canAdvanceToNextConversationWithDirection:(int)arg2 ;
-(void)conversationViewController:(id)arg1 advanceToNextConversationWithDirection:(int)arg2 ;
-(void)conversationViewController:(id)arg1 willRemoveAllVisibleMessages:(id)arg2 ;
-(id)titleForSingletonConversationViewController:(id)arg1 ;
-(id)shrinkAnimationContainerViewForConversationViewController:(id)arg1 ;
-(void)presentTransferUIWithMoveInteraction:(id)arg1 prediction:(id)arg2 fromViewController:(id)arg3 ;
-(id)presentingViewControllerForTriageInteraction:(id)arg1 ;
-(id)snapshotViewOfCurrentlySelectedMailMessageForStackViewController:(id)arg1 ;
-(id)currentlySelectedMailMessageForStackViewController:(id)arg1 ;
-(id)mf_applicationContexts;
-(/*^block*/id)_duplicatePreferenceComparator;
-(void)_testDeleteSelectedMessage;
-(void)_testReplyForSelectedMessage;
-(UIBarButtonItem *)transferButtonItem;
-(void)moveButtonTapped:(id)arg1 ;
-(char)wantsBarHidingWhenVerticallyCompact;
-(id)swipableCollectionViewLayout:(id)arg1 leadingSwipeActionsForItemAtIndexPath:(id)arg2 ;
-(id)swipableCollectionViewLayout:(id)arg1 trailingSwipeActionsForItemAtIndexPath:(id)arg2 ;
-(id<MFMailboxPrediction>)mailboxPrediction;
-(void)_updateConversationSortOrder;
-(void)_updateIncludeRelatedMessages;
-(void)_invalidateDisplayNameCache;
-(void)_fontMetricCacheDidInvalidate:(id)arg1 ;
-(void)invalidateAutomaticMarkAsReadForAllMessages;
-(void)_doSetShouldShowNoMessageSelectedView:(char)arg1 ;
-(void)_updateBarButtonsAnimated:(char)arg1 force:(char)arg2 ;
-(void)setShouldShowNoMessageSelectedView:(char)arg1 ;
-(void)popGestureDidRecognize:(id)arg1 ;
-(void)_updateConversationHeaderViewLayoutMarginsWithSuperviewMargins:(UIEdgeInsets)arg1 ;
-(void)_updateCollectionViewMargins;
-(void)_scrollToReferenceMessage;
-(char)_isDisplayingSingleMessage;
-(void)_endEditingAnimated:(char)arg1 ;
-(MSMessageLoadingAnalyticController *)messageLoadingAnalyticController;
-(float)_itemSpacing;
-(int)_headerDisplayOptionsForMessage:(id)arg1 displayedAsSingleMessage:(char)arg2 ;
-(void)_toggleCellsGroupOpacityDuringRotationWihtCoordinator:(id)arg1 ;
-(id)_previewActionsForTriageActions:(id)arg1 excludingActions:(id)arg2 ;
-(id)_messagesForBarButtonTriage;
-(id)_previewActionForTriageAction:(unsigned)arg1 withMessages:(id)arg2 forSwipe:(char)arg3 ;
-(id)_messageLoadingContextForMessage:(id)arg1 ;
-(unsigned)conversationSortOrder;
-(void)_updateMallComparatorWithSortOrder:(unsigned)arg1 ;
-(id)_sourceForSingleMessage:(id)arg1 ;
-(void)_beginUpdatingSources;
-(void)_endUpdatingSources;
-(void)_resetLoadingContext;
-(/*^block*/id)priorityLoadingComparatorForPinnedMessage:(id)arg1 ;
-(void)_updateSources;
-(void)_updateArrowControlsView;
-(MFConversationHandoffCoordinator *)handoffCoordinator;
-(id)_allMessages;
-(id)_cellForMessage:(id)arg1 ;
-(NSString *)conversationSubject;
-(char)_shouldShowConversationHeader;
-(void)_updateCollectionViewInsetsWithSubjectHeight:(float)arg1 ;
-(char)_shouldAutomaticallyCollapseQuotedContentForCellAtIndex:(unsigned)arg1 ;
-(void)_configureCell:(id)arg1 loadingContext:(id)arg2 collapseQuotedContent:(char)arg3 ;
-(void)_preloadMessagesAdjacentToMessage:(id)arg1 ;
-(id)_oldestIndexPath;
-(void)scheduleAutomaticMarkAsReadForMessage:(id)arg1 ;
-(void)_attemptLoadMissingMessages;
-(id)_messageAtIndexPath:(id)arg1 ;
-(id)_indexPathForTopMostVisibleRow;
-(void)_shrinkBottomPaddingIfNecessary;
-(void)_ensureSubjectViewLayoutIfNeeded;
-(void)_updateBottomPadding;
-(float)_autoscrollAdjustment;
-(void)_updateBottomPaddingWithLastItemHeight:(float)arg1 ;
-(id)_indexPathForReferenceMessage;
-(id)_visibleNavigationBar;
-(void)_toggleCellGroupOpacityIfNeeded:(id)arg1 displaying:(char)arg2 ;
-(char)messagesShowSourceMailbox;
-(void)cancelAutomaticMarkAsReadForMessage:(id)arg1 ;
-(void)_showSingleMessage:(id)arg1 animationOffset:(CGPoint)arg2 initialScrollOffset:(CGPoint)arg3 ;
-(id)_visibleIndexPathForMessageViewController:(id)arg1 ;
-(void)setInitialScrollOffset:(CGPoint)arg1 ;
-(char)shownAsConversation;
-(id)_mostRecentAncestorMessageForMessage:(id)arg1 ;
-(void)_displayViewController:(id)arg1 fromAtom:(id)arg2 animated:(char)arg3 ;
-(char)_shouldAutomaticallyMarkAsReadMessage:(id)arg1 ;
-(CGPoint)initialScrollOffset;
-(void)_scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 pin:(char)arg3 ;
-(id)_nextIndexPathToSelectFromIndexPath:(id)arg1 withDirection:(int)arg2 ;
-(void)setConversationSubject:(NSString *)arg1 ;
-(void)_updateEverything;
-(id)indexSetForRowsFromIndexPaths:(id)arg1 section:(int)arg2 ;
-(void)_hideRemovedSingleMessageCellIfInRemovedIndexPaths:(id)arg1 ;
-(NSIndexPath *)removedSingleMessageIndexPath;
-(void)setRemovedSingleMessageIndexPath:(NSIndexPath *)arg1 ;
-(void)_replyShortcutInvoked:(id)arg1 ;
-(void)_forwardShortcutInvoked:(id)arg1 ;
-(void)_navigateMessageKeyCommandInvoked:(id)arg1 ;
-(void)_markAsJunkKeyCommandInvoked:(id)arg1 ;
-(void)_markReadKeyCommandInvoked:(id)arg1 ;
-(void)_flagMessageKeyCommandInvoked:(id)arg1 ;
-(void)_pageKeyCommandInvoked:(id)arg1 ;
-(id)_keyCommandForCode:(int)arg1 ;
-(int)_codeForKeyCommand:(id)arg1 ;
-(id)_getCurrentlySelectedMessageContentForMessage:(id)arg1 ;
-(void)_clearSelectedMessageContentForMessage:(id)arg1 ;
-(void)disableAutomaticMarkAsReadForMessages:(id)arg1 ;
-(void)_updateBarButtonsAnimated:(char)arg1 withDisplayMode:(int)arg2 force:(char)arg3 ;
-(void)replyButtonTapped:(id)arg1 ;
-(void)markButtonTapped:(id)arg1 ;
-(char)_shouldShowArrowsForDisplayMode:(int)arg1 ;
-(MFArrowControlsView *)arrowControlsView;
-(id)_defaultBarButtonsWithFlexibleSpacing:(char)arg1 reverseOrder:(char)arg2 ;
-(void)_updateBarButtonsEnabled;
-(id)_flexibleSpaceBarButton;
-(id)_fixedSpaceBarButton;
-(void)_shrinkMessagesToBarButton:(id)arg1 withInteraction:(id)arg2 ;
-(void)_doDeleteSelectedMessagesAskingConfirmation:(char)arg1 presentationSourceButtonItem:(id)arg2 ;
-(id)_nextMessageIndexWithDirection:(int)arg1 ;
-(UIBarButtonItem *)contactLeftDoneButton;
-(void)_showModalViewController:(id)arg1 fromView:(id)arg2 sourceRect:(CGRect)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)_dismissPopover;
-(CGRect)_defaultSourceRectForView:(id)arg1 ;
-(id)_triageInteractionForTriageAction:(unsigned)arg1 withMessages:(id)arg2 indexPath:(id)arg3 ;
-(id)_swipeActionForTriageInteraction:(id)arg1 ;
-(void)setConversationSortOrder:(unsigned)arg1 ;
-(float)_minimumEdgePadding;
-(id)viewForKeyboardAvoidance:(id)arg1 ;
-(id)transitionCoordinatorForKeyboardAvoidance:(id)arg1 ;
-(void)keyboardAvoidance:(id)arg1 adjustForOverlap:(float)arg2 ;
-(void)messageViewControllerDidFinishFirstPaint:(id)arg1 ;
-(void)messageViewControllerDidDisplayContent:(id)arg1 ;
-(void)messageViewController:(id)arg1 didFinishRenderingWithHeight:(float)arg2 ;
-(void)messageViewController:(id)arg1 didTapShowMoreAtCollapsedOffset:(CGPoint)arg2 expandedOffset:(CGPoint)arg3 ;
-(void)messageViewControllerDidTapRevealActionsButton:(id)arg1 ;
-(id)messageViewController:(id)arg1 mostRecentAncestorMessageForMessage:(id)arg2 ;
-(void)messageViewController:(id)arg1 contentViewDidEndZoomingMessageWithOffset:(CGPoint)arg2 ;
-(void)messageViewControllerDidTapToExpand:(id)arg1 ;
-(void)messageViewControllerDidTapAddressAtom:(id)arg1 contactViewController:(id)arg2 ;
-(void)messageViewController:(id)arg1 didChangeSelectedHTML:(id)arg2 ;
-(id)messageViewController:(id)arg1 displayNameForEmailAddress:(id)arg2 abbreviated:(char)arg3 ;
-(void)messageViewController:(id)arg1 loadingIndicatorDidChangeVisibility:(char)arg2 ;
-(void)arrowControlsView:(id)arg1 didTapButtonWithDirection:(int)arg2 ;
-(CGSize)defaultCellSizeForTracker:(id)arg1 ;
-(float)horizontalPaddingForTracker:(id)arg1 ;
-(char)isDisplayingSingleMessageForTracker:(id)arg1 ;
-(CGPoint)initialScrollOffsetForTracker:(id)arg1 ;
-(UIEdgeInsets)layoutMarginsForCollectionViewFrame:(CGRect)arg1 ;
-(void)collapsibleHeader:(id)arg1 didChangeContentHeight:(float)arg2 ;
-(id)hostScrollViewForCollapsibleHeader:(id)arg1 ;
-(void)_didRecognizeScreenEdgeGesture:(id)arg1 ;
-(char)_messageIsReferenceMessage:(id)arg1 ;
-(void)setTransferButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setReferenceMessage:(MFMailMessage *)arg1 ;
-(void)setHandoffCoordinator:(MFConversationHandoffCoordinator *)arg1 ;
-(char)shouldShowNoMessageSelectedView;
-(MFTextSelectionScrollHandler *)textSelectionScrollHandler;
-(void)setTextSelectionScrollHandler:(MFTextSelectionScrollHandler *)arg1 ;
-(MFConversationAssistantContextProvider *)assistantContextProvider;
-(void)setAssistantContextProvider:(MFConversationAssistantContextProvider *)arg1 ;
-(MFConversationCurrentVisibleMessageStrategy *)currentVisibleMessageStrategy;
-(void)setCurrentVisibleMessageStrategy:(MFConversationCurrentVisibleMessageStrategy *)arg1 ;
-(void)setContactLeftDoneButton:(UIBarButtonItem *)arg1 ;
-(void)setMessageLoadingAnalyticController:(MSMessageLoadingAnalyticController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<MFConversationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MFConversationViewControllerDelegate>)delegate;
-(void)setAnimationController:(MFConversationViewNavigationAnimationController *)arg1 ;
-(MFConversationViewNavigationAnimationController *)animationController;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)keyCommands;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(char)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)updateUserActivityState:(id)arg1 ;
-(void)_setBottomPadding:(float)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(int)arg2 transitionCoordinator:(id)arg3 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)previewActionItems;
-(id)leadingPreviewAction;
-(id)trailingPreviewAction;
-(char)isToolbarHidden;
-(void)setToolbarHidden:(char)arg1 ;
-(void)_updateBackground;
-(id)passthroughViews;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)done:(id)arg1 ;
-(void)setIsPrimary:(char)arg1 ;
-(void)lazyCache:(id)arg1 willEvictObject:(id)arg2 ;
-(CNContactStore *)contactStore;
-(MFMailMessageLibrary *)library;
-(char)shouldArchiveByDefault;
-(void)_updateTitle;
-(MFAttachmentManager *)attachmentManager;
-(void)setIsResizing:(char)arg1 ;
-(char)isResizing;
-(void)_updateLayout;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setPinnedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)pinnedIndexPath;
-(char)isPrimary;
-(char)isBeingPreviewed;
-(void)deleteButtonTapped:(id)arg1 ;
@end

