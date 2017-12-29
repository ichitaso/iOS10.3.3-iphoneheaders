/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumberFormatter, NSLocale;

@interface NSUnitFormatter : NSFormatter <NSSecureCoding> {

	NSNumberFormatter* _numberFormatter;
	unsigned _unitOptions;
	int _unitStyle;
	UAMeasureFormatRef _formatter;
	UPluralRulesRef _prules;
	char _modified;
	NSLocale* _locale;

}

@property (copy) NSNumberFormatter * numberFormatter; 
@property (copy) NSLocale * locale; 
@property (assign) unsigned unitOptions; 
@property (assign) int unitStyle; 
+(char)supportsSecureCoding;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(unsigned)unitOptions;
-(int)_determineUnitsToFormat:(int*)arg1 fromMeasurement:(id)arg2 ;
-(id)stringForValue:(double)arg1 unit:(unsigned)arg2 ;
-(void)checkIfModified;
-(id)stringForValue1:(double)arg1 unit1:(unsigned)arg2 value2:(double)arg3 unit2:(unsigned)arg4 ;
-(id)unitStringFromValue:(double)arg1 unit:(unsigned)arg2 ;
-(id)stringFromUnit:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(int)unitStyle;
-(void)setUnitStyle:(int)arg1 ;
-(void)setUnitOptions:(unsigned)arg1 ;
-(NSNumberFormatter *)numberFormatter;
@end

