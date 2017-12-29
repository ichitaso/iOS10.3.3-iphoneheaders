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

@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
+(void)setAbbreviationDictionary:(id)arg1 ;
+(id)timeZoneWithName:(id)arg1 data:(id)arg2 ;
+(id)abbreviationDictionary;
+(void)resetSystemTimeZone;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)timeZoneForSecondsFromGMT:(int)arg1 ;
+(id)defaultTimeZone;
+(id)localTimeZone;
+(id)timeZoneWithAbbreviation:(id)arg1 ;
+(id)systemTimeZone;
+(id)timeZoneWithName:(id)arg1 ;
+(void)setDefaultTimeZone:(id)arg1 ;
+(id)knownTimeZoneNames;
+(id)timeZoneDataVersion;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long)_cfTypeID;
-(char)isNSTimeZone__;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithName:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(int)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviation;
-(char)isEqualToTimeZone:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(char)isDaylightSavingTimeForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)localizedName:(int)arg1 locale:(id)arg2 ;
-(char)isDaylightSavingTime;
-(int)secondsFromGMT;
-(id)nextDaylightSavingTimeTransition;
-(double)daylightSavingTimeOffset;
@end

