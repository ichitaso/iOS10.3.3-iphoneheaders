/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDictionary;

@interface FBAQuestionValueToDisplayNameTransformer : NSValueTransformer {

	NSDictionary* _dictionary;

}

@property (copy) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(Class)transformedValueClass;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)transformedValue:(id)arg1 ;
@end

