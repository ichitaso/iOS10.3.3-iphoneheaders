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

@class NSUUID;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* fSessionId;
	int fType;

}

@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) int type; 
+(char)supportsSecureCoding;
+(id)workoutName:(int)arg1 ;
+(int)natalieDataSessionFromWorkoutType:(int)arg1 ;
+(int)workoutTypeFromNatalieDataSession:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)sessionId;
-(id)initWithSessionId:(id)arg1 type:(int)arg2 ;
@end

