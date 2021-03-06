/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileNotes/MobileNotes-Structs.h>
@class NSDate;

@interface ICDrawingViewTransform : NSObject {

	NSDate* _startTime;
	double _duration;
	CGAffineTransform _from;
	CGAffineTransform _to;
	CGAffineTransform _final;

}

@property (assign,nonatomic) CGAffineTransform from;               //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) CGAffineTransform to;                 //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) CGAffineTransform final;              //@synthesize final=_final - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)setFrom:(CGAffineTransform)arg1 ;
-(void)setTo:(CGAffineTransform)arg1 ;
-(CGAffineTransform)from;
-(CGAffineTransform)to;
-(void)setFinal:(CGAffineTransform)arg1 ;
-(CGAffineTransform)final;
@end

