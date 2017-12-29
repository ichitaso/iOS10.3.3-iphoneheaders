/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SpringInfo : NSObject {

	double _mass;
	double _stiffness;
	double _damping;
	double _initialVelocity;
	double _undershootTime;
	double _overshootTime;
	double _settlingTime;

}

@property (readonly) double mass;                         //@synthesize mass=_mass - In the implementation block
@property (readonly) double stiffness;                    //@synthesize stiffness=_stiffness - In the implementation block
@property (readonly) double damping;                      //@synthesize damping=_damping - In the implementation block
@property (readonly) double initialVelocity;              //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (readonly) double undershootTime;               //@synthesize undershootTime=_undershootTime - In the implementation block
@property (readonly) double overshootTime;                //@synthesize overshootTime=_overshootTime - In the implementation block
@property (readonly) double settlingTime;                 //@synthesize settlingTime=_settlingTime - In the implementation block
-(double)valueAtTime:(double)arg1 ;
-(double)undershootTime;
-(double)overshootTime;
-(double)settlingTime;
-(id)description;
-(double)damping;
-(double)mass;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 ;
-(double)stiffness;
-(double)initialVelocity;
@end
