/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSMS.app/PlugIns/MessagesNotificationExtension.appex/MessagesNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesNotificationExtension/MessagesNotificationExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>
#import <libobjc.A.dylib/_UNNotificationContentExtensionLegacy.h>
#import <MessagesNotificationExtension/CKNotificationReplyViewControllerDelegate.h>
#import <MessagesNotificationExtension/CKNotificationAudioViewControllerDelegate.h>
#import <MessagesNotificationExtension/CKNotificationChatControllerDelegate.h>

@protocol _UNNotificationContentExtensionLegacyDelegate;
@class UIColor, CKNotificationChatController, CKNotificationReplyViewController, CKNotificationAudioViewController, UNNotification, CKOffscreenWindow, NSString;

@interface CKMessagesNotificationViewController : UIViewController <UNNotificationContentExtension, _UNNotificationContentExtensionLegacy, CKNotificationReplyViewControllerDelegate, CKNotificationAudioViewControllerDelegate, CKNotificationChatControllerDelegate> {

	id<_UNNotificationContentExtensionLegacyDelegate> legacyDelegate;
	CKNotificationChatController* _chatController;
	CKNotificationReplyViewController* _replyController;
	CKNotificationAudioViewController* _audioController;
	UNNotification* _notification;
	CKOffscreenWindow* _offscreenWindow;

}

@property (nonatomic,retain) CKNotificationChatController * chatController;                                        //@synthesize chatController=_chatController - In the implementation block
@property (nonatomic,retain) CKNotificationReplyViewController * replyController;                                  //@synthesize replyController=_replyController - In the implementation block
@property (nonatomic,retain) CKNotificationAudioViewController * audioController;                                  //@synthesize audioController=_audioController - In the implementation block
@property (nonatomic,retain) UNNotification * notification;                                                        //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) CKOffscreenWindow * offscreenWindow;                                                  //@synthesize offscreenWindow=_offscreenWindow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
@property (assign,nonatomic,__weak) id<_UNNotificationContentExtensionLegacyDelegate> legacyDelegate; 
+(void)connectIfNeeded;
+(void)initialize;
-(void)setChatController:(CKNotificationChatController *)arg1 ;
-(void)updateNotificationTitleFromConversation:(id)arg1 ;
-(void)setupAudioAccessoryViewForNotification:(id)arg1 ;
-(void)grabFocus;
-(void)setReplyController:(CKNotificationReplyViewController *)arg1 ;
-(CKNotificationReplyViewController *)replyController;
-(void)updateContentExtensionSize;
-(void)notificationAudioViewControllerDidStartPlaying;
-(void)notificationAudioViewControllerDidStopPlaying;
-(void)audioPlaybackForNotification:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CKOffscreenWindow *)offscreenWindow;
-(void)setOffscreenWindow:(CKOffscreenWindow *)arg1 ;
-(void)dealloc;
-(UNNotification *)notification;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setNotification:(UNNotification *)arg1 ;
-(void)_displayNameUpdatedNotification:(id)arg1 ;
-(CKNotificationChatController *)chatController;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(void)notificationReplyViewController:(id)arg1 compositionUpdated:(id)arg2 ;
-(void)notificationReplyViewController:(id)arg1 updatePreferredHeight:(float)arg2 ;
-(CKNotificationAudioViewController *)audioController;
-(void)setAudioController:(CKNotificationAudioViewController *)arg1 ;
-(void)notificationReplyViewController:(id)arg1 didSendComposition:(id)arg2 ;
-(void)notificationChatControllerSizeUpdated:(id)arg1 ;
-(void)didReceiveNotification:(id)arg1 ;
-(void)mediaPlay;
-(void)mediaPause;
-(id)audioAccessoryViewForNotification:(id)arg1 ;
-(id<_UNNotificationContentExtensionLegacyDelegate>)legacyDelegate;
-(void)setLegacyDelegate:(id<_UNNotificationContentExtensionLegacyDelegate>)arg1 ;
@end

