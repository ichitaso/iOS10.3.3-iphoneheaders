/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSMS/MobileSMS-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CKCoreChatControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CKChatControllerDelegate.h>
#import <libobjc.A.dylib/CKComposeChatControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserViewControllerStoreSendDelegate.h>

@protocol NSCoding;
@class CKConversation, NSMutableArray, CKConversationListController, CKCoreChatController, CKNavigationController, NSURL, NSString, CKViewController, UIViewController, NSSet;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate> {

	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	/*^block*/id _alertViewHandler;
	unsigned _attachmentPreviewQosClass;
	id<NSCoding> _autosaveIdentifier;
	CKConversationListController* _conversationListController;
	CKCoreChatController* _chatController;
	CKCoreChatController* _composeChatController;
	CKNavigationController* _conversationListNavigationController;
	CKNavigationController* _chatNavigationController;
	CKNavigationController* _composeChatNavigationController;
	NSURL* _deferredMessagesStoreLaunchURL;
	NSString* _deferredMessagesStoreLaunchURLSourceApplication;
	CKViewController* _blankViewController;
	UIViewController* _statusBarStyleViewController;

}

@property (nonatomic,retain) CKConversationListController * conversationListController;                  //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * chatController;                                      //@synthesize chatController=_chatController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * composeChatController;                               //@synthesize composeChatController=_composeChatController - In the implementation block
@property (nonatomic,retain) CKConversation * currentConversation;                                       //@synthesize currentConversation=_currentConversation - In the implementation block
@property (nonatomic,retain) CKNavigationController * conversationListNavigationController;              //@synthesize conversationListNavigationController=_conversationListNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * chatNavigationController;                          //@synthesize chatNavigationController=_chatNavigationController - In the implementation block
@property (nonatomic,retain) CKNavigationController * composeChatNavigationController;                   //@synthesize composeChatNavigationController=_composeChatNavigationController - In the implementation block
@property (nonatomic,retain) CKViewController * blankViewController;                                     //@synthesize blankViewController=_blankViewController - In the implementation block
@property (nonatomic,retain) id<NSCoding> autosaveIdentifier;                                            //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                                          //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (nonatomic,retain) UIViewController * statusBarStyleViewController;                            //@synthesize statusBarStyleViewController=_statusBarStyleViewController - In the implementation block
@property (nonatomic,readonly) NSSet * alertSuppressionContexts; 
@property (nonatomic,readonly) char isShowingConversationListController; 
@property (nonatomic,copy) NSURL * deferredMessagesStoreLaunchURL;                                       //@synthesize deferredMessagesStoreLaunchURL=_deferredMessagesStoreLaunchURL - In the implementation block
@property (nonatomic,copy) NSString * deferredMessagesStoreLaunchURLSourceApplication;                   //@synthesize deferredMessagesStoreLaunchURLSourceApplication=_deferredMessagesStoreLaunchURLSourceApplication - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKViewController *)blankViewController;
-(void)setBlankViewController:(CKViewController *)arg1 ;
-(void)_hideConversationListForIPadPPTTest;
-(void)showConversationList:(char)arg1 ;
-(id)ppt_chatController;
-(CKConversationListController *)conversationListController;
-(void)performSearchForQuery:(id)arg1 ;
-(void)setAlertViewHandler:(id)arg1 ;
-(CKNavigationController *)conversationListNavigationController;
-(char)isShowingChatControllerWithUnsentText;
-(void)showConversationAndMessageForSearchURL:(id)arg1 ;
-(void)setDeferredMessagesStoreLaunchURL:(NSURL *)arg1 ;
-(void)setDeferredMessagesStoreLaunchURLSourceApplication:(NSString *)arg1 ;
-(char)currentCompositionHasContent;
-(char)isShowingDirtyComposeModalView;
-(char)resumeToConversation:(id)arg1 ;
-(char)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2 ;
-(char)isShowingBlankChatController;
-(CKNavigationController *)chatNavigationController;
-(void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)cancelNewMessageComposition;
-(char)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1 ;
-(char)isShowingConversationListController;
-(id)alertViewHandler;
-(void)_conversationLeft:(id)arg1 ;
-(void)_chatRegistryDidLoad:(id)arg1 ;
-(void)_appStateChange:(id)arg1 ;
-(void)keyCommandCompose:(id)arg1 ;
-(void)keyCommandChangeConversation:(id)arg1 ;
-(void)_setIsShowingNoSelectionUI:(char)arg1 ;
-(void)_updateAlertSuppressionContext;
-(void)_pruneConversationCache;
-(NSURL *)deferredMessagesStoreLaunchURL;
-(void)_showStoreForDeferredLaunchURL;
-(void)setComposeChatController:(CKCoreChatController *)arg1 ;
-(void)setComposeChatNavigationController:(CKNavigationController *)arg1 ;
-(CKNavigationController *)composeChatNavigationController;
-(void)setCurrentConversation:(CKConversation *)arg1 ;
-(void)setChatController:(CKCoreChatController *)arg1 ;
-(void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(char)arg2 ;
-(void)_addConversationToCache:(id)arg1 ;
-(char)_canDumpConversationFromCache:(id)arg1 ;
-(void)_prepareToDumpCachedConversation:(id)arg1 ;
-(char)_isShowingFullscreenController;
-(char)_isShowingModalChatController;
-(char)_isShowingFullScreenAppViewController;
-(void)__updateAlertSuppressionContext;
-(void)_checkPushToTranscriptTimingWithStartTime:(double)arg1 ;
-(void)showConversation:(id)arg1 animate:(char)arg2 keepAllCurrentlyLoadedMessages:(char)arg3 ;
-(void)showConversation:(id)arg1 animate:(char)arg2 forceToTranscript:(char)arg3 keepAllCurrentlyLoadedMessages:(char)arg4 ;
-(NSString *)deferredMessagesStoreLaunchURLSourceApplication;
-(void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)_setEntryViewHidden:(char)arg1 ;
-(void)_popToConversationListAndPerformBlockAnimated:(char)arg1 block:(/*^block*/id)arg2 ;
-(void)setConversationListController:(CKConversationListController *)arg1 ;
-(void)setConversationListNavigationController:(CKNavigationController *)arg1 ;
-(void)setChatNavigationController:(CKNavigationController *)arg1 ;
-(id)init;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(char)becomeFirstResponder;
-(char)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)dismiss;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(char)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1 ;
-(void)setAutosaveIdentifier:(id<NSCoding>)arg1 ;
-(id<NSCoding>)autosaveIdentifier;
-(void)parentControllerDidResume:(char)arg1 animating:(char)arg2 ;
-(void)parentControllerDidBecomeActive;
-(void)prepareForSuspend;
-(UIViewController *)statusBarStyleViewController;
-(void)performResumeDeferredSetup;
-(void)startEditingPayload:(id)arg1 ;
-(char)isAnimatingMessageSend;
-(void)setLocalUserIsTyping:(char)arg1 ;
-(void)chatController:(id)arg1 forwardComposition:(id)arg2 ;
-(id)dragControllerTranscriptDelegate;
-(void)_chatItemsDidChange:(id)arg1 ;
-(CKConversation *)currentConversation;
-(void)showConversation:(id)arg1 animate:(char)arg2 ;
-(CKCoreChatController *)chatController;
-(char)isShowingChatController;
-(CKCoreChatController *)composeChatController;
-(void)conversationListWillBeginEditing;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(char)arg3 ;
-(char)isComposingMessage;
-(void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(char)arg3 ;
-(void)prepareForResume;
-(void)composeChatControllerDidCancelComposition:(id)arg1 ;
-(char)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(char)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1 ;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(void)requestPresentationStyleExpanded:(char)arg1 ;
-(void)commitSticker:(id)arg1 ;
-(void)dismissAndReloadInputViews:(char)arg1 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(void)setStatusBarStyleViewController:(UIViewController *)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(char)arg2 ;
-(void)commitPayload:(id)arg1 ;
-(void)dismissToKeyboard:(char)arg1 ;
-(void)setEntryViewHidden:(char)arg1 ;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg1 ;
-(NSSet *)alertSuppressionContexts;
@end

