/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface PersistentSearchRequestHistoryItem : PBCodable <NSCopying> {

	double _latitude;
	double _latitudeSpan;
	double _longitude;
	double _longitudeSpan;
	double _position;
	double _timestamp;
	NSString* _displayLocation;
	NSString* _displayQuery;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	NSString* _syncIdentifier;
	SCD_Struct_Pe56 _has;

}

@property (nonatomic,readonly) char hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char hasDisplayQuery; 
@property (nonatomic,retain) NSString * displayQuery;                        //@synthesize displayQuery=_displayQuery - In the implementation block
@property (nonatomic,readonly) char hasDisplayLocation; 
@property (nonatomic,retain) NSString * displayLocation;                     //@synthesize displayLocation=_displayLocation - In the implementation block
@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasLatitudeSpan; 
@property (assign,nonatomic) double latitudeSpan;                            //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (assign,nonatomic) char hasLongitudeSpan; 
@property (assign,nonatomic) double longitudeSpan;                           //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) char hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) char hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                      //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(char)hasSyncIdentifier;
-(char)hasDisplayQuery;
-(char)hasDisplayLocation;
-(void)setLatitudeSpan:(double)arg1 ;
-(void)setHasLatitudeSpan:(char)arg1 ;
-(char)hasLatitudeSpan;
-(void)setLongitudeSpan:(double)arg1 ;
-(void)setHasLongitudeSpan:(char)arg1 ;
-(char)hasLongitudeSpan;
-(NSString *)displayQuery;
-(void)setDisplayQuery:(NSString *)arg1 ;
-(void)setDisplayLocation:(NSString *)arg1 ;
-(double)latitudeSpan;
-(double)longitudeSpan;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(GEOPlaceSearchResponse *)response;
-(GEOPlaceSearchRequest *)request;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(NSString *)displayLocation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(char)hasRequest;
-(char)hasResponse;
-(void)setRequest:(GEOPlaceSearchRequest *)arg1 ;
-(void)setResponse:(GEOPlaceSearchResponse *)arg1 ;
-(char)hasPosition;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLatitude:(char)arg1 ;
-(char)hasLatitude;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLongitude:(char)arg1 ;
-(char)hasLongitude;
-(double)latitude;
-(double)longitude;
-(NSString *)syncIdentifier;
-(void)setHasPosition:(char)arg1 ;
@end

