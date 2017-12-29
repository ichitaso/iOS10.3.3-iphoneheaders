/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICBackup : NSObject
+(char)loadArchive:(id)arg1 error:(id*)arg2 ;
+(id)createArchive:(id*)arg1 ;
+(id)unarchiverAllowedClasses;
+(id)backupsParentDirectoryURL;
+(id)saveBackupToParentDirectoryURL:(id)arg1 ;
+(void)purgeOldBackups;
+(id)saveBackupToParentDirectoryURL:(id)arg1 atomically:(char)arg2 ;
+(id)backupNameForDate:(id)arg1 ;
+(id)allObjectsToSaveInContext:(id)arg1 ;
+(id)dictionaryFromCloudObject:(id)arg1 savingAssetsToDirectory:(id)arg2 ;
+(void)sanitizeAndCopyAssetsForSavingFromRecord:(id)arg1 toAssetsDirectoryURL:(id)arg2 ;
+(void)loadBackupWithObjectDictionaries:(id)arg1 assetsDirectoryURL:(id)arg2 ;
+(id)recordFromObjectDictionary:(id)arg1 assetsDirectoryURL:(id)arg2 ;
+(void)sanitizeAssetsForLoadingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 ;
+(void)sanitizeAssetsForSavingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 prefix:(id)arg3 ;
+(char)hardLinkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(char)loadBackupFromURL:(id)arg1 ;
+(char)isValidBackupURL:(id)arg1 ;
+(id)nameFromBackupAtURL:(id)arg1 ;
+(id)saveNewBackup;
+(char)createDirectoryAtURL:(id)arg1 ;
@end

