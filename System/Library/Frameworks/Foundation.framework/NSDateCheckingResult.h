/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone, NSString;

@interface NSDateCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDate* _date;
	NSTimeZone* _timeZone;
	double _duration;
	NSDate* _referenceDate;
	id _underlyingResult;
	char _timeIsSignificant;
	char _timeIsApproximate;
	char _timeIsPast;
	NSString* _leadingText;
	NSString* _trailingText;

}

@property (readonly) NSTimeZone * timeZone; 
@property (readonly) double duration; 
@property (readonly) NSDate * referenceDate; 
@property (readonly) void* underlyingResult; 
@property (readonly) char timeIsSignificant; 
@property (readonly) char timeIsApproximate; 
@property (readonly) char timeIsPast; 
+(char)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(int)arg1 ;
-(char)_adjustRangesWithOffset:(int)arg1 ;
-(id)leadingText;
-(id)trailingText;
-(void*)underlyingResult;
-(char)timeIsSignificant;
-(char)timeIsApproximate;
-(char)timeIsPast;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(char)arg7 timeIsApproximate:(char)arg8 timeIsPast:(char)arg9 leadingText:(id)arg10 trailingText:(id)arg11 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(char)arg7 timeIsApproximate:(char)arg8 timeIsPast:(char)arg9 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(char)arg7 timeIsApproximate:(char)arg8 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(id)date;
-(NSRange)range;
-(NSTimeZone *)timeZone;
-(unsigned long long)resultType;
-(NSDate *)referenceDate;
@end
