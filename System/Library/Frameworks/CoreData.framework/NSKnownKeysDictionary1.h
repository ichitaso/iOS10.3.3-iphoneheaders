/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(char)accessInstanceVariablesDirectly;
+(id)init;
+(id)alloc;
+(id)initWithCoder:(id)arg1 ;
+(id)initWithDictionary:(id)arg1 ;
+(id)initWithCapacity:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned)arg3 ;
+(id)initWithDictionary:(id)arg1 copyItems:(char)arg2 ;
+(id)initWithSearchStrategy:(id)arg1 ;
+(id)initForKeys:(id)arg1 ;
-(Class)classForArchiver;
-(void)_setValues:(id*)arg1 retain:(char)arg2 ;
-(const id*)knownKeyValuesPointer;
-(unsigned)_valueCountByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)_recount;
-(unsigned)_countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned)arg3 forKeys:(char)arg4 ;
-(void)getKeys:(id*)arg1 ;
-(oneway void)release;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)retain;
-(unsigned)retainCount;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(const id*)values;
-(void)setValues:(id*)arg1 ;
-(char)_isDeallocating;
-(char)isEqualToDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)allValues;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)setValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)mapping;
-(id)valueAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 ;
@end

