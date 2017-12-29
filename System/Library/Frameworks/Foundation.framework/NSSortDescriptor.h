/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;

}

@property (copy,readonly) NSString * key; 
@property (readonly) char ascending; 
@property (readonly) SEL selector; 
@property (readonly) id comparator; 
@property (retain,readonly) id reversedSortDescriptor; 
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_defaultSelectorName;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 selector:(SEL)arg3 ;
-(int)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 selector:(SEL)arg3 ;
-(id)_selectorName;
-(void)_setSelectorName:(id)arg1 ;
-(void)_disallowEvaluation;
-(id)comparator;
-(char)_isEqualToSortDescriptor:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)_setAscending:(char)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(id)reversedSortDescriptor;
-(void)allowEvaluation;
-(char)ascending;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 ;
@end

