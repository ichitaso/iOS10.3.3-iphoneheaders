/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCalendar, NSTimeZone, NSDate;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) int era; 
@property (assign) int year; 
@property (assign) int month; 
@property (assign) int day; 
@property (assign) int hour; 
@property (assign) int minute; 
@property (assign) int second; 
@property (assign) int nanosecond; 
@property (assign) int weekday; 
@property (assign) int weekdayOrdinal; 
@property (assign) int quarter; 
@property (assign) int weekOfMonth; 
@property (assign) int weekOfYear; 
@property (assign) int yearForWeekOfYear; 
@property (getter=isLeapMonth) char leapMonth; 
@property (copy,readonly) NSDate * date; 
@property (getter=isValidDate,readonly) char validDate; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isLeapMonthSet;
-(char)isValidDate;
-(int)valueForComponent:(unsigned)arg1 ;
-(void)setValue:(int)arg1 forComponent:(unsigned)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDay:(int)arg1 ;
-(void)setHour:(int)arg1 ;
-(int)hour;
-(NSTimeZone *)timeZone;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(int)minute;
-(int)second;
-(int)era;
-(int)year;
-(int)month;
-(int)day;
-(int)weekOfMonth;
-(int)weekOfYear;
-(int)yearForWeekOfYear;
-(int)weekday;
-(int)weekdayOrdinal;
-(int)quarter;
-(int)week;
-(void)setEra:(int)arg1 ;
-(void)setYear:(int)arg1 ;
-(void)setYearForWeekOfYear:(int)arg1 ;
-(void)setMonth:(int)arg1 ;
-(void)setMinute:(int)arg1 ;
-(void)setSecond:(int)arg1 ;
-(void)setWeek:(int)arg1 ;
-(void)setWeekOfYear:(int)arg1 ;
-(void)setWeekOfMonth:(int)arg1 ;
-(void)setWeekday:(int)arg1 ;
-(void)setWeekdayOrdinal:(int)arg1 ;
-(void)setQuarter:(int)arg1 ;
-(char)isLeapMonth;
-(void)setLeapMonth:(char)arg1 ;
-(char)isValidDateInCalendar:(id)arg1 ;
-(int)nanosecond;
-(void)setNanosecond:(int)arg1 ;
@end

