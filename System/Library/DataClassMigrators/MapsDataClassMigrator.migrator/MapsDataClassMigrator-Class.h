/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class PersistenceManager;

@interface MapsDataClassMigrator : DataClassMigrator {

	PersistenceManager* _persistenceManager;

}
-(char)_migrateToTellurideFCSSearchResults;
-(char)_migrateAllDefaultsToOkemoContainer;
-(char)_moveItemAtPathIfExists:(id)arg1 toPathCreatingIntermediateDirectories:(id)arg2 ;
-(char)_migrateHistory;
-(void)_deleteOldHistory;
-(id)_oldHistoryFilePath;
-(void)_changeSearchResultTypesToInnsbruckTypesIfNeeded:(id)arg1 ;
-(char)_migrateDictionaryBookmarks;
-(char)_migrateToTellurideFCSBookmarks;
-(char)_migrateToInnsbruckBookmarks;
-(char)_migrateToOkemoBookmarks;
-(void)_reimportAllFavoritesInSpotlight;
-(char)_migratePreInnsbruckHistory;
-(char)_migratePreOkemoHistory;
-(void)_setDefaultsObjectInContainer:(id)arg1 forKey:(id)arg2 ;
-(id)_mapsPaths;
-(char)_migrateOkemoDefaults;
-(id)_persistenceManager;
-(id)_defaultsObjectInContainerForKey:(id)arg1 ;
-(char)_migratePreSundanceHistory;
-(id)_oldDirectionsFilePath;
-(char)_migratePreProtoBufferSearchResults;
-(char)_migrateFiles;
-(char)_removeOldSensitiveGeoServicesData;
-(char)_moveTraceFilesToNewNavdCache;
-(char)_migrateOrphanedNetworkDefaults;
-(char)_migrateOrphanedWatchResources;
-(char)_migratePreTellurideDirections;
-(char)_migratePreSundanceDirections;
-(void)_deleteOldDirections;
-(char)_migratePathsIntoContainer;
-(char)_migrateDirections;
-(char)_migrateBookmarks;
-(char)_migrateSearchResults;
-(char)_migrateDefaults;
-(id)dataClassName;
-(char)performMigration;
@end
