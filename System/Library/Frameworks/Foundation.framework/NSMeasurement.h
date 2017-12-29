/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {

	NSUnit* _unit;
	double _doubleValue;

}

@property (copy,readonly) NSUnit * unit; 
@property (readonly) double doubleValue; 
+(char)supportsSecureCoding;
-(id)measurementByConvertingToUnit:(id)arg1 ;
-(char)canBeConvertedToUnit:(id)arg1 ;
-(id)_performOperation:(int)arg1 withMeasurement:(id)arg2 ;
-(id)measurementByAddingMeasurement:(id)arg1 ;
-(id)measurementBySubtractingMeasurement:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDoubleValue:(double)arg1 unit:(id)arg2 ;
-(NSUnit *)unit;
@end
