/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSArrayChanges.h>

@interface NSConcreteArrayChanges : NSArrayChanges {

	SCD_Struct_NS45* _changes;

}
-(void)_enumerateChanges:(unsigned)arg1 stop:(char*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)applyChangesToArray:(id)arg1 ;
-(id)init;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(unsigned)changeCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
@end

