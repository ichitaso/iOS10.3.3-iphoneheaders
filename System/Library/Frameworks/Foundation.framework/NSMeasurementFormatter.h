/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {

	void* _formatter;

}

@property (assign) unsigned unitOptions; 
@property (assign) int unitStyle; 
@property (copy) NSLocale * locale; 
@property (copy) NSNumberFormatter * numberFormatter; 
+(char)supportsSecureCoding;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(unsigned)unitOptions;
-(id)stringFromUnit:(id)arg1 ;
-(id)measurementFromString:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(int)unitStyle;
-(void)setUnitStyle:(int)arg1 ;
-(void)setUnitOptions:(unsigned)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)stringFromMeasurement:(id)arg1 ;
@end

