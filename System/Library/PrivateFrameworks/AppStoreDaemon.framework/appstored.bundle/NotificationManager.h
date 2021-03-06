/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@class NSMutableDictionary;

@interface NotificationManager : NSObject {

	NSMutableDictionary* _distributedNotificationHandlers;
	NSMutableDictionary* _notificationHandlers;
	char _running;

}
+(id)sharedInstance;
-(void)registerDistributedNotification:(CFStringRef)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)registerNotification:(CFStringRef)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationEventHandler;
-(void)_registerDistributedNotificationEventHandler;
-(id)init;
-(void)start;
@end

