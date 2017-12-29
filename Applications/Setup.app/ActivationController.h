/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <Setup/ActivationFailurePageDelegate.h>
#import <Setup/BuddyController.h>

@protocol ActivationControllerDelegate;
@class BuddyActivationEngine, RemoteUIController, NSMutableArray, RUIPage, NSURLSession, UILabel, UIActivityIndicatorView, NSTimer, ActivationFailurePage, NSURL, NSString;

@interface ActivationController : UIViewController <NSURLSessionDelegate, NSURLSessionDataDelegate, RemoteUIControllerDelegate, ActivationFailurePageDelegate, BuddyController> {

	BuddyActivationEngine* _engine;
	RemoteUIController* _remoteUIController;
	NSMutableArray* _objectModels;
	RUIPage* _loadingPage;
	NSURLSession* _activationURLSession;
	void* _otaAssertion;
	int _activationState;
	UILabel* _statusLabel;
	UILabel* _infoLabel;
	UIActivityIndicatorView* _spinner;
	char _displayTimerElapsed;
	char _cellNetworkTimerElapsed;
	char _nonSilentActivation;
	NSTimer* _displayTimer;
	NSTimer* _cellNetworkTimer;
	NSTimer* _ticketAcceptedTimer;
	NSTimer* _waitingForBasebandTimer;
	int _waitingForBasebandFailureCount;
	ActivationFailurePage* _activationFailurePage;
	char _connectionFailed;
	char _connectionOTA;
	NSURL* _agreeURL;
	NSURL* _disagreeURL;
	char _activationControllerDismissed;
	char _cdmaSelectionActivation;
	id<ActivationControllerDelegate> _delegate;
	NSURL* _activationURL;
	NSString* _contentType;

}

@property (assign,nonatomic,__weak) id<ActivationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * activationURL;                                         //@synthesize activationURL=_activationURL - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                          //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSURL * agreeURL;                                              //@synthesize agreeURL=_agreeURL - In the implementation block
@property (nonatomic,retain) NSURL * disagreeURL;                                           //@synthesize disagreeURL=_disagreeURL - In the implementation block
@property (nonatomic,readonly) char cdmaSelectionActivation;                                //@synthesize cdmaSelectionActivation=_cdmaSelectionActivation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isBricked;
+(char)controllerNeedsToRun;
-(void)startOver;
-(void)removeFromNavHierarchy;
-(char)cdmaSelectionActivation;
-(void)_activationStateChanged;
-(void)_releaseOTAAssertion;
-(void)_clearCellNetworkTimer;
-(void)_cellNetworkTimerTimeout;
-(void)_tryFetchCloudConfigNote:(id)arg1 ;
-(void)_stopWaitingForCellNetwork;
-(void)_fetchCloudConfig;
-(void)_skipPanesAccordingToCloudConfigurationDetails:(id)arg1 ;
-(void)_enterState:(int)arg1 ;
-(void)_startWaitingForCellNetwork;
-(void)_attemptDismiss;
-(void)_clearDisplayTimer;
-(void)_clearWaitingForBasebandTimer;
-(void)_clearTicketAcceptedTimer;
-(void)_sendAck;
-(void)_activateIfNecessary;
-(void)_checkActivationFailIfBricked:(char)arg1 ;
-(void)_displayTimerTimeout;
-(void)agreeToRemoteUIDialog;
-(void)disagreeToRemoteUIDialog;
-(void)tryAgainOnRemoteUIDialog;
-(void)_ticketAcceptedDidTimeout;
-(void)_handleActivationData:(id)arg1 responseHeaders:(id)arg2 baseURL:(id)arg3 ;
-(id)_carrierID;
-(void)_tryActivateWithRequestMutator:(/*^block*/id)arg1 ;
-(void)_waitingForBasebandTimeout;
-(void)_startActivation;
-(void)_checkBasebandStatusBeforeActivation;
-(void)_sanitizeSystemTime;
-(void)_systemTimeUpdated;
-(void)_dismissRemoteUI;
-(void)setAgreeURL:(NSURL *)arg1 ;
-(NSURL *)disagreeURL;
-(void)setDisagreeURL:(NSURL *)arg1 ;
-(void)activationFailurePagePressedRetry:(id)arg1 ;
-(void)activationFailurePagePressedWifi:(id)arg1 ;
-(void)activationFailurePagePopped:(id)arg1 ;
-(NSURL *)activationURL;
-(void)setActivationURL:(NSURL *)arg1 ;
-(id)init;
-(void)setDelegate:(id<ActivationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ActivationControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_cleanup;
-(NSURL *)agreeURL;
-(void)_updateStatusLabel;
-(void)back:(id)arg1 ;
-(void)_handleFailureWithError:(id)arg1 ;
-(void)_userAgreedToTCs:(char)arg1 ;
-(NSString *)contentType;
-(void)_activate;
-(void)setContentType:(NSString *)arg1 ;
-(char)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned*)arg3 ;
@end

