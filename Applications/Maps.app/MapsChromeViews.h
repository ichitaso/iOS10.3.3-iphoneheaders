/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MKMapView, UIView;


@protocol MapsChromeViews <NSObject>
@property (nonatomic,readonly) MKMapView * mapView; 
@property (nonatomic,readonly) UIView * containingView; 
@required
-(UIView *)containingView;
-(MKMapView *)mapView;

@end

