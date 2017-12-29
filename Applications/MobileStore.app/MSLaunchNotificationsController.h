/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileStore.app/MobileStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext, AAUIFamilySetupPrompter, UIViewController, NSOperationQueue;

@interface MSLaunchNotificationsController : NSObject {

	SKUIClientContext* _clientContext;
	AAUIFamilySetupPrompter* _familySetupPrompter;
	UIViewController* _parentViewController;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)checkForNotifications;
-(char)_hasDisplayedFamilySetup;
-(void)_showFamilySetupPrompt;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
@end

