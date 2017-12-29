/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSUUID;

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fStartDate;
	NSDate* fEndDate;
	NSNumber* fNumberOfSteps;
	NSNumber* fDistance;
	NSNumber* fFloorsAscended;
	NSNumber* fFloorsDescended;
	NSNumber* fRecordId;
	NSNumber* fCurrentPace;
	NSNumber* fCurrentCadence;
	NSNumber* fActiveTime;
	NSUUID* fSourceId;
	NSNumber* fIsOdometerDistance;
	NSNumber* fIsOdometerPace;
	NSNumber* fNumberOfPushes;
	NSNumber* fWorkoutType;

}

@property (nonatomic,readonly) int recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSNumber * numberOfPushes; 
@property (nonatomic,readonly) NSNumber * workoutType; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * numberOfSteps; 
@property (nonatomic,readonly) NSNumber * distance; 
@property (nonatomic,readonly) NSNumber * floorsAscended; 
@property (nonatomic,readonly) NSNumber * floorsDescended; 
@property (nonatomic,readonly) NSNumber * currentPace; 
@property (nonatomic,readonly) NSNumber * currentCadence; 
@property (nonatomic,readonly) NSNumber * averageActivePace; 
+(char)supportsSecureCoding;
+(id)maxPedometerEntries;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)distance;
-(NSNumber *)floorsDescended;
-(id)activeTime;
-(NSNumber *)currentPace;
-(NSNumber *)currentCadence;
-(char)isOdometerDistance;
-(char)isOdometerPace;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(int)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 activeTime:(id)arg10 sourceId:(id)arg11 isOdometerDistance:(id)arg12 isOdometerPace:(id)arg13 pushes:(int)arg14 workoutType:(int)arg15 ;
-(NSNumber *)averageActivePace;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSNumber *)workoutType;
-(NSNumber *)numberOfSteps;
-(NSNumber *)numberOfPushes;
-(NSNumber *)floorsAscended;
-(int)recordId;
@end

