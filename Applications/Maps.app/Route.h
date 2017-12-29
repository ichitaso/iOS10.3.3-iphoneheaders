/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPRouteSuggestion.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>
#import <Maps/RAPComposedRoute.h>

@protocol MKAnnotation;
@class GEOComposedRoute, GEOComposedRouteStep, NSString, NSMutableArray, RouteSet, DirectionsWaypoint, GuidanceETA, TransitDirectionsListDataSource, NSDictionary, NSArray;

@interface Route : NSObject <RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPRouteSuggestion, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute, RAPComposedRoute> {

	GEOComposedRoute* _composedRoute;
	unsigned _mode;
	CLLocationCoordinate2D* _mapPoints;
	double* _distancesFromStart;
	double* _distancesFromEnd;
	double _distanceFromRequestToStart;
	GEOComposedRouteStep* _step;
	GEOComposedRouteStep* _previousStep;
	SCD_Struct_RA12 _boundingMapRect;
	id<MKAnnotation> _annotation;
	CLLocationCoordinate2D _coordinate;
	CLLocationCoordinate2D _preferredCoordinate;
	float _coordinateOffset;
	NSRange _uniqueRange;
	int _orientation;
	int _preferredOrientation;
	NSString* _key;
	NSRange _uniquePointRange;
	NSMutableArray* _trafficIncidentsOnRoute;
	RouteSet* _routeSet;
	DirectionsWaypoint* _origin;
	DirectionsWaypoint* _destination;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char avoidsTolls; 
@property (nonatomic,readonly) float meanCourseDegsForCompleteRoute; 
@property (nonatomic,readonly) float meanCourseDegsForUniqueRoute; 
@property (nonatomic,readonly) NSString * clientPickingDuration; 
@property (nonatomic,readonly) NSString * clientPickingDescription; 
@property (nonatomic,readonly) GuidanceETA * guidanceETA; 
@property (nonatomic,readonly) TransitDirectionsListDataSource * transitDirectionsListDataSource; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) DirectionsWaypoint * origin;                                                     //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) DirectionsWaypoint * destination;                                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,__weak,readonly) RouteSet * routeSet;                                                      //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) unsigned routeIndex; 
@property (nonatomic,readonly) GEOComposedRoute * composedRoute;                                                //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) double distanceFromRequestToStart;                                               //@synthesize distanceFromRequestToStart=_distanceFromRequestToStart - In the implementation block
@property (nonatomic,readonly) id<MKAnnotation> annotation;                                                     //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) unsigned mode;                                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D* mapPoints;                                               //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) double* distancesFromStart;                                                      //@synthesize distancesFromStart=_distancesFromStart - In the implementation block
@property (nonatomic,readonly) double* distancesFromEnd;                                                        //@synthesize distancesFromEnd=_distancesFromEnd - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D startCoordinate; 
@property (nonatomic,readonly) CLLocationCoordinate2D endCoordinate; 
@property (nonatomic,readonly) CLLocationCoordinate2D midPoint; 
@property (nonatomic,retain) GEOComposedRouteStep * step;                                                       //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * previousStep;                                             //@synthesize previousStep=_previousStep - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * firstStep; 
@property (nonatomic,readonly) GEOComposedRouteStep * lastStep; 
@property (nonatomic,readonly) NSString * accessibilityExpandedDistance; 
@property (nonatomic,readonly) NSString * expandedDistance; 
@property (nonatomic,readonly) NSString * abbreviatedDistance; 
@property (nonatomic,readonly) unsigned durationSeconds; 
@property (nonatomic,readonly) NSString * expandedTravelTime; 
@property (nonatomic,readonly) NSString * abbreviatedTravelTime; 
@property (nonatomic,readonly) NSString * key;                                                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidentsOnRoute;                                               //@synthesize trafficIncidentsOnRoute=_trafficIncidentsOnRoute - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage; 
@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString; 
@property (nonatomic,readonly) NSArray * transitAdvisories; 
@property (nonatomic,readonly) id<GEOServerFormattedString> overviewSubtitleFormatString; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                                                 //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D preferredCoordinate;                                        //@synthesize preferredCoordinate=_preferredCoordinate - In the implementation block
@property (assign,nonatomic) float coordinateOffset;                                                            //@synthesize coordinateOffset=_coordinateOffset - In the implementation block
@property (assign,nonatomic) NSRange uniqueRange;                                                               //@synthesize uniqueRange=_uniqueRange - In the implementation block
@property (assign,nonatomic) int orientation;                                                                   //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int preferredOrientation;                                                          //@synthesize preferredOrientation=_preferredOrientation - In the implementation block
@property (assign,nonatomic) NSRange uniquePointRange;                                                          //@synthesize uniquePointRange=_uniquePointRange - In the implementation block
@property (getter=isAlternateTransportType,readonly) char alternateTransportType; 
+(void)_setUniqueRangesForRoutes:(id)arg1 ;
+(void)_setMidCoordinateForRoute:(id)arg1 ;
+(void)_setOrientationsForRoutes:(id)arg1 ;
+(void)updateLocationAndOrientationOfAlternateRouteAnnotationRepresentations:(id)arg1 forRoutes:(id)arg2 ;
+(void)_getIndexesOfSeparationPointOfRouteA:(id)arg1 fromRouteB:(id)arg2 indexA:(unsigned*)arg3 indexB:(unsigned*)arg4 threshold:(float)arg5 reversed:(char)arg6 ;
+(id)_uniqueRangesFor2Routes:(id)arg1 ;
+(id)_uniqueRangesFor3Routes:(id)arg1 ;
-(id)combinedDescriptionForFont:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 inRouteSet:(id)arg2 ;
-(void)populateIncidentsFromETARoute:(id)arg1 incidentsOffset:(unsigned)arg2 ;
-(char)isAlternateTransportType;
-(void)setUniqueRange:(NSRange)arg1 ;
-(CLLocationCoordinate2D)_mkCoordAt:(unsigned)arg1 ;
-(GEOComposedRouteStep *)firstStep;
-(GEOComposedRouteStep *)lastStep;
-(NSString *)accessibilityExpandedDistance;
-(NSString *)expandedDistance;
-(NSString *)abbreviatedDistance;
-(id)_timeForSeconds:(unsigned)arg1 abbreviated:(char)arg2 ;
-(unsigned)durationSeconds;
-(NSString *)expandedTravelTime;
-(NSString *)abbreviatedTravelTime;
-(id)abbreviatedTravelTimeForInterval:(unsigned)arg1 ;
-(id)travelTimeForInterval:(unsigned)arg1 ;
-(SCD_Struct_RA12)boundingRectForRoute;
-(SCD_Struct_RA12)boundingRectForStep:(id)arg1 fromPoint:(unsigned)arg2 ;
-(SCD_Struct_RA12)boundingRectForStep:(id)arg1 ;
-(CLLocationCoordinate2D)closestMapPointToMapPoint:(CLLocationCoordinate2D)arg1 ;
-(double)distanceFromRequestToStart;
-(CLLocationCoordinate2D*)mapPoints;
-(double*)distancesFromStart;
-(double*)distancesFromEnd;
-(GEOComposedRouteStep *)previousStep;
-(CLLocationCoordinate2D)preferredCoordinate;
-(void)setPreferredCoordinate:(CLLocationCoordinate2D)arg1 ;
-(float)coordinateOffset;
-(void)setCoordinateOffset:(float)arg1 ;
-(NSRange)uniqueRange;
-(int)preferredOrientation;
-(void)setPreferredOrientation:(int)arg1 ;
-(NSRange)uniquePointRange;
-(void)setUniquePointRange:(NSRange)arg1 ;
-(NSArray *)trafficIncidentsOnRoute;
-(float)meanCourseDegsForCompleteRoute;
-(float)meanCourseDegsForRange:(NSRange)arg1 ;
-(float)meanCourseDegsForUniqueRoute;
-(char)shouldReturnToRoutePickerWhenEndingDirectionsAtStepIndex:(unsigned)arg1 ;
-(NSString *)clientPickingDuration;
-(NSString *)clientPickingDescription;
-(GuidanceETA *)guidanceETA;
-(TransitDirectionsListDataSource *)transitDirectionsListDataSource;
-(NSString *)key;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)_commonInit;
-(DirectionsWaypoint *)origin;
-(unsigned)mode;
-(NSDictionary *)dictionaryRepresentation;
-(DirectionsWaypoint *)destination;
-(id<MKAnnotation>)annotation;
-(unsigned)routeIndex;
-(char)avoidsTolls;
-(RouteSet *)routeSet;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(id<GEOServerFormattedString>)overviewSubtitleFormatString;
-(NSArray *)transitAdvisories;
-(GEOComposedRouteStep *)step;
-(GEOComposedRoute *)composedRoute;
-(CLLocationCoordinate2D)startCoordinate;
-(CLLocationCoordinate2D)endCoordinate;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(CLLocationCoordinate2D)midPoint;
@end

