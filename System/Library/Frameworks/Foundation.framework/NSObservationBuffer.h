/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationTransformer.h>

@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) char memoryPressureSensitive; 
@property (copy) id bufferFullHandler; 
@property (assign) char automaticallyEmitsObjects; 
+(id)bufferWithMaximumObjectCount:(unsigned)arg1 fullPolicy:(int)arg2 outputQueue:(id)arg3 ;
+(id)bufferWithOutputQueue:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithMaximumObjectCount:(unsigned)arg1 fullPolicy:(int)arg2 outputQueue:(id)arg3 ;
-(id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(id)arg1 ;
-(char)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(char)arg1 ;
-(char)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(char)arg1 ;
@end

