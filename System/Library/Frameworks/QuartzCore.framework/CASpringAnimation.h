/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property (assign) float velocity; 
@property (assign) float mass; 
@property (assign) float stiffness; 
@property (assign) float damping; 
@property (assign) float initialVelocity; 
@property (readonly) double settlingDuration; 
+(id)defaultValueForKey:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(void)setVelocity:(float)arg1 ;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(float)velocity;
-(float)damping;
-(float)mass;
-(double)durationForEpsilon:(double)arg1 ;
-(float)stiffness;
-(float)initialVelocity;
-(double)settlingDuration;
-(void)setInitialVelocity:(float)arg1 ;
-(double)_timeFunction:(double)arg1 ;
@end

