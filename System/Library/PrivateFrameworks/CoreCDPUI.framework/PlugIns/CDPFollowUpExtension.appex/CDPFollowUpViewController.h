/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:33 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/PlugIns/CDPFollowUpExtension.appex/CDPFollowUpExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFollowUpUI/FLExtensionViewController.h>
#import <CDPFollowUpExtension/CDPUIDelegate.h>

@class CDPStateController, CDPUIController, NSString;

@interface CDPFollowUpViewController : FLExtensionViewController <CDPUIDelegate> {

	CDPStateController* _stateController;
	CDPUIController* _uiController;
	/*^block*/id CDPUIReadyBlock;
	/*^block*/id CDPUIAlertReadyBlock;
	/*^block*/id CDPFollowUpReadyBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupContext;
-(void)_beginExtensionFlowWithAction:(id)arg1 ;
-(void)presentQueuedFullUI;
-(void)extensionReady;
-(void)presentQueuedAlertUI;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)_navController;
-(void)uiController:(id)arg1 didPresentRootViewController:(id)arg2 ;
-(void)uiController:(id)arg1 preparePresentationContext:(/*^block*/id)arg2 ;
-(void)uiController:(id)arg1 prepareAlertContext:(/*^block*/id)arg2 ;
-(id)_contextForPrimaryAccount;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
