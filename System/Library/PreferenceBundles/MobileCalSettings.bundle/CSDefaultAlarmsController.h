/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSNumber;

@interface CSDefaultAlarmsController : PSListController {

	NSNumber* _defaultAllDayAlarmOffset;
	NSNumber* _defaultTimedAlarmOffset;

}
-(void)setDefaultAlarmOffset:(id)arg1 specifier:(id)arg2 ;
-(id)defaultAlarmOffsetForSpecifier:(id)arg1 ;
-(id)_alarmValuesForAllDay:(char)arg1 ;
-(id)_alarmTitlesForAllDay:(char)arg1 shortened:(char)arg2 ;
-(void)_setEnableTravelAdvisoriesForAutomaticBehavior:(id)arg1 specifier:(id)arg2 ;
-(id)_enableTravelAdvisoriesForAutomaticBehavior:(id)arg1 ;
-(id)_defaultBirthdayAlarmOffset;
-(id)_defaultTimedAlarmOffset;
-(id)_defaultAllDayAlarmOffset;
-(id)specifiers;
@end
