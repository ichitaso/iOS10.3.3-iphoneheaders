/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FindMyFriendsNotificationServiceExtension.appex/FindMyFriendsNotificationServiceExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationServiceExtension.h>

@class FMSynchronizer, UNMutableNotificationContent;

@interface NotificationHandler : UNNotificationServiceExtension {

	FMSynchronizer* _mapSynchronizer;
	/*^block*/id _contentHandler;
	UNMutableNotificationContent* _bestAttemptContent;

}

@property (nonatomic,retain) FMSynchronizer * mapSynchronizer;                               //@synthesize mapSynchronizer=_mapSynchronizer - In the implementation block
@property (nonatomic,copy) id contentHandler;                                                //@synthesize contentHandler=_contentHandler - In the implementation block
@property (nonatomic,retain) UNMutableNotificationContent * bestAttemptContent;              //@synthesize bestAttemptContent=_bestAttemptContent - In the implementation block
-(void)setContentHandler:(id)arg1 ;
-(void)setBestAttemptContent:(UNMutableNotificationContent *)arg1 ;
-(UNMutableNotificationContent *)bestAttemptContent;
-(id)snapshotDataForLocation:(id)arg1 isFenceLocation:(char)arg2 ;
-(id)snapshotDataForNoLocation;
-(id)snapshotDataForGrid;
-(id)contentHandler;
-(void)setMapSynchronizer:(FMSynchronizer *)arg1 ;
-(FMSynchronizer *)mapSynchronizer;
-(id)peopleIdentifiersForContact:(id)arg1 ;
-(void)didReceiveNotificationRequest:(id)arg1 withContentHandler:(/*^block*/id)arg2 ;
-(void)serviceExtensionTimeWillExpire;
@end

