/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/LegacyHistoryPersistentItem.h>
#import <MapsDataClassMigrator/RecentsItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SearchResult, NSString;

@interface PersistentSearchResultHistoryItem : PBCodable <LegacyHistoryPersistentItem, RecentsItem, NSCopying> {

	SearchResult* _searchResult;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasSearchResult; 
@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
-(id)initWithPersistedHistoryRepresentation:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasSearchResult;
-(SearchResult *)searchResult;
-(void)setSearchResult:(SearchResult *)arg1 ;
@end

