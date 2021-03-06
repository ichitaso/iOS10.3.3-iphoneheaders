/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsInternalSyncItem.h>

@protocol MapsSynced;
@class MapsSyncManager, NSString, NSDictionary;

@interface MapsSyncedItem : NSObject <MapsInternalSyncItem> {

	MapsSyncManager* _manager;
	id<MapsSynced> _clientItem;
	NSString* _identifier;
	double _position;
	char _shouldSync;

}

@property (assign,nonatomic,__weak) MapsSyncManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) id<MapsSynced> clientItem; 
@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double position;                               //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned clientPosition; 
@property (nonatomic,readonly) NSString * cloudKey; 
@property (nonatomic,readonly) NSDictionary * cloudData; 
@property (nonatomic,readonly) char shouldSync; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)positionBetweenItem:(id)arg1 andItem:(id)arg2 ;
-(char)updateFromCloudData:(id)arg1 newlyCreated:(char)arg2 positionChanged:(char*)arg3 ;
-(id<MapsSynced>)clientItem;
-(unsigned)clientPosition;
-(char)updateFromSyncData:(id)arg1 ;
-(NSString *)cloudKey;
-(void)setClientItem:(id<MapsSynced>)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(void)setPosition:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)position;
-(id)initWithManager:(id)arg1 ;
-(char)shouldSync;
-(MapsSyncManager *)manager;
-(void)setManager:(MapsSyncManager *)arg1 ;
-(id)syncData;
-(NSDictionary *)cloudData;
@end

