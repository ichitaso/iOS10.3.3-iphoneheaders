/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapServiceTicket;
#import <Maps/Maps-Structs.h>
@class NSHashTable, WFLocation;

@interface WeatherLocationDataProvider : NSObject {

	NSHashTable* _observers;
	WFLocation* _location;
	id<MKMapServiceTicket> _ticket;
	char _reverseGeocoding;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
-(void)_notifyObserversWeatherLocationDidChange;
-(void)_updateCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(void)_updateLocation:(id)arg1 ;
@end

