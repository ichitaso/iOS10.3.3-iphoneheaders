/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemAdornment.h>

@class NSString;

@interface PersonalizedItemPrioritizedStringAdornment : PersonalizedItemAdornment {

	NSString* _value;
	NSString* _locale;
	unsigned _priority;

}

@property (nonatomic,readonly) NSString * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * locale;              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) unsigned priority;              //@synthesize priority=_priority - In the implementation block
+(id)defaultAdornment;
+(id)adornmentWithString:(id)arg1 locale:(id)arg2 priority:(unsigned)arg3 ;
+(id)adornmentWithString:(id)arg1 priority:(unsigned)arg2 ;
-(id)combineAdornment:(id)arg1 ;
-(id)initWithString:(id)arg1 locale:(id)arg2 priority:(unsigned)arg3 ;
-(NSString *)value;
-(unsigned)priority;
-(NSString *)locale;
@end

