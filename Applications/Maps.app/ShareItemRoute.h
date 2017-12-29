/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ShareItemSource.h>

@protocol POIShape;
@class _MKCustomFeatureStore, _ShareCustomFeature, NSArray, Route, MKMapItem, VKPolylineOverlay, VKPolylineOverlayPainter, NSString, SearchResult;

@interface ShareItemRoute : NSObject <ShareItemSource> {

	_MKCustomFeatureStore* _customFeatureStore;
	_ShareCustomFeature* _startCustomFeature;
	_ShareCustomFeature* _endCustomFeature;
	char _includeRoutingApps;
	NSArray* _activityProviders;
	Route* _route;
	id<POIShape> _startPOIShape;
	id<POIShape> _endPOIShape;
	MKMapItem* _origin;
	MKMapItem* _destination;
	VKPolylineOverlay* _polyline;
	VKPolylineOverlayPainter* _polylinePainter;

}

@property (nonatomic,readonly) Route * route;                                           //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) id<POIShape> startPOIShape;                              //@synthesize startPOIShape=_startPOIShape - In the implementation block
@property (nonatomic,readonly) id<POIShape> endPOIShape;                                //@synthesize endPOIShape=_endPOIShape - In the implementation block
@property (nonatomic,readonly) char includeRoutingApps;                                 //@synthesize includeRoutingApps=_includeRoutingApps - In the implementation block
@property (nonatomic,readonly) MKMapItem * origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) VKPolylineOverlay * polyline;                            //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) VKPolylineOverlayPainter * polylinePainter;              //@synthesize polylinePainter=_polylinePainter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * applicationActivities; 
@property (nonatomic,readonly) NSArray * activityProviders;                             //@synthesize activityProviders=_activityProviders - In the implementation block
@property (nonatomic,readonly) NSArray * excludedActivityTypes; 
@property (nonatomic,readonly) NSArray * includedActivityTypes; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) NSString * navigationBarTitle; 
@property (nonatomic,readonly) SearchResult * searchResult; 
-(void)drawInMapView:(id)arg1 ;
-(SCD_Struct_RA12)boundingRegionInMapView:(id)arg1 ;
-(void)setActivityProviderDelegate:(id)arg1 ;
-(void)_setupCustomFeatureStore;
-(void)_setupCustomFeatureForMapItem;
-(id)initWithRoute:(id)arg1 startPOIShape:(id)arg2 endPOIShape:(id)arg3 includeRoutingApps:(char)arg4 ;
-(void)_selectCustomFeature:(id)arg1 ;
-(id<POIShape>)startPOIShape;
-(id<POIShape>)endPOIShape;
-(char)includeRoutingApps;
-(VKPolylineOverlayPainter *)polylinePainter;
-(MKMapItem *)origin;
-(MKMapItem *)destination;
-(NSArray *)excludedActivityTypes;
-(NSArray *)applicationActivities;
-(NSArray *)includedActivityTypes;
-(Route *)route;
-(SearchResult *)searchResult;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(VKPolylineOverlay *)polyline;
-(NSArray *)activityProviders;
-(NSString *)navigationBarTitle;
-(MKMapItem *)mapItem;
@end

