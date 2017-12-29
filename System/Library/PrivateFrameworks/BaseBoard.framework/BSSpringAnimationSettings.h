/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@interface BSSpringAnimationSettings : BSAnimationSettings {

	float _mass;
	float _stiffness;
	float _damping;
	float _epsilon;
	float _initialVelocity;
	char _hasCalculatedDuration;

}

@property (nonatomic,readonly) float mass; 
@property (nonatomic,readonly) float stiffness; 
@property (nonatomic,readonly) float damping; 
@property (nonatomic,readonly) float epsilon; 
@property (nonatomic,readonly) float initialVelocity; 
+(id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 ;
+(id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 ;
+(id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5 ;
+(id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 timingFunction:(id)arg4 ;
+(id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 timingFunction:(id)arg5 ;
+(id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 delay:(double)arg5 timingFunction:(id)arg6 ;
+(char)supportsSecureCoding;
-(char)isSpringAnimation;
-(void)_setTimingFunction:(id)arg1 ;
-(void)_setEpsilon:(float)arg1 ;
-(id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 speed:(float)arg9 ;
-(id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 ;
-(char)_hasCalculatedDuration;
-(void)_setMass:(float)arg1 ;
-(void)_setStiffness:(float)arg1 ;
-(void)_setDamping:(float)arg1 ;
-(void)_setInitialVelocity:(float)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(void)_setDuration:(double)arg1 ;
-(float)damping;
-(float)mass;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(float)stiffness;
-(float)initialVelocity;
-(void)_setSpeed:(float)arg1 ;
-(float)epsilon;
@end

