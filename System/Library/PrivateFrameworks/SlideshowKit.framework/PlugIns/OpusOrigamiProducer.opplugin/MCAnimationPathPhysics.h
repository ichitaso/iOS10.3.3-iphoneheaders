/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationPath.h>

@interface MCAnimationPathPhysics : MCAnimationPath {

	float _staticFriction;
	float _kineticFriction;
	float _skinFriction;

}

@property (assign,nonatomic) float staticFriction;               //@synthesize staticFriction=_staticFriction - In the implementation block
@property (assign,nonatomic) float kineticFriction;              //@synthesize kineticFriction=_kineticFriction - In the implementation block
@property (assign,nonatomic) float skinFriction;                 //@synthesize skinFriction=_skinFriction - In the implementation block
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(float)kineticFriction;
-(float)skinFriction;
-(float)staticFriction;
-(void)setStaticFriction:(float)arg1 ;
-(void)setKineticFriction:(float)arg1 ;
-(void)setSkinFriction:(float)arg1 ;
-(id)imprint;
@end
