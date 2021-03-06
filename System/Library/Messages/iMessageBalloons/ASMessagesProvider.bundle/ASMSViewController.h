/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIViewController.h>
#import <ASMessagesProvider/ASMSApplicationDelegate.h>
#import <ASMessagesProvider/SKUIApplicationDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <ASMessagesProvider/ASNavigationItemProviding.h>
#import <libobjc.A.dylib/CKBrowserViewControllerProtocol.h>

@protocol CKBrowserViewControllerSendDelegate;
@class UIBarButtonItem, UIViewController, IMBalloonPlugin, IMBalloonPluginDataSource, NSString, CKBrowserDragManager, NSNumber, NSObject, ASMSApplicationController, ASMSSegmentedTabBarController, ASMSTabBarBuilder, SKUIURL;

@interface ASMSViewController : UIViewController <ASMSApplicationDelegate, SKUIApplicationDelegate, UIViewControllerTransitioningDelegate, ASNavigationItemProviding, CKBrowserViewControllerProtocol> {

	char _isIMessage;
	char _inExpandedPresentation;
	char _shouldResumeApplicationOnViewWillAppear;
	char _isVisible;
	char _appContextReady;
	NSNumber* _adamID;
	NSObject*<CKBrowserViewControllerSendDelegate> _sendDelegate;
	IMBalloonPlugin* _balloonPlugin;
	NSString* _conversationID;
	IMBalloonPluginDataSource* _balloonPluginDataSource;
	UIBarButtonItem* _messagesLeftBarButtonItem;
	UIBarButtonItem* _messagesRightBarButtonItem;
	UIViewController* _presentationViewController;
	ASMSApplicationController* _applicationController;
	ASMSSegmentedTabBarController* _rootViewController;
	ASMSTabBarBuilder* _tabBarBuilder;
	SKUIURL* _launchURL;

}

@property (nonatomic,retain) ASMSApplicationController * applicationController;                                           //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) ASMSSegmentedTabBarController * rootViewController;                                          //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) ASMSTabBarBuilder * tabBarBuilder;                                                           //@synthesize tabBarBuilder=_tabBarBuilder - In the implementation block
@property (assign,nonatomic) char shouldResumeApplicationOnViewWillAppear;                                                //@synthesize shouldResumeApplicationOnViewWillAppear=_shouldResumeApplicationOnViewWillAppear - In the implementation block
@property (assign,nonatomic) char isVisible;                                                                              //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) char appContextReady;                                                                        //@synthesize appContextReady=_appContextReady - In the implementation block
@property (nonatomic,retain) SKUIURL * launchURL;                                                                         //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) UIViewController * presentationViewController;                                               //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIBarButtonItem * messagesRightBarButtonItem;                                                //@synthesize messagesRightBarButtonItem=_messagesRightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * messagesLeftBarButtonItem;                                                 //@synthesize messagesLeftBarButtonItem=_messagesLeftBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate;                          //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin;                                                           //@synthesize balloonPlugin=_balloonPlugin - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource;                                         //@synthesize balloonPluginDataSource=_balloonPluginDataSource - In the implementation block
@property (assign,nonatomic) char isiMessage;                                                                             //@synthesize isIMessage=_isIMessage - In the implementation block
@property (assign,nonatomic) NSString * conversationID;                                                                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,readonly) char wantsDarkUI; 
@property (nonatomic,readonly) char wantsOpaqueUI; 
@property (nonatomic,readonly) char supportsQuickView; 
@property (nonatomic,readonly) char mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) int browserPresentationStyle; 
@property (nonatomic,readonly) char shouldShowChatChrome; 
@property (nonatomic,readonly) char inExpandedPresentation;                                                               //@synthesize inExpandedPresentation=_inExpandedPresentation - In the implementation block
@property (nonatomic,readonly) unsigned badgeValue; 
@property (nonatomic,readonly) CKBrowserDragManager * browserDragManager; 
@property (assign,nonatomic) int currentBrowserConsumer; 
@property (nonatomic,readonly) char canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID;                                                                           //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,readonly) int parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
+(void)load;
-(char)appContextReady;
-(void)_searchTapped:(id)arg1 ;
-(ASMSTabBarBuilder *)tabBarBuilder;
-(void)setIsVisible:(char)arg1 ;
-(UIBarButtonItem *)messagesRightBarButtonItem;
-(UIBarButtonItem *)messagesLeftBarButtonItem;
-(void)setShouldResumeApplicationOnViewWillAppear:(char)arg1 ;
-(void)_handleBackground;
-(void)_destroyApplicationController;
-(void)setAppContextReady:(char)arg1 ;
-(void)_notifyNativeViewControllersAppContextStateChange;
-(void)_createApplicationController;
-(void)_setupRootViewController;
-(char)shouldResumeApplicationOnViewWillAppear;
-(id)_formattedLaunchOptions;
-(void)_createTabBarItems;
-(void)_categoriesApplication:(id)arg1 willTransitionToSize:(CGSize)arg2 ;
-(void)_destroyRootViewController;
-(id)_newDefaultTabBarItemsWithClientContext:(id)arg1 style:(int)arg2 ;
-(void)setTabBarBuilder:(ASMSTabBarBuilder *)arg1 ;
-(void)_addViewController:(id)arg1 toContainingViewController:(id)arg2 ;
-(void)_shuffleTopLevelDocumentsWithCategoriesViewController:(id)arg1 categoriesNavigationController:(id)arg2 isCompact:(char)arg3 ;
-(void)dismissApplication:(id)arg1 ;
-(void)setMessagesLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setMessagesRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)dealloc;
-(ASMSSegmentedTabBarController *)rootViewController;
-(void)setRootViewController:(ASMSSegmentedTabBarController *)arg1 ;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(char)isVisible;
-(void)dismiss;
-(char)isLoaded;
-(void)setLaunchURL:(SKUIURL *)arg1 ;
-(SKUIURL *)launchURL;
-(ASMSApplicationController *)applicationController;
-(NSNumber *)adamID;
-(void)forceOrientationBackToSupportedOrientation;
-(void)application:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)application:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(id)application:(id)arg1 navigationControllerWithTabBarItem:(id)arg2 ;
-(void)applicationDidChangeClientContext:(id)arg1 ;
-(void)applicationDidDisplayFirstPage:(id)arg1 ;
-(UIViewController *)presentationViewController;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(void)setStoreLaunchURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)setSendDelegate:(NSObject*<CKBrowserViewControllerSendDelegate>)arg1 ;
-(IMBalloonPlugin *)balloonPlugin;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(char)isiMessage;
-(void)setIsiMessage:(char)arg1 ;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(char)wantsDarkUI;
-(char)wantsOpaqueUI;
-(char)supportsQuickView;
-(char)mayBeKeptInViewHierarchy;
-(int)browserPresentationStyle;
-(char)shouldShowChatChrome;
-(char)inExpandedPresentation;
-(void)setAdamID:(NSNumber *)arg1 ;
-(int)parentModalPresentationStyle;
-(id<UIViewControllerTransitioningDelegate>)parentTransitioningDelegate;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg1 ;
-(void)setApplicationController:(ASMSApplicationController *)arg1 ;
@end

