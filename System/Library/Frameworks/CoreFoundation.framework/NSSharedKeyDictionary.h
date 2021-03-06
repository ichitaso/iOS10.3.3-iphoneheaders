/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSSharedKeySet, NSMutableDictionary;

@interface NSSharedKeyDictionary : NSMutableDictionary {

	NSSharedKeySet* _keyMap;
	unsigned _count;
	id* _values;
	/*function pointer*/void* _ifkIMP;
	NSMutableDictionary* _sideDic;
	unsigned long _mutations;

}
+(id)sharedKeyDictionaryWithKeySet:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithKeySet:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS20*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keySet;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

