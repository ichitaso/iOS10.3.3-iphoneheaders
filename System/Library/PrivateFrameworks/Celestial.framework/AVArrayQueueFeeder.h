/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {

	NSMutableArray* _items;

}
-(id)init;
-(void)dealloc;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)initWithArray:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)shuffleWithCurrentIndex:(unsigned)arg1 ;
-(unsigned)itemCount;
-(id)itemForIndex:(unsigned)arg1 ;
-(unsigned)numberOfPaths;
-(id)pathAtIndex:(unsigned)arg1 ;
@end

