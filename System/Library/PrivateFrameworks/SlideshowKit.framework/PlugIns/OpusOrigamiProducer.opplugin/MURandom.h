/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MURandom : MUPoolObject {

	long _state[31];
	long* _frontPtr;
	long* _rearPtr;
	long* _endPtr;

}
+(SCD_Struct_MU3*)poolInfo;
+(char)clearVars;
+(id)randomGeneratorWithSeed:(unsigned long)arg1 ;
-(float)randomFloatInRange:(float)arg1 :(float)arg2 ;
-(void)_seed:(unsigned long)arg1 ;
-(long)randomInt;
@end
