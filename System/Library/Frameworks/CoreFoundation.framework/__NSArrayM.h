/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSArrayM : NSMutableArray {

	unsigned _used;
	unsigned _offset;
	unsigned _size : 28;
	unsigned _unused : 4;
	unsigned long _mutations;
	id* _list;

}
+(id)__new:(const id*)arg1 :(unsigned)arg2 :(char)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_mutate;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned)arg3 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS20*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeLastObject;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned)arg1 withObjectAtIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)setObject:(id)arg1 atIndex:(unsigned)arg2 ;
@end

