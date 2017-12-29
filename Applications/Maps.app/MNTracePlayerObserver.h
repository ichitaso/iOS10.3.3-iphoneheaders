/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTracePlayerObserver <NSObject>
@required
-(void)tracePlayerDidStart:(id)arg1;
-(void)tracePlayerDidStop:(id)arg1;
-(void)tracePlayerDidPause:(id)arg1;
-(void)tracePlayerDidResume:(id)arg1;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4;
-(void)tracePlayerDidStayOnRoute:(id)arg1;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned)arg2 exitType:(unsigned)arg3 confidence:(unsigned)arg4;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;

@end

