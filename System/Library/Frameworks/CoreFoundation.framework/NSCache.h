/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}

@property (copy) NSString * name; 
@property (assign) id<NSCacheDelegate> delegate; 
@property (assign) unsigned totalCostLimit; 
@property (assign) unsigned countLimit; 
@property (assign) char evictsObjectsWithDiscardedContent; 
-(unsigned)totalCostLimit;
-(char)evictsObjectsWithDiscardedContent;
-(unsigned)minimumObjectCount;
-(char)evictsObjectsWhenApplicationEntersBackground;
-(id)init;
-(void)setDelegate:(id<NSCacheDelegate>)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id<NSCacheDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(void)setCountLimit:(unsigned)arg1 ;
-(void)setMinimumObjectCount:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 ;
-(void)setTotalCostLimit:(unsigned)arg1 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(char)arg1 ;
-(unsigned)countLimit;
-(void)setEvictsObjectsWithDiscardedContent:(char)arg1 ;
@end
