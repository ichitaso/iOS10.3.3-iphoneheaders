/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKUserTrackingView.h>

@protocol CarMapTrackingControllerDelegate;
@class MKMapView, NSString;

@interface CarMapTrackingController : NSObject <MKUserTrackingView> {

	char _useForcedTrackingMode;
	MKMapView* _mapView;
	int _forcedTrackingMode;
	id<CarMapTrackingControllerDelegate> _delegate;

}

@property (nonatomic,retain) MKMapView * mapView;                                               //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) char useForcedTrackingMode;                                        //@synthesize useForcedTrackingMode=_useForcedTrackingMode - In the implementation block
@property (assign,nonatomic) int forcedTrackingMode;                                            //@synthesize forcedTrackingMode=_forcedTrackingMode - In the implementation block
@property (assign,nonatomic,__weak) id<CarMapTrackingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mapViewNotified:(id)arg1 ;
-(void)setForcedTrackingMode:(int)arg1 ;
-(void)setUseForcedTrackingMode:(char)arg1 ;
-(char)useForcedTrackingMode;
-(int)forcedTrackingMode;
-(void)setDelegate:(id<CarMapTrackingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CarMapTrackingControllerDelegate>)delegate;
-(char)hasUserLocation;
-(int)userTrackingMode;
-(char)hasRenderedSomething;
-(char)canRotateForHeading;
-(char)isCurrentlyRotated;
-(void)_setUserTrackingMode:(int)arg1 animated:(char)arg2 fromTrackingButton:(char)arg3 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end
