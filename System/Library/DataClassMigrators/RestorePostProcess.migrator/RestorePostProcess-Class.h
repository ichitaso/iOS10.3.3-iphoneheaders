/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/RestorePostProcess.migrator/RestorePostProcess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface RestorePostProcess : DataClassMigrator {

	float _estimatedDuration;
	float _progress;

}
-(void)_installAppPlaceholders;
-(void)_installAppPlaceholderAtPath:(id)arg1 ;
-(void)_registerSafeHarbors;
-(void)_processRestoredApps;
-(void)_resetTetheredSyncAnchors;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end
