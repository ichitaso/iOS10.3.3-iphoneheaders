/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter, NSNumberFormatter, NSDateComponentsFormatter;

@interface BSDateFormatterCache : NSObject {

	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSDateFormatter* _relativeDateFormatter;
	NSDateFormatter* _dayOfWeekMonthDayFormatter;
	NSDateFormatter* _multiLineDayOfWeekMonthDayFormatter;
	NSDateFormatter* _timeNoAMPMFormatter;
	NSDateFormatter* _longYMDHMSZFormatter;
	NSDateFormatter* _longYMDHMSZPosixLocaleFormatter;
	NSDateFormatter* _longYMDHMSNoSpaceFormatter;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _timerNumberFormatter;
	NSDateComponentsFormatter* _abbreviatedTimerFormatter;
	NSDateComponentsFormatter* _alarmSnoozeFormatter;

}
+(id)sharedInstance;
-(void)resetFormatters:(id)arg1 ;
-(void)_resetFormatters;
-(id)multiLineDayOfWeekMonthDayFormatForLocale:(id)arg1 ;
-(char)_shouldShowHoursForTimerDuration:(double)arg1 ;
-(id)formatNumberAsDecimal:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)arg1 ;
-(id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg1 ;
-(id)formatTimerDuration:(double)arg1 ;
-(id)formatAbbreviatedTimerDuration:(double)arg1 ;
-(id)formatAlarmSnoozeDuration:(double)arg1 ;
-(char)supportsMultiLineDayOfWeekMonthDayStyle;
-(id)init;
-(void)dealloc;
-(void)resetFormattersIfNecessary;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1 ;
-(id)formatDateAsTimeNoAMPM:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZWithDate:(id)arg1 ;
-(id)formatDateAsTimeStyle:(id)arg1 ;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg1 ;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsRelativeDateStyle:(id)arg1 ;
-(id)formatDateAsDayMonthYearStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)arg1 ;
-(id)formatDateAsDayOfWeek:(id)arg1 ;
@end
