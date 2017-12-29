/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, NSLocale, NSTimeZone, NSDate;

@interface _NSAutoCalendar : NSCalendar {

	NSCalendar* cal;
	NSLocale* changedLocale;
	NSTimeZone* changedTimeZone;
	unsigned changedFirstWeekday;
	unsigned changedMinimumDaysinFirstWeek;
	NSDate* changedGregorianStartDate;

}
+(char)supportsSecureCoding;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned)arg1 ;
-(char)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned)arg3 afterDate:(id)arg4 ;
-(char)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)_init;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setLocale:(id)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)timeZone;
-(id)locale;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(char)rangeOfUnit:(unsigned)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(void)_update:(id)arg1 ;
-(unsigned)firstWeekday;
-(unsigned)minimumDaysInFirstWeek;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(NSRange)rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned)arg1 ;
-(unsigned)ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(void)setFirstWeekday:(unsigned)arg1 ;
@end

