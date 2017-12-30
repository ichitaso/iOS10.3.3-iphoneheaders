/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MCMMigrationStatus : NSObject {

	NSMutableDictionary* _migrationInfo;

}

@property (nonatomic,retain) NSMutableDictionary * migrationInfo;              //@synthesize migrationInfo=_migrationInfo - In the implementation block
+(id)currentBuildVersion;
-(void)_readStatusFromMarkerFileWithName:(id)arg1 andSetAsType:(id)arg2 ;
-(void)_removeMarkerFileWithName:(id)arg1 ;
-(void)_migrateFromManyMarkerFilesToOne;
-(id)_readMigrationStatusFromDisk;
-(char)_writeMigrationStatusToDisk;
-(char)hasMigrationOccurredForType:(id)arg1 ;
-(void)setMigrationCompleteForType:(id)arg1 ;
-(void)writeCurrentBuildInfoToDisk;
-(char)isBuildUpgrade;
-(NSMutableDictionary *)migrationInfo;
-(void)setMigrationInfo:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
