/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVQueueFeeder : NSObject
-(id)init;
-(id)playbackInfoAtIndex:(unsigned)arg1 ;
-(void)contentsDidChangeByInsertingRange:(NSRange)arg1 ;
-(void)contentsDidChangeByRemovingRange:(NSRange)arg1 ;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)arg1 ;
-(double)bookmarkTimeForIndex:(unsigned)arg1 ;
-(unsigned)itemCount;
-(unsigned)numberOfPaths;
-(id)pathAtIndex:(unsigned)arg1 ;
@end

