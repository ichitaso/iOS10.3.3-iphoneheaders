/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet {

	id _table;
	void* _reserved;

}
+(char)supportsSecureCoding;
-(void)getObjects:(id*)arg1 count:(unsigned)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithArray:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(unsigned)countForObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(char)arg2 ;
@end
