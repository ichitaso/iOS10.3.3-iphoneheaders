/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AFQueueDelegate.h>
#import <SiriViewService/SiriUISnippetViewControllerDelegate.h>
#import <SiriViewService/SiriUISnippetViewControllerDelegatePrivate.h>
#import <SiriViewService/SiriUIAceObjectViewControllerDelegate.h>
#import <SiriViewService/SiriUIAceObjectViewControllerDelegatePrivate.h>
#import <SiriViewService/SVSSuggestionsViewControllerDelegate.h>
#import <SiriViewService/SVSTranscriptDataSource.h>
#import <SiriViewService/SVSTranscriptDelegate.h>
#import <SiriViewService/SVSTranscriptViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SVSTranscriptViewControllerDataSource, SVSTranscriptViewControllerDelegate, SiriUIViewController;
@class NSMutableSet, UIViewController, SVSSuggestionsViewController, SVSTranscriptFlowLayout, SVSTranscript, SVSTranscriptAnimationQueue, SiriUITranscriptItem, UITapGestureRecognizer, NSMutableDictionary, SVSTranscriptView, NSUUID, NSString;

@interface SVSTranscriptViewController : UIViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, SVSTranscriptViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	int _updateAnimationCount;
	char _viewIsDisappearing;
	char _isWaitingForSpeechStartPoint;
	char _isPinExpired;
	unsigned _displayedTranscriptItemCount;
	float _previousContentYOffset;
	NSMutableSet* _controllersTrackingScrollingEvent;
	float _contentOffsetPriorToDraggingY;
	float _visibleKeyboardHeight;
	UIViewController* _viewControllerToCallViewDidAppear;
	char _viewIsInViewHierarchy;
	char _didLoadConversationList;
	char _showsTranscriptEndWhenVisible;
	id<SVSTranscriptViewControllerDataSource> _dataSource;
	id<SVSTranscriptViewControllerDelegate> _delegate;
	SVSSuggestionsViewController* _suggestionsViewController;
	SVSTranscriptFlowLayout* _layout;
	SVSTranscript* _transcript;
	SVSTranscriptAnimationQueue* _animationQueue;
	SVSTranscriptAnimationQueue* _pinAnimationQueue;
	SiriUITranscriptItem* _currentPin;
	NSMutableSet* _identifiersOfItemsWithPendingActions;
	NSMutableSet* _identifiersOfItemsWithFinishedActions;
	UIViewController*<SiriUIViewController> _editingViewController;
	UITapGestureRecognizer* _editingEndGestureRecognizer;
	float _pinDistance;
	float _gridHeight;
	NSMutableDictionary* _displayDateByTranscriptIdentifier;
	double _lastAnimationTime;
	double _lastPinAnimationTime;
	double _currentPinMinimumDuration;
	double _lastTranscriptDragStartTime;
	double _lastTranscriptEditingStartTime;

}

