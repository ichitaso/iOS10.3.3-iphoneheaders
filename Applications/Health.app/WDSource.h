/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKSource, HKDevice, NSString;

@interface WDSource : NSObject {

	HKSource* _source;
	HKDevice* _device;
	NSString* _name;

}

@property (nonatomic,readonly) HKSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) HKDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(id)initWithSource:(id)arg1 device:(id)arg2 ;
-(NSString *)name;
-(HKSource *)source;
-(HKDevice *)device;
@end

