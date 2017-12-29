/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSString, NSDate, NSTimeZone, NSCalendar, CLRegion, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (assign,nonatomic) int totalRepeatCount; 
@property (assign,nonatomic) int remainingRepeatCount; 
@property (assign,nonatomic) char hideAlertTitle; 
@property (assign,nonatomic) char allowSnooze; 
@property (assign,nonatomic) int soundType; 
@property (nonatomic,retain) NSNumber * audioVolume; 
@property (assign,nonatomic) char interruptAudioAndLockDevice; 
@property (assign,nonatomic) char resumeApplicationInBackground; 
@property (assign,nonatomic) char fireNotificationsWhenAppRunning; 
@property (assign,nonatomic) char showAlarmStatusBarItem; 
@property (nonatomic,copy) NSString * customLockSliderLabel; 
@property (nonatomic,copy) NSString * firedNotificationName; 
@property (nonatomic,copy) NSString * snoozedNotificationName; 
@property (assign,nonatomic) char isTransient; 
@property (nonatomic,copy) NSString * vibrationName; 
@property (assign,getter=isFromSnooze,nonatomic) char fromSnooze; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned repeatInterval; 
@property (nonatomic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,copy) CLRegion * region; 
@property (assign,nonatomic) char regionTriggersOnce; 
@property (nonatomic,copy) NSString * alertBody; 
@property (assign,nonatomic) char hasAction; 
@property (nonatomic,copy) NSString * alertAction; 
@property (nonatomic,copy) NSString * alertLaunchImage; 
@property (nonatomic,copy) NSString * alertTitle; 
@property (nonatomic,copy) NSString * soundName; 
@property (assign,nonatomic) int applicationIconBadgeNumber; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * category; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isTriggeredByDate;
-(char)isTriggeredByRegion;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(int)compareFireDates:(id)arg1 ;
-(void)clearNonSystemProperties;
-(void)validate;
@end

