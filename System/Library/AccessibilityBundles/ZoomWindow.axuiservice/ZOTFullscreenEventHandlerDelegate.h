/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZOTFullscreenEventHandlerDelegate <NSObject>
@required
-(void)disableSleepTimer:(char)arg1;
-(void)resetEventQueue;
-(void)postHandCancelWithSenderID:(unsigned long long)arg1;
-(void)dispatchEventToSystem:(id)arg1;
-(void)dispatchEntireEventQueue;
-(void)sendCancelEventToAppDirectlyWithSenderID:(unsigned long long)arg1;

@end

