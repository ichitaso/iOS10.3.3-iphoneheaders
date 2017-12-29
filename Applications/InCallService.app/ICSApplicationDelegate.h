/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/PHApplicationDelegate.h>

@class TUCall;

@interface ICSApplicationDelegate : PHApplicationDelegate {

	TUCall* _mostRecentlyDisconnectedCall;

}

@property (nonatomic,retain) TUCall * mostRecentlyDisconnectedCall;              //@synthesize mostRecentlyDisconnectedCall=_mostRecentlyDisconnectedCall - In the implementation block
-(void)addNotificationObservers;
-(char)isSOSCall:(id)arg1 ;
-(void)startSOSFlow;
-(char)openUserInterfaceURL:(id)arg1 ;
-(char)openDialRequest:(id)arg1 ;
-(TUCall *)mostRecentlyDisconnectedCall;
-(char)shouldActivateSpringBoardRemoteAlertForCall:(id)arg1 ;
-(void)activateSpringBoardRemoteAlertForCall:(id)arg1 dialRequest:(id)arg2 ;
-(void)audioCallStatusChanged:(id)arg1 ;
-(void)videoCallStatusChanged:(id)arg1 ;
-(void)setMostRecentlyDisconnectedCall:(TUCall *)arg1 ;
-(void)activateSpringBoardRemoteAlertForSOSCall;
-(id)springBoardRemoteAlertOptionsForCall:(id)arg1 dialRequest:(id)arg2 ;
-(id)springBoardRemoteAlertOptionsForSOSCall;
-(void)initiateCallForDialRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)shouldShowTTYAlertForDialRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
@end

