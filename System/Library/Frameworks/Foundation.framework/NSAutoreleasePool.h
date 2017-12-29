/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(void)showPools;
+(void)releaseAllPools;
+(unsigned)autoreleasedObjectCount;
+(unsigned)topAutoreleasePoolCount;
+(char)autoreleasePoolExists;
+(void)enableRelease:(char)arg1 ;
+(void)enableFreedObjectCheck:(char)arg1 ;
+(unsigned)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned)arg1 ;
+(unsigned)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned)arg1 ;
+(unsigned)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
+(void)addObject:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(oneway void)release;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)drain;
@end

