/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIViewController.h>
#import <SiriViewService/AFUIDebugControllerDelegate.h>
#import <SiriViewService/SVSPagerViewControllerDelegate.h>
#import <SiriViewService/SVSSirilandViewDelegate.h>
#import <SiriViewService/SVSTranscriptStackViewControllerDataSource.h>
#import <SiriViewService/SVSSuggestionsViewControllerDelegate.h>
#import <SiriViewService/SVSTranscriptStackViewControllerDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/AFUIStateMachineDelegate.h>
#import <SiriViewService/SiriUIPresentation.h>

@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate, AFUIDebugControlling;
@class AFUIStateMachine, SVSSuggestionsViewController, SVSPagerViewController, UIAlertController, RadiosPreferences, UIViewController, SVSSirilandView, NSString;

@interface SVSSirilandViewController : UIViewController <AFUIDebugControllerDelegate, SVSPagerViewControllerDelegate, SVSSirilandViewDelegate, SVSTranscriptStackViewControllerDataSource, SVSSuggestionsViewControllerDelegate, SVSTranscriptStackViewControllerDelegate, RadiosPreferencesDelegate, AFUIStateMachineDelegate, SiriUIPresentation> {

	char _needsUpdatedUtterances;
	AFUIStateMachine* _stateMachine;
	char _userInteractionDidOccurSinceActivation;
	int _currentRequestSource;
	char _passcodeUnlockViewIsShowing;
	double _passcodeUnlockViewStartShowingTime;
	char _emergencyCallViewIsShowing;
	double _emergencyCallViewStartShowingTime;
	char _skipCheckForGuideUpdate;
	char _presentedPreviousConversationFromBreadcrumb;
	id<SiriUIPresentationDataSource> _dataSource;
	id<SiriUIPresentationDelegate> _delegate;
	SVSSuggestionsViewController* _siriUnavailableViewController;
	SVSPagerViewController* _pagerViewController;
	id<AFUIDebugControlling> _debugController;
	UIAlertController* _debugAlertController;
	RadiosPreferences* _radioPreferences;
	UIViewController* _presentedViewControllerForDebugController;
	double _lastPresentationTime;

}

