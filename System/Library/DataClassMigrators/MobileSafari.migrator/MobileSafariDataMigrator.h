/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MobileSafariDataMigrator : DataClassMigrator {

	unsigned _migrationLevel;

}
-(char)_migrateAuthenticationCredentials;
-(void)_clearReadingListFetcherPendingChanges;
-(char)_symlinkCookieStorage;
-(void)_migrateCloudTabsMetadataOutOfContainer;
-(void)_migrateAutofillContactInfo;
-(void)_migrateHistory;
-(void)_assertSafariContainerPath;
-(char)_migrateSearchSettings;
-(char)_migrateAutofillPasswordAndPreferences;
-(void)_updateCloudTabsEnabledDefaultFromAccounts;
-(void)_removeBookmarksPanelStatePreferences;
-(void)_removeAutocompleteOffBypassSettings;
-(void)_removeObsoleteDirectories;
-(void)_migrateLegacyWebKitWebsiteData;
-(void)_migrateWebClipIconFilesToClassD;
-(void)_migrateItemFromPath:(id)arg1 toPath:(id)arg2 ;
-(void)_migrateLibraryFilesIntoContainer;
-(void)_migrateFilesToCorrectProtectionClass;
-(char)_migratePreWhitetailSuspendedStateFile;
-(void)_migrateFilesToProtectionClassCFromRootDirectory:(id)arg1 ignorePaths:(id)arg2 ;
-(void)_migrateLegacyWebKitPreferences;
-(id)init;
-(id)dataClassName;
-(char)performMigration;
@end

