/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigIrisAutoTrimmerMotionSample : NSObject {

	double _timestamp;
	double _deltaPeriod;
	double _accelPeriod;
	SCD_Struct_Fi52 _gravity;
	SCD_Struct_Fi53 _attitude;
	SCD_Struct_Fi53 _delta;
	SCD_Struct_Fi53 _accel;

}

@property (nonatomic,readonly) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 cmTimestamp; 
@property (nonatomic,readonly) double deltaPeriod;                      //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) double accelPeriod;                      //@synthesize accelPeriod=_accelPeriod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi53 attitude;                //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi53 delta;                   //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi53 accel;                   //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi52 gravity;                 //@synthesize gravity=_gravity - In the implementation block
-(void)dealloc;
-(double)timestamp;
-(SCD_Struct_Fi53)attitude;
-(SCD_Struct_Fi53)delta;
-(SCD_Struct_Fi52)gravity;
-(id)initWithAttitude:(const SCD_Struct_Fi53*)arg1 gravity:(const SCD_Struct_Fi52*)arg2 timestamp:(double)arg3 fromSample:(id)arg4 fromDelta:(id)arg5 ;
-(SCD_Struct_Fi53)attitudeRelativeTo:(id)arg1 ;
-(SCD_Struct_BW2)cmTimestamp;
-(double)deltaPeriod;
-(double)accelPeriod;
-(SCD_Struct_Fi53)accel;
@end

