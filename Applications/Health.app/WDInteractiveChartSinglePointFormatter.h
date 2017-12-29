/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDInteractiveChartDataFormatter.h>

@class HKUnit;

@interface WDInteractiveChartSinglePointFormatter : WDInteractiveChartDataFormatter {

	char _prefixedUnit;
	HKUnit* _unit;
	double _value;

}

@property (assign,nonatomic) double value;                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                  //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) char prefixedUnit;              //@synthesize prefixedUnit=_prefixedUnit - In the implementation block
-(id)formattedStringWithMajorFont:(id)arg1 minorFont:(id)arg2 unitController:(id)arg3 dataUnit:(id)arg4 ;
-(char)prefixedUnit;
-(void)setPrefixedUnit:(char)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
@end

