/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKNumberFormatter.h>

@class NSString;

@interface WDTimePeriodNumberFormatter : NSObject <HKNumberFormatter> {

	char _shouldRoundToHours;

}

@property (assign,nonatomic) char shouldRoundToHours;               //@synthesize shouldRoundToHours=_shouldRoundToHours - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShouldRoundToHours:(char)arg1 ;
-(char)shouldRoundToHours;
-(char)returnsUnitWithValueForDisplay;
-(id)stringFromNumber:(id)arg1 dataUnit:(id)arg2 unitController:(id)arg3 ;
@end

