/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUManager, SUAutoInstallManager;

@interface SUBackgroundTaskAgent : NSObject {

	SUManager* _manager;
	SUAutoInstallManager* _autoInstallManager;

}
+(id)sharedInstance;
-(void)_initBackgroundTaskAgent;
-(void)_handleBackgroundAgentAutoScan:(const char*)arg1 parameters:(id)arg2 ;
-(void)_handleAutodownloadRetryTask:(id)arg1 ;
-(void)_handleAutodownloadWifiPeriodEndTask:(id)arg1 ;
-(void)_handleAutoInstallExpirationTask:(const char*)arg1 parameters:(id)arg2 ;
-(void)_handleAutoInstallUnlockStartTask:(const char*)arg1 parameters:(id)arg2 ;
-(void)_printDetailsForJob:(const char*)arg1 ;
-(void)scheduleDefaultAutoScanTaskIfNecessary;
-(void)scheduleEmergencyAutoScanTaskIfNecessary;
-(void)scheduleAutodownloadRetryTaskIfNecessary;
-(void)scheduleAutodownloadWifiPeriodEndTaskIfNecessary;
-(void)cancelDefaultAutoScanTask;
-(void)cancelEmergencyAutoScanTask;
-(void)cancelAutodownloadRetryTask;
-(void)cancelAutodownloadWifiPeriodEndTask;
-(void)scheduleAutoInstallExpirationTask:(id)arg1 ;
-(void)scheduleAutoInstallUnlockWindowStartTask:(id)arg1 ;
-(void)scheduleAutoInstallStartInstallTask:(id)arg1 ;
-(void)cancelAutoInstallWindowEndTask;
-(void)cancelAutoInstallUnlockWindowStartTask;
-(void)cancelAutoInstallStartInstallTask;
-(void)_scheduleAutoScanForTypeIfNecessary:(int)arg1 jobName:(const char*)arg2 ;
-(void)_addPowerRequirementsToRequest:(id)arg1 ;
-(void)scheduleAutodownloadRetryTaskFromDate:(id)arg1 toDate:(id)arg2 policy:(id)arg3 ;
-(void)scheduleAutodownloadWifiPeriodEndTask;
-(void)scheduleAutoInstallTaskAtDate:(id)arg1 jobName:(const char*)arg2 needsNetwork:(char)arg3 needsPower:(char)arg4 ;
-(void)scheduleAutoInstallStartInstallTaskWithDate:(id)arg1 ;
-(void)_handleAutoInstallStartInstall:(const char*)arg1 parameters:(id)arg2 ;
-(void)_scheduleNewBackgroundAgentAutoScanForType:(int)arg1 jobName:(const char*)arg2 previousStartDate:(id)arg3 previousEndDate:(id)arg4 ;
-(void)scheduleAnyTasksIfNecessary;
-(void)cancelAllAutoscanTasks;
-(void)cancelAllAutodownloadTasks;
-(void)scheduleAllAutoInstallUpdateTasks:(id)arg1 ;
-(void)cancelAllAutoInstallTasks;
-(id)init;
-(void)dealloc;
-(void)cancelAllTasks;
@end

