/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NBBackup, NRDevice, NBManager, NSArray;

@interface COSBackupManager : NSObject {

	char _isCompatibleBackupListCurrent;
	char _isCompatiblePairedDeviceListCurrent;
	NSString* _minWatchOSVersion;
	NBBackup* _backupRestoredFrom;
	NRDevice* _deviceRestoredFrom;
	NRDevice* _targetDevice;
	NBManager* _backupController;
	NSArray* _localBackups;
	NSArray* _compatibleBackups;
	NSArray* _compatiblePairedDevices;

}

@property (nonatomic,retain) NBManager * backupController;                          //@synthesize backupController=_backupController - In the implementation block
@property (nonatomic,retain) NSArray * localBackups;                                //@synthesize localBackups=_localBackups - In the implementation block
@property (nonatomic,retain) NSArray * compatibleBackups;                           //@synthesize compatibleBackups=_compatibleBackups - In the implementation block
@property (nonatomic,retain) NSArray * compatiblePairedDevices;                     //@synthesize compatiblePairedDevices=_compatiblePairedDevices - In the implementation block
@property (assign,nonatomic) char isCompatibleBackupListCurrent;                    //@synthesize isCompatibleBackupListCurrent=_isCompatibleBackupListCurrent - In the implementation block
@property (assign,nonatomic) char isCompatiblePairedDeviceListCurrent;              //@synthesize isCompatiblePairedDeviceListCurrent=_isCompatiblePairedDeviceListCurrent - In the implementation block
@property (nonatomic,retain) NBBackup * backupRestoredFrom;                         //@synthesize backupRestoredFrom=_backupRestoredFrom - In the implementation block
@property (nonatomic,retain) NRDevice * deviceRestoredFrom;                         //@synthesize deviceRestoredFrom=_deviceRestoredFrom - In the implementation block
@property (nonatomic,retain) NRDevice * targetDevice;                               //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NSString * minWatchOSVersion;                          //@synthesize minWatchOSVersion=_minWatchOSVersion - In the implementation block
@property (nonatomic,readonly) char shouldOfferToRestore; 
@property (nonatomic,readonly) NSArray * backups; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (nonatomic,readonly) char didRestore; 
@property (nonatomic,readonly) NSString * deviceNameToRestore; 
+(id)sharedBackupManager;
-(char)shouldOfferToRestore;
-(void)setMinWatchOSVersion:(NSString *)arg1 ;
-(NSArray *)backups;
-(void)restoreFromBackup:(id)arg1 toDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)restoreFromDevice:(id)arg1 toDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)didRestore;
-(void)updateCompatibleBackupListIfNeeded;
-(void)updateCompatiblePairedDeviceListIfNeeded;
-(void)reloadBackups;
-(NSString *)deviceNameToRestore;
-(NSString *)minWatchOSVersion;
-(NBBackup *)backupRestoredFrom;
-(void)setBackupRestoredFrom:(NBBackup *)arg1 ;
-(NRDevice *)deviceRestoredFrom;
-(void)setDeviceRestoredFrom:(NRDevice *)arg1 ;
-(NBManager *)backupController;
-(void)setBackupController:(NBManager *)arg1 ;
-(NSArray *)localBackups;
-(void)setLocalBackups:(NSArray *)arg1 ;
-(NSArray *)compatibleBackups;
-(void)setCompatibleBackups:(NSArray *)arg1 ;
-(NSArray *)compatiblePairedDevices;
-(void)setCompatiblePairedDevices:(NSArray *)arg1 ;
-(char)isCompatibleBackupListCurrent;
-(void)setIsCompatibleBackupListCurrent:(char)arg1 ;
-(char)isCompatiblePairedDeviceListCurrent;
-(void)setIsCompatiblePairedDeviceListCurrent:(char)arg1 ;
-(id)init;
-(void)reset;
-(void)setTargetDevice:(NRDevice *)arg1 ;
-(NSArray *)pairedDevices;
-(NRDevice *)targetDevice;
@end

