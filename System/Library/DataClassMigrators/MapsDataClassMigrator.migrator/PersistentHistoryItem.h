/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PersistentAddressBookAddress, PersistentDirectionsHistoryItem, PersistentSearchRequestHistoryItem, PersistentSearchResultHistoryItem;

@interface PersistentHistoryItem : PBCodable <NSCopying> {

	PersistentAddressBookAddress* _addressBookItem;
	PersistentDirectionsHistoryItem* _directionsHistoryItem;
	PersistentSearchRequestHistoryItem* _searchRequestHistoryItem;
	PersistentSearchResultHistoryItem* _searchResultHistoryItem;

}

@property (nonatomic,readonly) char hasAddressBookItem; 
@property (nonatomic,retain) PersistentAddressBookAddress * addressBookItem;                             //@synthesize addressBookItem=_addressBookItem - In the implementation block
@property (nonatomic,readonly) char hasSearchRequestHistoryItem; 
@property (nonatomic,retain) PersistentSearchRequestHistoryItem * searchRequestHistoryItem;              //@synthesize searchRequestHistoryItem=_searchRequestHistoryItem - In the implementation block
@property (nonatomic,readonly) char hasSearchResultHistoryItem; 
@property (nonatomic,retain) PersistentSearchResultHistoryItem * searchResultHistoryItem;                //@synthesize searchResultHistoryItem=_searchResultHistoryItem - In the implementation block
@property (nonatomic,readonly) char hasDirectionsHistoryItem; 
@property (nonatomic,retain) PersistentDirectionsHistoryItem * directionsHistoryItem;                    //@synthesize directionsHistoryItem=_directionsHistoryItem - In the implementation block
-(char)hasDirectionsHistoryItem;
-(PersistentSearchRequestHistoryItem *)searchRequestHistoryItem;
-(char)hasSearchRequestHistoryItem;
-(char)hasSearchResultHistoryItem;
-(void)setDirectionsHistoryItem:(PersistentDirectionsHistoryItem *)arg1 ;
-(void)setSearchRequestHistoryItem:(PersistentSearchRequestHistoryItem *)arg1 ;
-(PersistentDirectionsHistoryItem *)directionsHistoryItem;
-(void)setSearchResultHistoryItem:(PersistentSearchResultHistoryItem *)arg1 ;
-(void)setAddressBookItem:(PersistentAddressBookAddress *)arg1 ;
-(PersistentSearchResultHistoryItem *)searchResultHistoryItem;
-(PersistentAddressBookAddress *)addressBookItem;
-(char)hasAddressBookItem;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(void)setItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

