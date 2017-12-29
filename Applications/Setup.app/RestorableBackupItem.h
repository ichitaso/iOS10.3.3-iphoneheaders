/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MBBackup, MBSnapshot, NSString;

@interface RestorableBackupItem : NSObject {

	MBBackup* _backup;
	MBSnapshot* _snapshot;
	NSString* _pendingBackupUDID;
	unsigned _pendingSnapshotID;

}

@property (nonatomic,retain) MBBackup * backup;                       //@synthesize backup=_backup - In the implementation block
@property (nonatomic,retain) MBSnapshot * snapshot;                   //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,copy) NSString * pendingBackupUDID;              //@synthesize pendingBackupUDID=_pendingBackupUDID - In the implementation block
@property (assign,nonatomic) unsigned pendingSnapshotID;              //@synthesize pendingSnapshotID=_pendingSnapshotID - In the implementation block
+(id)restorableBackupItemWithBackup:(id)arg1 snapshot:(id)arg2 ;
+(id)restorableBackupItemWithPendingBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 ;
-(void)setBackup:(MBBackup *)arg1 ;
-(void)setPendingBackupUDID:(NSString *)arg1 ;
-(void)setPendingSnapshotID:(unsigned)arg1 ;
-(MBBackup *)backup;
-(NSString *)pendingBackupUDID;
-(unsigned)pendingSnapshotID;
-(char)_systemVersion:(id)arg1 isHigherThanSystemVersion:(id)arg2 ;
-(char)installableWithUpdateToSystemVersion:(id)arg1 ;
-(id)deviceInfoString;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(MBSnapshot *)snapshot;
-(void)setSnapshot:(MBSnapshot *)arg1 ;
-(char)isCompatible;
-(id)backupUDID;
-(unsigned)snapshotID;
-(id)dateString;
-(char)isThisDevice;
@end
