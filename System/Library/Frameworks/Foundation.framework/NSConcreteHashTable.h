/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSConcreteHashTable : NSHashTable {

	NSSlice* slice;
	unsigned count;
	unsigned capacity;
	unsigned options;
	unsigned mutations;

}
-(id)pointerFunctions;
-(void*)getItem:(const void*)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned*)arg2 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned)arg2 ;
-(void)insertItem:(const void*)arg1 ;
-(void)raiseCountUnderflowException;
-(unsigned)rehashAround:(unsigned)arg1 ;
-(void)assign:(unsigned)arg1 key:(const void*)arg2 ;
-(void)hashGrow;
-(void)rehash;
-(id)init;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)allObjects;
-(id)objectEnumerator;
-(Class)classForCoder;
-(void)removeItem:(const void*)arg1 ;
-(id)initWithOptions:(unsigned)arg1 capacity:(unsigned)arg2 ;
-(void)removeAllItems;
@end

