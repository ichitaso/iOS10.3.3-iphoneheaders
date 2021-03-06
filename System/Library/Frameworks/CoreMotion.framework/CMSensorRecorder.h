/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMSensorRecorder : NSObject
+(char)isRecordingAvailableForType:(int)arg1 ;
+(char)isAccelerometerRecordingAvailable;
+(char)isGyroRecordingAvailable;
+(char)isAuthorizedForRecording;
-(char)setSensorSampleRate:(unsigned)arg1 forType:(int)arg2 ;
-(id)sensorDataFromDate:(id)arg1 toDate:(id)arg2 forType:(int)arg3 ;
-(char)validateTimesFromDate:(id*)arg1 toDate:(id)arg2 ;
-(char)sendSensorDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 forType:(int)arg4 ;
-(void)recordDataType:(int)arg1 forDuration:(double)arg2 ;
-(id)accelerometerDataSinceId:(unsigned long long)arg1 ;
-(id)gyroDataSinceId:(unsigned long long)arg1 ;
-(id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)gyroDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(char)sendAccelDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(char)sendGyroDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(void)recordAccelerometerForDuration:(double)arg1 ;
-(void)recordGyroForDuration:(double)arg1 ;
-(id)accelerometerDataFrom:(id)arg1 to:(id)arg2 ;
-(void)recordAccelerometerFor:(double)arg1 ;
-(id)accelerometerDataSince:(unsigned long long)arg1 ;
-(char)setAccelSampleRate:(unsigned)arg1 ;
-(char)setGyroSampleRate:(unsigned)arg1 ;
@end

