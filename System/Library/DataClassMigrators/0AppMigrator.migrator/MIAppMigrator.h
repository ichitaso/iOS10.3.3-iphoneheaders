/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <0AppMigrator/0AppMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface MIAppMigrator : DataClassMigrator {

	NSArray* _itemsToMigrate;
	NSDictionary* _harborMap;
	NSMutableDictionary* _groupContainerMap;
	unsigned long long _countItemsMigrated;

}

@property (assign) unsigned long long countItemsMigrated;                            //@synthesize countItemsMigrated=_countItemsMigrated - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToMigrate;                             //@synthesize itemsToMigrate=_itemsToMigrate - In the implementation block
@property (nonatomic,readonly) NSDictionary * harborMap;                             //@synthesize harborMap=_harborMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * groupContainerMap;              //@synthesize groupContainerMap=_groupContainerMap - In the implementation block
-(NSDictionary *)harborMap;
-(NSArray *)itemsToMigrate;
-(NSMutableDictionary *)groupContainerMap;
-(char)_moveAllItemsInGroupContainerURL:(id)arg1 toGroupContainerURL:(id)arg2 ;
-(char)_writeIconForBundle:(CFBundleRef)arg1 toURL:(id)arg2 ;
-(char)_stageAndInstallPlaceholderForBundleAtURL:(id)arg1 withIdentifier:(id)arg2 inContainerURL:(id)arg3 ;
-(char)_migrateDataContainerForIdentifier:(id)arg1 fromURL:(id)arg2 toURL:(id)arg3 ;
-(char)_stageAndInstallBundleAtURL:(id)arg1 withIdentifier:(id)arg2 andVPNPluginAtURL:(id)arg3 inContainerURL:(id)arg4 ;
-(char)_migrateGroupContainersForIdentifier:(id)arg1 ;
-(char)_containerHasMissedItems:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_bundleIdentifierForBundle:(id)arg1 ;
-(id)_loadAndValidateMigrationMarkerAtURL:(id)arg1 ;
-(unsigned long long)countItemsMigrated;
-(void)setCountItemsMigrated:(unsigned long long)arg1 ;
-(id)_introspectContainer:(id)arg1 orderResultEarly:(char*)arg2 ;
-(char)_migrateContainerWithInfo:(id)arg1 ;
-(char)_migrateSafeHarbors;
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end