@property (nonatomic,retain) SVSSirilandView * view; 
@property (getter=_siriUnavailableViewController,nonatomic,readonly) SVSSuggestionsViewController * siriUnavailableViewController;              //@synthesize siriUnavailableViewController=_siriUnavailableViewController - In the implementation block
@property (getter=_pagerViewController,nonatomic,readonly) SVSPagerViewController * pagerViewController;                                        //@synthesize pagerViewController=_pagerViewController - In the implementation block
@property (nonatomic,retain) id<AFUIDebugControlling> debugController;                                                                          //@synthesize debugController=_debugController - In the implementation block
@property (assign,nonatomic) double lastPresentationTime;                                                                                       //@synthesize lastPresentationTime=_lastPresentationTime - In the implementation block
@property (getter=_debugAlertController,nonatomic,retain) UIAlertController * debugAlertController;                                             //@synthesize debugAlertController=_debugAlertController - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;                                                                              //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewControllerForDebugController;                                               //@synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUIPresentationDataSource> dataSource;                                                                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIPresentationDelegate> delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(void)suggestionsViewDidShowSuggestions:(id)arg1 ;
-(CGRect)statusBarFrameForSuggestionsViewController:(id)arg1 ;
-(float)statusViewHeightForSuggestionsViewController:(id)arg1 ;
-(void)siriDidTransitionFromState:(int)arg1 event:(int)arg2 ;
-(void)statusBarFrameDidChange;
-(void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2 ;
-(void)siriRequestWillStart;
-(void)changeUtterance:(id)arg1 ;
-(void)showSpeechAlternatives:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4 ;
-(id)_createTranscriptStackViewController;
-(void)_handleDidShowEmergencyCallView:(id)arg1 ;
-(void)_handleWillLeaveEmergencyCallView:(id)arg1 ;
-(id)_siriUnavailableViewController;
-(id)_pagerViewController;
-(void)_updateSiriAvailability:(unsigned)arg1 animated:(char)arg2 ;
-(void)siriDidFinishTest:(id)arg1 ;
-(id)_previousConversation;
-(id)_previousTranscriptStackViewController;
-(id)_activeTranscriptStackViewController;
-(id)_activeConversation;
-(id)_conversationIdentifiers;
-(id)_identifierOfPreviousConversation;
-(id)_transcriptStackViewControllers;
-(id)conversationForTranscriptStackViewController:(id)arg1 ;
-(void)_speakText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_isUsingBuiltInSpeaker;
-(void)_speakText:(id)arg1 ;
-(void)_checkForGuideUpdatesIfNecessary;
-(id)_transcriptStackViewControllerForConversation:(id)arg1 ;
-(id)_freshTranscriptStackViewController;
-(void)_cancelRequest;
-(id)_guideCheckSupportedFeatures;
-(void)_presentRadarComposeController;
-(char)_shouldEnableIdleTimerForRequestSource:(int)arg1 andAVRecordRoute:(id)arg2 ;
-(void)_hideAcousticIDSpinner;
-(id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2 ;
-(void)_updateConversationAvailability:(unsigned)arg1 ;
-(id)_topTranscriptViewController;
-(void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3 ;
-(void)pagerViewControllerDidChangeTransitionState:(id)arg1 ;
-(CGRect)statusBarFrameForSirilandView:(id)arg1 ;
-(int)siriStateForTranscriptStackViewController:(id)arg1 ;
-(id)domainObjectStoreForTranscriptStackViewController:(id)arg1 ;
-(id)siriEnabledAppListForTranscriptStackViewController:(id)arg1 ;
-(float)contentWidthForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewControllerWillEnterSiriland:(id)arg1 ;
-(void)transcriptStackViewControllerDidExitSiriland:(id)arg1 ;
-(CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1 ;
-(int)initialDisplayTypeForTranscriptStackViewController:(id)arg1 ;
-(char)transcriptStackViewControllerWillShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewControllerDidShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewControllerWillBeginEditing:(id)arg1 ;
-(void)transcriptStackViewControllerDidEndEditing:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelRequestForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopSpeakingForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(char)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(char)arg2 ;
-(void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5 ;
-(void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2 ;
-(id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2 ;
-(unsigned)deviceLockStateForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(int)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2 ;
-(void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2 ;
-(void)startNewConversation;
-(void)siriWillHidePasscodeUnlock;
-(id)configureOptionsForImminentRequest:(id)arg1 ;
-(double)idleTimerInterval;
-(char)shouldDismissForIdling;
-(void)siriNetworkAvailabilityDidChange;
-(void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3 ;
-(void)speechRecordingDidDetectSpeechStartpoint;
-(void)siriDidDetectMusic;
-(void)didReceiveDismissalAction:(/*^block*/id)arg1 ;
-(char)supportsTextInput;
-(void)siriWillStartTest:(id)arg1 ;
-(id)_itemInPreviousConversationAtIndexPath:(id)arg1 ;
-(id)_itemInCurrentConversationAtIndexPath:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(char)arg2 ;
-(void)transcriptStackViewControllerPulseHelpButton:(id)arg1 ;
-(void)_requestUpdatedSuggestionsIfNecessary;
-(id<AFUIDebugControlling>)debugController;
-(void)setDebugController:(id<AFUIDebugControlling>)arg1 ;
-(double)lastPresentationTime;
-(void)setLastPresentationTime:(double)arg1 ;
-(id)_debugAlertController;
-(void)setDebugAlertController:(UIAlertController *)arg1 ;
-(void)setPresentedViewControllerForDebugController:(UIViewController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<SiriUIPresentationDataSource>)arg1 ;
-(void)setDelegate:(id<SiriUIPresentationDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SiriUIPresentationDataSource>)dataSource;
-(id<SiriUIPresentationDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(int)_state;
-(id)viewController;
-(void)viewDidLoad;
-(void)acousticIDRequestDidFinishWithSuccess:(char)arg1 ;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4 ;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)airplaneModeChanged;
-(RadiosPreferences *)radioPreferences;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(void)siriWillActivateFromSource:(int)arg1 ;
-(void)siriDidDeactivate;
-(void)siriDidActivateFromSource:(int)arg1 ;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(char)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)userInteractionDidOccur;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)siriWillShowPasscodeUnlock;
-(id)_stateMachine;
-(void)_performTransitionForEvent:(int)arg1 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(int)arg2 forEvent:(int)arg3 ;
-(id)stateMachine:(id)arg1 descriptionForEvent:(int)arg2 ;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(UIViewController *)presentedViewControllerForDebugController;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2 ;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2 ;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 openURL:(id)arg2 ;
-(id)requestContext;
@end

