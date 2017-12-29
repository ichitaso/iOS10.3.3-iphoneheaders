/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface NSCFDictionary : NSMutableDictionary
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(oneway void)release;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(void)removeAllObjects;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)_isDeallocating;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
@end
