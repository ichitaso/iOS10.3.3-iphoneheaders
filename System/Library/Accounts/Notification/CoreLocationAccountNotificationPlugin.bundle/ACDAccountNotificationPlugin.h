/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Notification/CoreLocationAccountNotificationPlugin.bundle/CoreLocationAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(char)canRemoveAccount:(id)arg1 inStore:(id)arg2;
-(char)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

