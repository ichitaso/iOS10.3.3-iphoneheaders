/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SharedDataMigration : NSObject
+(id)_userCachesDirectoryPath;
+(char)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(char)arg3 ;
+(void)migratePersistentStorageDefaults;
+(char)migrateRecentSearches;
+(char)migrateThumbnails;
@end
