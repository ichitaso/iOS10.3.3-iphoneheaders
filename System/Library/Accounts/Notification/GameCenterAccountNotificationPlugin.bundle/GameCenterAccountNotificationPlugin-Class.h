/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Notification/GameCenterAccountNotificationPlugin.bundle/GameCenterAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface GameCenterAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_notifyIDSProxyOfAccount:(id)arg1 store:(id)arg2 withCommand:(id)arg3 ;
-(id)_saveOptionsForProxiedDeviceAuth;
-(void)_showRedirectToBridgeAlertForAccount:(id)arg1 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

