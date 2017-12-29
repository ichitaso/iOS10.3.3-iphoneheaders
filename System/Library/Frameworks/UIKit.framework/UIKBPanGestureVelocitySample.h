/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBPanGestureVelocitySample : NSObject {

	CGPoint start;
	CGPoint end;
	double dt;
	float force;
	float majorRadius;

}

@property (assign) CGPoint start; 
@property (assign) CGPoint end; 
@property (assign) double dt; 
@property (assign) float force; 
@property (assign) float majorRadius; 
-(void)setForce:(float)arg1 ;
-(float)force;
-(CGPoint)start;
-(void)setStart:(CGPoint)arg1 ;
-(CGPoint)end;
-(void)setEnd:(CGPoint)arg1 ;
-(double)dt;
-(void)setDt:(double)arg1 ;
-(float)majorRadius;
-(void)setMajorRadius:(float)arg1 ;
-(void)pullValuesFrom:(id)arg1 ;
-(void)resetValues;
@end

