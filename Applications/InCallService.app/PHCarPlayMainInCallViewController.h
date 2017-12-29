/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <InCallService/MPCarPlayPhoneCallGalleryViewDelegate.h>
#import <InCallService/PHCarPlayHardPauseButtonDelegate.h>
#import <InCallService/PHCarPlayInCallButtonsViewDelegate.h>

@protocol MPCarPlayInCallViewControllerDelegate;
@class TUReplyWithMessageStore, NSArray, TUCall, UIView, PHCarPlayPhoneCallGalleryView, PHCarPlayInCallButtonsView, PHCarPlayInCallHardPauseButton, NSTimer, NSString;

@interface PHCarPlayMainInCallViewController : UIViewController <MPCarPlayPhoneCallGalleryViewDelegate, PHCarPlayHardPauseButtonDelegate, PHCarPlayInCallButtonsViewDelegate> {

	TUReplyWithMessageStore* _replyWithMessageStore;
	unsigned short _currentMode;
	id<MPCarPlayInCallViewControllerDelegate> _delegate;
	NSArray* _primaryPhoneCalls;
	NSArray* _conferenceParticipants;
	TUCall* _incomingPhoneCall;
	UIView* _flippyView;
	PHCarPlayPhoneCallGalleryView* _galleryView;
	PHCarPlayInCallButtonsView* _buttonsView;
	PHCarPlayInCallHardPauseButton* _hardPauseButton;
	NSTimer* _viewUpdateClockTickTimer;
	TUCall* _callToDecline;
	TUCall* _failedCall;

}

@property (copy) NSArray * primaryPhoneCalls;                                       //@synthesize primaryPhoneCalls=_primaryPhoneCalls - In the implementation block
@property (copy) NSArray * conferenceParticipants;                                  //@synthesize conferenceParticipants=_conferenceParticipants - In the implementation block
@property (retain) TUCall * incomingPhoneCall;                                      //@synthesize incomingPhoneCall=_incomingPhoneCall - In the implementation block
@property (retain) UIView * flippyView;                                             //@synthesize flippyView=_flippyView - In the implementation block
@property (retain) PHCarPlayPhoneCallGalleryView * galleryView;                     //@synthesize galleryView=_galleryView - In the implementation block
@property (retain) PHCarPlayInCallButtonsView * buttonsView;                        //@synthesize buttonsView=_buttonsView - In the implementation block
@property (retain) PHCarPlayInCallHardPauseButton * hardPauseButton;                //@synthesize hardPauseButton=_hardPauseButton - In the implementation block
@property (retain) NSTimer * viewUpdateClockTickTimer;                              //@synthesize viewUpdateClockTickTimer=_viewUpdateClockTickTimer - In the implementation block
@property (retain) TUCall * callToDecline;                                          //@synthesize callToDecline=_callToDecline - In the implementation block
@property (assign) unsigned short currentMode;                                      //@synthesize currentMode=_currentMode - In the implementation block
@property (retain) TUCall * failedCall;                                             //@synthesize failedCall=_failedCall - In the implementation block
@property (assign) id<MPCarPlayInCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char isDismissable; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHCarPlayPhoneCallGalleryView *)galleryView;
-(void)setGalleryView:(PHCarPlayPhoneCallGalleryView *)arg1 ;
-(char)isSpringBoardPasscodeLocked;
-(void)setPrimaryPhoneCalls:(id)arg1 conferencePhoneCalls:(id)arg2 incomingPhoneCall:(id)arg3 ;
-(char)isDismissable;
-(void)muteStateChangedNotification:(id)arg1 ;
-(void)hardPauseDigitsStateChangedNotification:(id)arg1 ;
-(void)callStateChangedNotification:(id)arg1 ;
-(void)setFlippyView:(UIView *)arg1 ;
-(UIView *)flippyView;
-(void)setButtonsView:(PHCarPlayInCallButtonsView *)arg1 ;
-(void)setHardPauseButton:(PHCarPlayInCallHardPauseButton *)arg1 ;
-(PHCarPlayInCallHardPauseButton *)hardPauseButton;
-(NSTimer *)viewUpdateClockTickTimer;
-(void)setViewUpdateClockTickTimer:(NSTimer *)arg1 ;
-(void)viewUpdateClockTickTimerFired:(id)arg1 ;
-(NSArray *)primaryPhoneCalls;
-(NSArray *)conferenceParticipants;
-(TUCall *)incomingPhoneCall;
-(id)__sanitizedPrimaryPhoneCallOrdering:(id)arg1 ;
-(void)setPrimaryPhoneCalls:(NSArray *)arg1 ;
-(void)setConferenceParticipants:(NSArray *)arg1 ;
-(void)setIncomingPhoneCall:(TUCall *)arg1 ;
-(char)currentCallStateWarrantsCallWaitingMode;
-(void)updateButtonsViewState;
-(void)setFailedCall:(TUCall *)arg1 ;
-(TUCall *)failedCall;
-(TUCall *)callToDecline;
-(char)isKeypadAllowed;
-(char)canSendMessageToCall:(id)arg1 ;
-(void)answerIncomingCallWithBehavior:(int)arg1 ;
-(void)setCallToDecline:(TUCall *)arg1 ;
-(id)replyWithMessageStore;
-(void)handleAlertControllerSendMessageResponse:(id)arg1 ;
-(void)_sendMessageResponse:(id)arg1 toCall:(id)arg2 ;
-(char)areIncomingCallOptionsAllowed;
-(void)updateHardPauseButtonState;
-(id)callForHardPauseState;
-(id)primaryPhoneCallsForGalleryView:(id)arg1 ;
-(id)conferenceParticipantCallsForPhoneCall:(id)arg1 ;
-(id)allConferenceParticipantCalls;
-(id)representativePhoneCallForConferenceForGalleryView:(id)arg1 ;
-(void)hardPauseButtonDidChangeVisibility:(id)arg1 ;
-(void)hardPauseButtonDidSendHardPauseDigits:(id)arg1 ;
-(void)inCallButtonWasTapped:(id)arg1 ;
-(char)isMergeCallsAllowed;
-(char)isSwapCallsAllowed;
-(char)isKeypadEnabled;
-(char)isHoldEnabled;
-(char)canSendMessage;
-(id)currentActivePhoneCall;
-(void)setDelegate:(id<MPCarPlayInCallViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPCarPlayInCallViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(unsigned short)currentMode;
-(void)setCurrentMode:(unsigned short)arg1 ;
-(char)isAddCallAllowed;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
-(PHCarPlayInCallButtonsView *)buttonsView;
@end

