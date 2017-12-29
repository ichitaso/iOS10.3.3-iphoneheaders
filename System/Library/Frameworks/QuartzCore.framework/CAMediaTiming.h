/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(void)setSpeed:(float)arg1;
-(double)duration;
-(void)setDuration:(double)arg1;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1;
-(float)repeatCount;
-(double)beginTime;
-(void)setFillMode:(id)arg1;
-(void)setBeginTime:(double)arg1;
-(void)setRepeatCount:(float)arg1;
-(void)setAutoreverses:(char)arg1;
-(char)autoreverses;
-(NSString *)fillMode;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1;

@end