@property (nonatomic,retain) SVSTranscriptView * view; 
@property (assign,setter=_setViewIsInViewHierarchy:,getter=_viewIsInViewHierarchy,nonatomic) char viewIsInViewHierarchy;                                                    //@synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy - In the implementation block
@property (getter=_suggestionsViewController,nonatomic,readonly) SVSSuggestionsViewController * suggestionsViewController;                                                  //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (getter=_layout,nonatomic,readonly) SVSTranscriptFlowLayout * layout;                                                                                             //@synthesize layout=_layout - In the implementation block
@property (getter=_transcript,nonatomic,readonly) SVSTranscript * transcript;                                                                                               //@synthesize transcript=_transcript - In the implementation block
@property (assign,setter=_setDidLoadConversationList:,getter=_didLoadConversationList,nonatomic) char didLoadConversationList;                                              //@synthesize didLoadConversationList=_didLoadConversationList - In the implementation block
@property (getter=_animationQueue,nonatomic,readonly) SVSTranscriptAnimationQueue * animationQueue;                                                                         //@synthesize animationQueue=_animationQueue - In the implementation block
@property (getter=_pinAnimationQueue,nonatomic,readonly) SVSTranscriptAnimationQueue * pinAnimationQueue;                                                                   //@synthesize pinAnimationQueue=_pinAnimationQueue - In the implementation block
@property (assign,setter=_setLastAnimationTime:,getter=_lastAnimationTime,nonatomic) double lastAnimationTime;                                                              //@synthesize lastAnimationTime=_lastAnimationTime - In the implementation block
@property (assign,setter=_setLastPinAnimationTime:,getter=_lastPinAnimationTime,nonatomic) double lastPinAnimationTime;                                                     //@synthesize lastPinAnimationTime=_lastPinAnimationTime - In the implementation block
@property (assign,setter=_setCurrentPinMinimumDuration:,getter=_currentPinMinimumDuration,nonatomic) double currentPinMinimumDuration;                                      //@synthesize currentPinMinimumDuration=_currentPinMinimumDuration - In the implementation block
@property (setter=_setCurrentPin:,getter=_currentPin,nonatomic,retain) SiriUITranscriptItem * currentPin;                                                                   //@synthesize currentPin=_currentPin - In the implementation block
@property (getter=_identifiersOfItemsWithPendingActions,nonatomic,readonly) NSMutableSet * identifiersOfItemsWithPendingActions;                                            //@synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions - In the implementation block
@property (getter=_identifiersOfItemsWithFinishedActions,nonatomic,readonly) NSMutableSet * identifiersOfItemsWithFinishedActions;                                          //@synthesize identifiersOfItemsWithFinishedActions=_identifiersOfItemsWithFinishedActions - In the implementation block
@property (setter=_setEditingViewController:,getter=_editingViewController,nonatomic,retain) UIViewController*<SiriUIViewController> editingViewController;                 //@synthesize editingViewController=_editingViewController - In the implementation block
@property (setter=_setEditingEndGestureRecognizer:,getter=_editingEndGestureRecognizer,nonatomic,retain) UITapGestureRecognizer * editingEndGestureRecognizer;              //@synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer - In the implementation block
@property (assign,setter=_setShowsTranscriptEndWhenVisible:,getter=_showsTranscriptEndWhenVisible,nonatomic) char showsTranscriptEndWhenVisible;                            //@synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible - In the implementation block
@property (getter=_pinDistance,nonatomic,readonly) float pinDistance;                                                                                                       //@synthesize pinDistance=_pinDistance - In the implementation block
@property (getter=_gridHeight,nonatomic,readonly) float gridHeight;                                                                                                         //@synthesize gridHeight=_gridHeight - In the implementation block
@property (assign,setter=_setLastTranscriptDragStartTime:,getter=_lastTranscriptDragStartTime,nonatomic) double lastTranscriptDragStartTime;                                //@synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime - In the implementation block
@property (assign,setter=_setLastTranscriptEditingStartTime:,getter=_lastTranscriptEditingStartTime,nonatomic) double lastTranscriptEditingStartTime;                       //@synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime - In the implementation block
@property (getter=_displayDateByTranscriptIdentifier,nonatomic,readonly) NSMutableDictionary * displayDateByTranscriptIdentifier;                                           //@synthesize displayDateByTranscriptIdentifier=_displayDateByTranscriptIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * identifierOfLastDisplayedItem; 
@property (nonatomic,readonly) char transcriptStartIsVisible; 
@property (nonatomic,readonly) char transcriptEndIsVisible; 
@property (nonatomic,readonly) char transcriptIsAnimating; 
@property (assign,nonatomic,__weak) id<SVSTranscriptViewControllerDataSource> dataSource;                                                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SVSTranscriptViewControllerDelegate> delegate;                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_transcript;
-(void)_updateGridAndPinHeight;
-(float)_gridHeight;
-(id)_suggestionsViewController;
-(Class)aceControllerCellClass;
-(void)_registerReusableView:(Class)arg1 ;
-(Class)snippetControllerCellClass;
-(void)_updateStatusBarRelatedAttributesAndUpdateContentInset:(char)arg1 ;
-(char)_didLoadConversationList;
-(void)_setDidLoadConversationList:(char)arg1 ;
-(float)_bottomBarInset;
-(float)_pinDistance;
-(id)_snippetViewControllerIfExistsAtItemIndex:(int)arg1 ;
-(char)_showsTranscriptEndWhenVisible;
-(void)_setShowsTranscriptEndWhenVisible:(char)arg1 ;
-(void)showTranscriptEnd;
-(void)_setViewIsInViewHierarchy:(char)arg1 ;
-(id)_conversationItemList;
-(id)_displayDateByTranscriptIdentifier;
-(void)_logMetricsForVisibleSnippets;
-(void)_showSuggestionsIfNecessary;
-(void)_showListeningNudgeIfNecessary;
-(char)_viewIsInViewHierarchy;
-(void)_appendExtraSpaceToContentInsets;
-(void)_updateNavigationBarFrame;
-(void)_updateViewTopMarginHeight;
-(void)_updateViewContentInset;
-(CGPoint)_maxContentOffset;
-(void)pinItemWithIdentifier:(id)arg1 ;
-(id)_animationQueue;
-(id)_pinAnimationQueue;
-(id)_identifiersOfItemsWithPendingActions;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2 ;
-(void)presentationStateDidChangeForItemsAtIndexes:(id)arg1 ;
-(id)_identifiersOfItemsWithFinishedActions;
-(double)_nextPinAnimationTime;
-(void)_scheduleNextPinAnimationAfterDelay:(double)arg1 ;
-(NSUUID *)identifierOfLastDisplayedItem;
-(void)_removeConversationItemWithIdentifier:(id)arg1 ;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_domainObjectStore;
-(void)_setCurrentPin:(id)arg1 ;
-(void)_pinTranscriptToCurrentPin;
-(void)_setLastTranscriptEditingStartTime:(double)arg1 ;
-(void)_setupEditingForViewController:(id)arg1 ;
-(double)_lastTranscriptEditingStartTime;
-(void)_teardownEditingViewController:(id)arg1 ;
-(id)_transcriptItemForSiriViewController:(id)arg1 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(char)arg2 ;
-(id)_currentPin;
-(float)_expectedWidthForItemIndex:(unsigned)arg1 ;
-(UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned)arg1 ;
-(float)_pinDistanceFromTop;
-(id)persistentDataStoreForSiriViewController:(id)arg1 ;
-(void)_speakText:(id)arg1 isPhonetic:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_conversationItemAtIndex:(int)arg1 ;
-(id)_dialogPhaseForItemAtIndex:(int)arg1 ;
-(void)_removeConversationItemsWithIdentifiers:(id)arg1 ;
-(id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1 ;
-(id)_invalidIndexesToRemoveBeforeIndex:(int)arg1 ;
-(id)_indexPathsForItemsAtIndexes:(id)arg1 ;
-(void)_processAnimationQueue;
-(void)_updateBottomKeylineForScrollView:(id)arg1 ;
-(id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1 ;
-(void)animateTranscriptWithUpdates:(/*^block*/id)arg1 ;
-(id)_aceViewControllerIfExistsAtItemIndex:(int)arg1 ;
-(UIEdgeInsets)_transcriptItemLayoutMargins;
-(void)_logMetricsForSnippetAtIndexPath:(id)arg1 ;
-(id)_controllerForItemIndex:(int)arg1 ;
-(float)_heightForHeaderAtItemIndex:(int)arg1 ;
-(float)_heightForFooterAtItemIndex:(int)arg1 ;
-(void)_setLastTranscriptDragStartTime:(double)arg1 ;
-(double)_lastTranscriptDragStartTime;
-(void)notifySnippetsEndDraggingEventForScrollView:(id)arg1 ;
-(void)_processHidingSnippetView:(id)arg1 ;
-(char)_itemIndexIsInset:(unsigned)arg1 ;
-(id)_indexPathForFirstResponder;
-(void)_tappedOutsideEditingView:(id)arg1 ;
-(void)_setEditingEndGestureRecognizer:(id)arg1 ;
-(void)_setEditingViewController:(id)arg1 ;
-(UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1 ;
-(double)_nextAnimationTime;
-(void)_scheduleNextAnimationAfterDelay:(double)arg1 ;
-(double)_lastAnimationTime;
-(double)_lastPinAnimationTime;
-(double)_currentPinMinimumDuration;
-(void)_setLastAnimationTime:(double)arg1 ;
-(void)_performNextAnimation;
-(void)_processPinAnimationQueue;
-(void)_setLastPinAnimationTime:(double)arg1 ;
-(void)_setCurrentPinMinimumDuration:(double)arg1 ;
-(void)_performNextPinAnimation;
-(char)_shouldConditionallyPinToTranscriptItem:(id)arg1 ;
-(id)_aceCommandIdentifierForItemAtIndex:(int)arg1 ;
-(void)_animateSnippetTossInCell:(id)arg1 ;
-(void)_animateSnippetCancellation:(id)arg1 ;
-(void)_animateSnippetConfirmation:(id)arg1 ;
-(id)_tossAnimationForCell;
-(id)transcript:(id)arg1 aceObjectForItemAtIndex:(int)arg2 ;
-(void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2 ;
-(void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1 ;
-(void)siriSnippetViewControllerViewDidLoad:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(char)arg2 ;
-(void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3 ;
-(char)siriSnippetViewControllerIsVisible:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(unsigned)siriDeviceLockStateForSnippetViewController:(id)arg1 ;
-(id)siriEnabledAppListForSiriViewController:(id)arg1 ;
-(char)siriViewController:(id)arg1 openURL:(id)arg2 ;
-(id)additionalSpeechInterpretationsForSiriViewController:(id)arg1 ;
-(id)updatedUserUtteranceForSiriViewController:(id)arg1 ;
-(id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3 ;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1 ;
-(CGSize)siriViewControllerVisibleContentArea:(id)arg1 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 ;
-(void)siriViewController:(id)arg1 setContentOffset:(float)arg2 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 heightDifference:(float)arg2 ;
-(id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2 ;
-(id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3 ;
-(id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2 ;
-(void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2 ;
-(void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(char)arg2 ;
-(UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1 ;
-(float)siriSnippetViewControllerExpectedWidth:(id)arg1 ;
-(void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2 ;
-(char)siriViewController:(id)arg1 openPunchOut:(id)arg2 ;
-(id)persistentStoreForSiriViewController:(id)arg1 ;
-(void)suggestionsViewDidShowSuggestions:(id)arg1 ;
-(CGRect)statusBarFrameForSuggestionsViewController:(id)arg1 ;
-(float)statusViewHeightForSuggestionsViewController:(id)arg1 ;
-(void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(int)numberOfItemsInTranscript:(id)arg1 ;
-(id)transcript:(id)arg1 identifierOfItemAtIndex:(int)arg2 ;
-(id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(int)arg2 ;
-(id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(int)arg2 ;
-(char)transcript:(id)arg1 itemAtIndexIsVirgin:(int)arg2 ;
-(int)transcript:(id)arg1 presentationStateForItemAtIndex:(int)arg2 ;
-(id)viewControllerDelegateForTranscript:(id)arg1 ;
-(void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2 ;
-(void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2 ;
-(void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3 ;
-(void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2 ;
-(void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3 ;
-(void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2 ;
-(void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3 ;
-(void)transcriptView:(id)arg1 didSetContentSize:(CGSize)arg2 ;
-(void)_runSirilandTransitionTestWithIterations:(int)arg1 ;
-(void)siriDidTransitionFromState:(int)arg1 event:(int)arg2 ;
-(void)statusBarFrameDidChange;
-(void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2 ;
-(char)transcriptStartIsVisible;
-(char)transcriptEndIsVisible;
-(void)saveTranscriptPosition;
-(void)restoreTranscriptPositionAnimated:(char)arg1 ;
-(char)transcriptIsAnimating;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 ;
-(void)siriRequestWillStart;
-(void)siriDidDetectSpeechStartpoint;
-(void)changeUtterance:(id)arg1 ;
-(void)showSpeechAlternatives:(id)arg1 ;
-(void)siriBeganFingerprintingMusic;
-(void)siriStoppedFingerprintingMusic;
-(id)mostRecentMetricsContext;
-(id)_editingViewController;
-(id)_editingEndGestureRecognizer;
-(void)svscvc_setItemIdentifier:(id)arg1 ;
-(id)svscvc_itemIdentifier;
-(void)invalidate;
-(void)setDataSource:(id<SVSTranscriptViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<SVSTranscriptViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SVSTranscriptViewControllerDataSource>)dataSource;
-(id<SVSTranscriptViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)_collectionView;
-(char)_isRootViewController;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_setNavigationControllerContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(float)_navigationControllerContentOffsetAdjustment;
-(float)_topBarHeight;
-(CGPoint)_contentOffset;
-(id)_layout;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)queue:(id)arg1 didEnqueueObjects:(id)arg2 ;
-(id)_indexPathForItemAtIndex:(int)arg1 ;
-(char)_isNavigationBarHidden;
-(id)_navigationBar;
-(void)_updateTitle;
-(void)cancelRequestForSiriSnippetViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)siriWillActivateFromSource:(int)arg1 ;
-(void)siriDidDeactivate;
-(void)endEditingAndCorrect:(char)arg1 ;
-(char)siriViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)siriViewControllerWillBeginEditing:(id)arg1 ;
-(void)siriViewControllerDidEndEditing:(id)arg1 ;
-(void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4 ;
-(void)siriViewControllerRequestToPin:(id)arg1 ;
-(void)removeSiriViewController:(id)arg1 ;
-(UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1 ;
-(void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelSpeakingForSiriViewController:(id)arg1 ;
-(float)siriViewControllerExpectedWidth:(id)arg1 ;
-(CGRect)_statusBarFrame;
-(float)_contentHeight;
-(CGRect)_frameForItemAtIndex:(unsigned)arg1 ;
-(id)requestContext;
@end

