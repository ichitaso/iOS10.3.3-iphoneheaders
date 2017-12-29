/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface IMAnimationFloatFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	float _startValue;
	float _endValue;
	float _speed;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) float startValue;                                    //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) float endValue;                                      //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) float speed;                                         //@synthesize speed=_speed - In the implementation block
-(id)initWithTimingFunction:(id)arg1 startValue:(float)arg2 endValue:(float)arg3 speed:(float)arg4 ;
-(float)solveForTime:(float)arg1 ;
-(id)init;
-(void)setSpeed:(float)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(float)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(float)arg1 ;
-(void)setEndValue:(float)arg1 ;
-(float)endValue;
-(float)startValue;
@end

