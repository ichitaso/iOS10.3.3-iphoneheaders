/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject <CAAnimationDelegate> {

	NSString* _animationKey;
	OFPropertyAnimationLayer* _layer;
	CAPropertyAnimation* _propertyAnimation;
	NSTimer* _timer;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animateWithDuration:(double)arg1 rootLayer:(id)arg2 animation:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)interpolateValueForKey:(id)arg1 animation:(/*^block*/id)arg2 progress:(double)arg3 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)_cleanup;
-(void)handleTimer:(id)arg1 ;
-(CGPoint)animatedPoint;
-(void)setDestinationAnimatedPoint:(CGPoint)arg1 ;
-(float)animatedFloat;
-(void)setDestinationAnimatedFloat:(float)arg1 ;
@end

