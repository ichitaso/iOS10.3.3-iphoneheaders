/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MREffect.h>

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {

	MRCroppingSprite* mSprite;
	char mForceIsOpaque;
	float _panX;
	float _panY;
	float _scale;
	float _rotation;
	CGPoint _startSlideCenter;
	float _startSlideScale;
	float _startSlideRotation;
	float _x0;
	float _y0;
	char _pzrWasUpdated;
	char _pzrDoRotation;
	char _isInitialized;
	char _isInZoomMode;
	char _isFocuser;

}

@property (assign,nonatomic) char isFocuser;              //@synthesize isFocuser=_isFocuser - In the implementation block
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(double)pzrCancel:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(char)isNative3D;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)canMoveInDirection:(unsigned char)arg1 withPZR:(id)arg2 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setIsFocuser:(char)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(char)isAlphaFriendly;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(double)pzrStart:(id)arg1 ;
-(void)resetPZR;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(char)isFocuser;
-(id)init;
-(char)isOpaque;
-(void)_cleanup;
@end

