/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AccountAuthenticationDialog.app/AccountAuthenticationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountAuthenticationDialog/AccountAuthenticationDialog-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <AccountAuthenticationDialog/OOPAWebViewControllerDelegate.h>

@class UIWindow, NSXPCConnection, OOPAWebViewController, UINavigationController, NSDictionary, NSString;

@interface OOPADAppDelegate : UIResponder <UIApplicationDelegate, OOPAWebViewControllerDelegate> {

	NSXPCConnection* _connectionToDialogManager;
	OOPAWebViewController* _webViewController;
	UINavigationController* _navViewController;
	char _cachedSuccess;
	NSDictionary* _cachedResponse;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_remoteSheetDidEnd;
-(void)webViewController:(id)arg1 didFinishWithSuccess:(char)arg2 response:(id)arg3 ;
-(void)_connectToAuthenticationDialogManager;
-(id)_dialogManager;
-(void)_disconnectFromAuthenticationDialogManager;
-(UIWindow *)window;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)canShowAlerts;
-(void)setWindow:(UIWindow *)arg1 ;
@end
