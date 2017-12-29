/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDInteractiveChartDataFormatter.h>

@class NSNumber, NSNumberFormatter;

@interface WDInteractiveChartNumberFormatter : WDInteractiveChartDataFormatter {

	NSNumber* _value;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) NSNumber * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(id)formattedStringWithMajorFont:(id)arg1 minorFont:(id)arg2 unitController:(id)arg3 dataUnit:(id)arg4 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
@end

