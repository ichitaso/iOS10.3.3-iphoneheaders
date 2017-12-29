/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DirectionsPlan, GEOURLOptions, MSPDroppedPin, MSPTransitStorageLineItem, GEOMapItemStorage, GEOSearchCategoryStorage, NSMutableArray, NSString;

@interface MapsActivity : PBCodable <NSCopying> {

	unsigned long long _selectedPlaceIndex;
	unsigned long long _selectedTransitFeatureID;
	int _collectionsMode;
	DirectionsPlan* _directionsPlan;
	GEOURLOptions* _displayOptions;
	MSPDroppedPin* _droppedPin;
	MSPTransitStorageLineItem* _lineItem;
	GEOMapItemStorage* _presentedMapItem;
	GEOSearchCategoryStorage* _searchCategoryStorage;
	NSMutableArray* _searchPlaces;
	NSString* _searchString;
	NSString* _selectedTransitLineName;
	char _isDroppedPinPresented;
	char _isDroppedPinSelected;
	char _isPresentingSelectedPlace;
	SCD_Struct_Pe56 _has;

}

@property (nonatomic,readonly) char hasDisplayOptions; 
@property (nonatomic,retain) GEOURLOptions * displayOptions;                                //@synthesize displayOptions=_displayOptions - In the implementation block
@property (assign,nonatomic) char hasCollectionsMode; 
@property (assign,nonatomic) int collectionsMode;                                           //@synthesize collectionsMode=_collectionsMode - In the implementation block
@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                       //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchPlaces;                                 //@synthesize searchPlaces=_searchPlaces - In the implementation block
@property (assign,nonatomic) char hasSelectedPlaceIndex; 
@property (assign,nonatomic) unsigned long long selectedPlaceIndex;                         //@synthesize selectedPlaceIndex=_selectedPlaceIndex - In the implementation block
@property (assign,nonatomic) char hasIsPresentingSelectedPlace; 
@property (assign,nonatomic) char isPresentingSelectedPlace;                                //@synthesize isPresentingSelectedPlace=_isPresentingSelectedPlace - In the implementation block
@property (nonatomic,readonly) char hasDirectionsPlan; 
@property (nonatomic,retain) DirectionsPlan * directionsPlan;                               //@synthesize directionsPlan=_directionsPlan - In the implementation block
@property (nonatomic,readonly) char hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;                                    //@synthesize droppedPin=_droppedPin - In the implementation block
@property (assign,nonatomic) char hasIsDroppedPinSelected; 
@property (assign,nonatomic) char isDroppedPinSelected;                                     //@synthesize isDroppedPinSelected=_isDroppedPinSelected - In the implementation block
@property (assign,nonatomic) char hasIsDroppedPinPresented; 
@property (assign,nonatomic) char isDroppedPinPresented;                                    //@synthesize isDroppedPinPresented=_isDroppedPinPresented - In the implementation block
@property (nonatomic,readonly) char hasPresentedMapItem; 
@property (nonatomic,retain) GEOMapItemStorage * presentedMapItem;                          //@synthesize presentedMapItem=_presentedMapItem - In the implementation block
@property (nonatomic,readonly) char hasSearchCategoryStorage; 
@property (nonatomic,retain) GEOSearchCategoryStorage * searchCategoryStorage;              //@synthesize searchCategoryStorage=_searchCategoryStorage - In the implementation block
@property (assign,nonatomic) char hasSelectedTransitFeatureID; 
@property (assign,nonatomic) unsigned long long selectedTransitFeatureID;                   //@synthesize selectedTransitFeatureID=_selectedTransitFeatureID - In the implementation block
@property (nonatomic,readonly) char hasSelectedTransitLineName; 
@property (nonatomic,retain) NSString * selectedTransitLineName;                            //@synthesize selectedTransitLineName=_selectedTransitLineName - In the implementation block
@property (nonatomic,readonly) char hasLineItem; 
@property (nonatomic,retain) MSPTransitStorageLineItem * lineItem;                          //@synthesize lineItem=_lineItem - In the implementation block
+(Class)searchPlacesType;
-(id)bzip2CompressedData;
-(id)initWithBzip2CompressedData:(id)arg1 ;
-(id)bzip2DataByIterativelyReducingIfNeeded;
-(char)hasDisplayOptions;
-(int)collectionsMode;
-(void)setCollectionsMode:(int)arg1 ;
-(void)setHasCollectionsMode:(char)arg1 ;
-(char)hasCollectionsMode;
-(id)collectionsModeAsString:(int)arg1 ;
-(int)StringAsCollectionsMode:(id)arg1 ;
-(void)clearSearchPlaces;
-(void)addSearchPlaces:(id)arg1 ;
-(unsigned)searchPlacesCount;
-(id)searchPlacesAtIndex:(unsigned)arg1 ;
-(void)setSelectedPlaceIndex:(unsigned long long)arg1 ;
-(void)setHasSelectedPlaceIndex:(char)arg1 ;
-(char)hasSelectedPlaceIndex;
-(void)setIsPresentingSelectedPlace:(char)arg1 ;
-(void)setHasIsPresentingSelectedPlace:(char)arg1 ;
-(char)hasIsPresentingSelectedPlace;
-(char)hasDirectionsPlan;
-(void)setIsDroppedPinSelected:(char)arg1 ;
-(void)setHasIsDroppedPinSelected:(char)arg1 ;
-(char)hasIsDroppedPinSelected;
-(void)setIsDroppedPinPresented:(char)arg1 ;
-(void)setHasIsDroppedPinPresented:(char)arg1 ;
-(char)hasIsDroppedPinPresented;
-(char)hasPresentedMapItem;
-(char)hasSearchCategoryStorage;
-(void)setSelectedTransitFeatureID:(unsigned long long)arg1 ;
-(void)setHasSelectedTransitFeatureID:(char)arg1 ;
-(char)hasSelectedTransitFeatureID;
-(char)hasSelectedTransitLineName;
-(char)hasLineItem;
-(NSMutableArray *)searchPlaces;
-(void)setSearchPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)selectedPlaceIndex;
-(char)isPresentingSelectedPlace;
-(DirectionsPlan *)directionsPlan;
-(void)setDirectionsPlan:(DirectionsPlan *)arg1 ;
-(char)isDroppedPinSelected;
-(char)isDroppedPinPresented;
-(GEOMapItemStorage *)presentedMapItem;
-(void)setPresentedMapItem:(GEOMapItemStorage *)arg1 ;
-(GEOSearchCategoryStorage *)searchCategoryStorage;
-(void)setSearchCategoryStorage:(GEOSearchCategoryStorage *)arg1 ;
-(unsigned long long)selectedTransitFeatureID;
-(NSString *)selectedTransitLineName;
-(void)setSelectedTransitLineName:(NSString *)arg1 ;
-(char)shouldIndex;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasSearchString;
-(void)setLineItem:(MSPTransitStorageLineItem *)arg1 ;
-(MSPTransitStorageLineItem *)lineItem;
-(char)hasDroppedPin;
-(MSPDroppedPin *)droppedPin;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
-(void)setDisplayOptions:(GEOURLOptions *)arg1 ;
-(GEOURLOptions *)displayOptions;
@end

