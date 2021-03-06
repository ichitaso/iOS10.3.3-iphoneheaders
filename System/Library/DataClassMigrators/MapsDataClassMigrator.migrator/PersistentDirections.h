/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SearchResult, NSString;

@interface PersistentDirections : PBCodable <NSCopying> {

	SearchResult* _addressEndSearch;
	SearchResult* _addressStartSearch;
	NSString* _endAddress;
	SearchResult* _routeEndSearch;
	SearchResult* _routeStartSearch;
	NSString* _startAddress;
	SearchResult* _userEndSearch;
	SearchResult* _userStartSearch;

}

@property (nonatomic,readonly) char hasStartAddress; 
@property (nonatomic,retain) NSString * startAddress;                        //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,readonly) char hasEndAddress; 
@property (nonatomic,retain) NSString * endAddress;                          //@synthesize endAddress=_endAddress - In the implementation block
@property (nonatomic,readonly) char hasUserStartSearch; 
@property (nonatomic,retain) SearchResult * userStartSearch;                 //@synthesize userStartSearch=_userStartSearch - In the implementation block
@property (nonatomic,readonly) char hasUserEndSearch; 
@property (nonatomic,retain) SearchResult * userEndSearch;                   //@synthesize userEndSearch=_userEndSearch - In the implementation block
@property (nonatomic,readonly) char hasAddressStartSearch; 
@property (nonatomic,retain) SearchResult * addressStartSearch;              //@synthesize addressStartSearch=_addressStartSearch - In the implementation block
@property (nonatomic,readonly) char hasAddressEndSearch; 
@property (nonatomic,retain) SearchResult * addressEndSearch;                //@synthesize addressEndSearch=_addressEndSearch - In the implementation block
@property (nonatomic,readonly) char hasRouteStartSearch; 
@property (nonatomic,retain) SearchResult * routeStartSearch;                //@synthesize routeStartSearch=_routeStartSearch - In the implementation block
@property (nonatomic,readonly) char hasRouteEndSearch; 
@property (nonatomic,retain) SearchResult * routeEndSearch;                  //@synthesize routeEndSearch=_routeEndSearch - In the implementation block
-(char)hasRouteEndSearch;
-(SearchResult *)routeEndSearch;
-(SearchResult *)routeStartSearch;
-(SearchResult *)userEndSearch;
-(char)hasAddressEndSearch;
-(char)hasUserStartSearch;
-(char)hasEndAddress;
-(char)hasRouteStartSearch;
-(char)hasAddressStartSearch;
-(void)setAddressEndSearch:(SearchResult *)arg1 ;
-(void)setUserEndSearch:(SearchResult *)arg1 ;
-(void)setRouteEndSearch:(SearchResult *)arg1 ;
-(void)setRouteStartSearch:(SearchResult *)arg1 ;
-(SearchResult *)addressEndSearch;
-(SearchResult *)addressStartSearch;
-(SearchResult *)userStartSearch;
-(char)hasStartAddress;
-(char)hasUserEndSearch;
-(void)setUserStartSearch:(SearchResult *)arg1 ;
-(void)setAddressStartSearch:(SearchResult *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStartAddress:(NSString *)arg1 ;
-(void)setEndAddress:(NSString *)arg1 ;
-(NSString *)startAddress;
-(NSString *)endAddress;
@end

