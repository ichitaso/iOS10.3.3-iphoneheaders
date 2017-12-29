/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDDataProviderValue.h>

@class HKQuantity, NSDate, NSString;

@interface WDGenericQuantityDataProviderCurrentValue : NSObject <WDDataProviderValue> {

	HKQuantity* _quantity;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)attributedStringWithDataUnit:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 ;
-(id)contextualDescriptionWithDateCache:(id)arg1 ;
-(id)initWithQuantity:(id)arg1 ;
-(id)stringWithDataUnit:(id)arg1 unitController:(id)arg2 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

