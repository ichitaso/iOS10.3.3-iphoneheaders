/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKLocationManagerObserver <NSObject>
@required
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
-(void)locationManagerDidReset:(id)arg1;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
-(void)locationManagerUpdatedLocation:(id)arg1;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;

@end

