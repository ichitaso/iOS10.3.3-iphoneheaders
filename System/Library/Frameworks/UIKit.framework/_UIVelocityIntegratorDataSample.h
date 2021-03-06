/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDate;

@interface _UIVelocityIntegratorDataSample : NSObject {

	NSDate* _time;
	CGVector _translation;
	CGPoint _point;

}

@property (nonatomic,retain) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(NSDate *)time;
-(CGVector)translation;
-(void)setTime:(NSDate *)arg1 ;
-(char)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 ;
-(void)updateTimeToNow;
-(void)setTranslation:(CGVector)arg1 ;
@end

