/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOStorageCompletion, GEOLatLng, GEOMapItemStorage, NSString;

@interface RAPUserSearchInput : PBCodable <NSCopying> {

	GEOStorageCompletion* _completionStorage;
	GEOLatLng* _coordinate;
	int _origin;
	GEOMapItemStorage* _placeMapItemStorage;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	SCD_Struct_RA3 _has;

}

@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                               //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) char hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString;                    //@synthesize singleLineAddressString=_singleLineAddressString - In the implementation block
@property (nonatomic,readonly) char hasPlaceMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * placeMapItemStorage;               //@synthesize placeMapItemStorage=_placeMapItemStorage - In the implementation block
@property (nonatomic,readonly) char hasCompletionStorage; 
@property (nonatomic,retain) GEOStorageCompletion * completionStorage;              //@synthesize completionStorage=_completionStorage - In the implementation block
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                                //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) char hasOrigin; 
@property (assign,nonatomic) int origin;                                            //@synthesize origin=_origin - In the implementation block
-(GEOStorageCompletion *)completionStorage;
-(char)hasCompletionStorage;
-(void)setCompletionStorage:(GEOStorageCompletion *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasSearchString;
-(char)hasCoordinate;
-(char)hasOrigin;
-(char)hasSingleLineAddressString;
-(void)setHasOrigin:(char)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(NSString *)singleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)coordinate;
-(char)hasPlaceMapItemStorage;
-(GEOMapItemStorage *)placeMapItemStorage;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
@end

