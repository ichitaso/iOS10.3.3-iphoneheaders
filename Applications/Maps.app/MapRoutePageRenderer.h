/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapCachedPageRenderer.h>

@class RouteStepCalloutCell, UIColor, NSMutableArray, Route;

@interface MapRoutePageRenderer : MapCachedPageRenderer {

	CLLocationCoordinate2D topLeftCorner;
	CLLocationCoordinate2D mlMapPoint;
	CLLocationCoordinate2D mrMapPoint;
	RouteStepCalloutCell* _redPinCallout;
	RouteStepCalloutCell* _greenPinCallout;
	UIColor* _routeCenterPrintColor;
	NSMutableArray* _snapshotObjects;
	Route* _route;

}

@property (nonatomic,readonly) Route * route;              //@synthesize route=_route - In the implementation block
-(CGRect)overviewRect;
-(void)drawTopContentInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(id)computeCurrentPrintInfo;
-(id)initWithRoute:(id)arg1 mapView:(id)arg2 ;
-(int)routeStepsPerPage;
-(CGAffineTransform)_overviewAffineTransformForRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(void)_drawRouteLineInRect:(CGRect)arg1 zoomLevel:(float)arg2 transform:(CGAffineTransform)arg3 ;
-(void)_drawAddressWithPin:(int)arg1 address:(id)arg2 inRect:(CGRect)arg3 ;
-(void)_drawBottomMarginContentInRect:(CGRect)arg1 ;
-(void)_layoutRouteStepCalloutAtIndex:(unsigned)arg1 depth:(int)arg2 ;
-(float)_zoomLevelForCoordinateRegion:(SCD_Struct_RA12)arg1 ;
-(int)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawContentForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
-(Route *)route;
@end

