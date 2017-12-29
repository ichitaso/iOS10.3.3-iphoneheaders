/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HOCharacteristicEventOptionItem.h>

@protocol HFCharacteristicValueSource;
@class HMCharacteristic;

@interface HOProgrammableSwitchEventOptionItem : HOCharacteristicEventOptionItem {

	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * characteristic; 
+(id)_buildOutTriggerEditorOptionsForCharacteristic:(id)arg1 triggerValue:(id)arg2 latestResults:(id)arg3 ;
+(id)_shortformTitleForLatestResults:(id)arg1 ;
+(id)_sectionTitleForCharacteristic:(id)arg1 latestResults:(id)arg2 ;
+(id)_triggerBuilderContextAwareTitleForCharacteristic:(id)arg1 latestResults:(id)arg2 ;
+(id)_longformTitleForCharacteristic:(id)arg1 latestResults:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 triggerValue:(id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 valueSource:(id)arg3 ;
-(HMCharacteristic *)characteristic;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
@end
