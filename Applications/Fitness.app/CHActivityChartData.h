/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CHActivityChartData : NSObject <NSSecureCoding> {

	NSArray* _moveData;
	NSArray* _exerciseData;
	NSArray* _standData;
	NSArray* _workoutData;
	int _numberOfActiveMinutes;

}

@property (nonatomic,retain) NSArray * moveData;                     //@synthesize moveData=_moveData - In the implementation block
@property (nonatomic,retain) NSArray * exerciseData;                 //@synthesize exerciseData=_exerciseData - In the implementation block
@property (nonatomic,retain) NSArray * standData;                    //@synthesize standData=_standData - In the implementation block
@property (nonatomic,retain) NSArray * workoutData;                  //@synthesize workoutData=_workoutData - In the implementation block
@property (assign,nonatomic) int numberOfActiveMinutes;              //@synthesize numberOfActiveMinutes=_numberOfActiveMinutes - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)moveData;
-(NSArray *)exerciseData;
-(NSArray *)standData;
-(NSArray *)workoutData;
-(int)numberOfActiveMinutes;
-(void)setMoveData:(NSArray *)arg1 ;
-(void)setExerciseData:(NSArray *)arg1 ;
-(void)setStandData:(NSArray *)arg1 ;
-(void)setWorkoutData:(NSArray *)arg1 ;
-(void)setNumberOfActiveMinutes:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

