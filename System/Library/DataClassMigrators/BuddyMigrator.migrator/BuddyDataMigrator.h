/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/BuddyMigrator.migrator/BuddyMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface BuddyDataMigrator : DataClassMigrator {

	char _done;
	char _didRestore;
	char _didUpgrade;
	char _isMultiUser;
	char _runUpgradeMiniBuddies;
	unsigned _storedBuddyMigratorVersion;

}
-(char)_performiOSMigration;
-(unsigned)_storedBuddyMigratorVersion;
-(void)_performHSA2Migration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end

