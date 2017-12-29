/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSString * string; 
+(void)_setAttributedDictionaryClass:(Class)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(unsigned long)_cfTypeID;
-(id)attributedSubstringFromRange:(NSRange)arg1 replacingCharactersInRanges:(const NSRange*)arg2 numberOfRanges:(int)arg3 withString:(id)arg4 ;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_createAttributedSubstringWithRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(Class)classForCoder;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)enumerateAttributesInRange:(NSRange)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(char)isEqualToAttributedString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
@end

