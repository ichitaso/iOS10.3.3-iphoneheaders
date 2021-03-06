/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, _NSRefcountedPthreadMutex;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {

	NSCalendar* cal;
	_NSRefcountedPthreadMutex* _lock;
	char needsToCopy;

}
+(id)currentCalendar;
-(id)_initWithCalendar:(id)arg1 ;
-(void)_copyWrappedCalendar;
-(void)setMinimumDaysInFirstWeek:(unsigned)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned)arg1 ;
-(char)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned)arg3 afterDate:(id)arg4 ;
-(char)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(unsigned)hash;
-(id)_init;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)timeZone;
-(id)locale;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(char)rangeOfUnit:(unsigned)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned)firstWeekday;
-(unsigned)minimumDaysInFirstWeek;
-(NSRange)rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned)arg1 ;
-(unsigned)ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(void)setFirstWeekday:(unsigned)arg1 ;
@end

