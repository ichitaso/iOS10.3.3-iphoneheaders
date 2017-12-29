/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TransitWidget/TransitWidget-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOStorageRouteRequestStorage, DirectionsPlanTransitPreferences;

@interface DirectionsPlan : PBCodable <NSCopying> {

	double _arrivalTime;
	unsigned long long _currentRouteIndex;
	unsigned long long _currentRouteStep;
	double _departureTime;
	NSString* _destinationString;
	int _displayMethod;
	unsigned _earlierPagesLoaded;
	unsigned _laterPagesLoaded;
	NSString* _originString;
	GEOStorageRouteRequestStorage* _routeRequestStorage;
	unsigned _routesPerEarlierPage;
	unsigned _routesPerInitialPage;
	unsigned _routesPerLaterPage;
	DirectionsPlanTransitPreferences* _transitPreferences;
	int _transitPrioritization;
	int _transitSurchargeOption;
	char _isPlayingTrace;
	SCD_Struct_Di5 _has;

}

@property (nonatomic,readonly) char hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;                //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,readonly) char hasOriginString; 
@property (nonatomic,retain) NSString * originString;                                            //@synthesize originString=_originString - In the implementation block
@property (nonatomic,readonly) char hasDestinationString; 
@property (nonatomic,retain) NSString * destinationString;                                       //@synthesize destinationString=_destinationString - In the implementation block
@property (assign,nonatomic) char hasDepartureTime; 
@property (assign,nonatomic) double departureTime;                                               //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) char hasArrivalTime; 
@property (assign,nonatomic) double arrivalTime;                                                 //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (assign,nonatomic) char hasCurrentRouteIndex; 
@property (assign,nonatomic) unsigned long long currentRouteIndex;                               //@synthesize currentRouteIndex=_currentRouteIndex - In the implementation block
@property (assign,nonatomic) char hasCurrentRouteStep; 
@property (assign,nonatomic) unsigned long long currentRouteStep;                                //@synthesize currentRouteStep=_currentRouteStep - In the implementation block
@property (assign,nonatomic) char hasDisplayMethod; 
@property (assign,nonatomic) int displayMethod;                                                  //@synthesize displayMethod=_displayMethod - In the implementation block
@property (nonatomic,readonly) char hasTransitPreferences; 
@property (nonatomic,retain) DirectionsPlanTransitPreferences * transitPreferences;              //@synthesize transitPreferences=_transitPreferences - In the implementation block
@property (assign,nonatomic) char hasRoutesPerInitialPage; 
@property (assign,nonatomic) unsigned routesPerInitialPage;                                      //@synthesize routesPerInitialPage=_routesPerInitialPage - In the implementation block
@property (assign,nonatomic) char hasEarlierPagesLoaded; 
@property (assign,nonatomic) unsigned earlierPagesLoaded;                                        //@synthesize earlierPagesLoaded=_earlierPagesLoaded - In the implementation block
@property (assign,nonatomic) char hasLaterPagesLoaded; 
@property (assign,nonatomic) unsigned laterPagesLoaded;                                          //@synthesize laterPagesLoaded=_laterPagesLoaded - In the implementation block
@property (assign,nonatomic) char hasRoutesPerEarlierPage; 
@property (assign,nonatomic) unsigned routesPerEarlierPage;                                      //@synthesize routesPerEarlierPage=_routesPerEarlierPage - In the implementation block
@property (assign,nonatomic) char hasRoutesPerLaterPage; 
@property (assign,nonatomic) unsigned routesPerLaterPage;                                        //@synthesize routesPerLaterPage=_routesPerLaterPage - In the implementation block
@property (assign,nonatomic) char hasTransitPrioritization; 
@property (assign,nonatomic) int transitPrioritization;                                          //@synthesize transitPrioritization=_transitPrioritization - In the implementation block
@property (assign,nonatomic) char hasTransitSurchargeOption; 
@property (assign,nonatomic) int transitSurchargeOption;                                         //@synthesize transitSurchargeOption=_transitSurchargeOption - In the implementation block
@property (assign,nonatomic) char hasIsPlayingTrace; 
@property (assign,nonatomic) char isPlayingTrace;                                                //@synthesize isPlayingTrace=_isPlayingTrace - In the implementation block
-(unsigned)routesPerInitialPage;
-(unsigned)routesPerEarlierPage;
-(unsigned)routesPerLaterPage;
-(char)hasOriginString;
-(char)hasDestinationString;
-(void)setHasArrivalTime:(char)arg1 ;
-(void)setCurrentRouteIndex:(unsigned long long)arg1 ;
-(void)setHasCurrentRouteIndex:(char)arg1 ;
-(char)hasCurrentRouteIndex;
-(void)setCurrentRouteStep:(unsigned long long)arg1 ;
-(void)setHasCurrentRouteStep:(char)arg1 ;
-(char)hasCurrentRouteStep;
-(int)displayMethod;
-(void)setDisplayMethod:(int)arg1 ;
-(void)setHasDisplayMethod:(char)arg1 ;
-(char)hasDisplayMethod;
-(id)displayMethodAsString:(int)arg1 ;
-(int)StringAsDisplayMethod:(id)arg1 ;
-(char)hasTransitPreferences;
-(void)setRoutesPerInitialPage:(unsigned)arg1 ;
-(void)setHasRoutesPerInitialPage:(char)arg1 ;
-(char)hasRoutesPerInitialPage;
-(void)setEarlierPagesLoaded:(unsigned)arg1 ;
-(void)setHasEarlierPagesLoaded:(char)arg1 ;
-(char)hasEarlierPagesLoaded;
-(void)setLaterPagesLoaded:(unsigned)arg1 ;
-(void)setHasLaterPagesLoaded:(char)arg1 ;
-(char)hasLaterPagesLoaded;
-(void)setRoutesPerEarlierPage:(unsigned)arg1 ;
-(void)setHasRoutesPerEarlierPage:(char)arg1 ;
-(char)hasRoutesPerEarlierPage;
-(void)setRoutesPerLaterPage:(unsigned)arg1 ;
-(void)setHasRoutesPerLaterPage:(char)arg1 ;
-(char)hasRoutesPerLaterPage;
-(int)transitPrioritization;
-(void)setTransitPrioritization:(int)arg1 ;
-(void)setHasTransitPrioritization:(char)arg1 ;
-(char)hasTransitPrioritization;
-(id)transitPrioritizationAsString:(int)arg1 ;
-(int)StringAsTransitPrioritization:(id)arg1 ;
-(void)setTransitSurchargeOption:(int)arg1 ;
-(void)setHasTransitSurchargeOption:(char)arg1 ;
-(char)hasTransitSurchargeOption;
-(void)setIsPlayingTrace:(char)arg1 ;
-(void)setHasIsPlayingTrace:(char)arg1 ;
-(char)hasIsPlayingTrace;
-(NSString *)originString;
-(void)setOriginString:(NSString *)arg1 ;
-(NSString *)destinationString;
-(void)setDestinationString:(NSString *)arg1 ;
-(unsigned long long)currentRouteIndex;
-(unsigned long long)currentRouteStep;
-(DirectionsPlanTransitPreferences *)transitPreferences;
-(void)setTransitPreferences:(DirectionsPlanTransitPreferences *)arg1 ;
-(unsigned)earlierPagesLoaded;
-(unsigned)laterPagesLoaded;
-(int)transitSurchargeOption;
-(char)isPlayingTrace;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDepartureTime:(double)arg1 ;
-(void)setHasDepartureTime:(char)arg1 ;
-(char)hasDepartureTime;
-(double)departureTime;
-(double)arrivalTime;
-(char)hasArrivalTime;
-(void)setArrivalTime:(double)arg1 ;
-(char)hasRouteRequestStorage;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
@end

