/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDTimePeriod.h>

@protocol WDTimePeriod <NSObject>
@required
-(id)startDate;
-(id)endDate;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface WDTimePeriod : NSObject <WDTimePeriod, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timePeriodWithSample:(id)arg1 ;
+(id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)sleep_titleString;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
