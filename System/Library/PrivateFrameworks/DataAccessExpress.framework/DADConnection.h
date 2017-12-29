/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface DADConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _muckingWithConn;
	NSObject*<OS_dispatch_queue> _muckingWithInFlightCollections;
	NSMutableSet* _accountIdsWithAlreadyResetCerts;
	NSMutableSet* _accountIdsWithAlreadyResetThrottleTimers;
	/*^block*/id _statusReportBlock;
	NSMutableDictionary* _inFlightSearchQueries;
	NSMutableDictionary* _inFlightFolderChanges;
	NSMutableDictionary* _inFlightAttachmentDownloads;
	NSMutableDictionary* _inFlightCalendarAvailabilityRequests;
	NSMutableDictionary* _inFlightCalendarDirectorySearches;
	NSMutableDictionary* _inFlightShareRequests;
	NSMutableDictionary* _inFlightOofSettingsRequests;
	char _registered;

}

@property (assign,nonatomic) char registered;              //@synthesize registered=_registered - In the implementation block
+(id)sharedConnection;
+(void)setShouldIgnoreAccountChanges;
-(id)init;
-(void)dealloc;
-(id)_init;
-(id)_connection;
-(char)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(char)arg4 ;
-(void)_tearDownInFlightObjects;
-(void)_serverDiedWithReason:(id)arg1 ;
-(id)decodedErrorFromData:(id)arg1 ;
-(void)reallyRegisterForInterrogation;
-(void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(char)arg3 ;
-(void)_requestDaemonChangeAgentMonitoringStatus:(char)arg1 waitForReply:(char)arg2 ;
-(void)_resetThrottleTimersForAccountId:(id)arg1 ;
-(char)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(int)arg3 isUserRequested:(char)arg4 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2 ;
-(char)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(char)arg3 ;
-(void)_registerForAppResumedNotification;
-(void)resetTimersAndWarnings;
-(void)_policyKeyChanged:(id)arg1 ;
-(void)_logDataAccessStatus:(id)arg1 ;
-(void)_serverContactsSearchQueryFinished:(id)arg1 ;
-(void)_folderChangeFinished:(id)arg1 ;
-(void)_getStatusReportsFromClient:(id)arg1 ;
-(void)_downloadProgress:(id)arg1 ;
-(void)_downloadFinished:(id)arg1 ;
-(void)_shareResponseFinished:(id)arg1 ;
-(void)_oofSettingsRequestsFinished:(id)arg1 ;
-(void)_calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(void)_calendarAvailabilityRequestFinished:(id)arg1 ;
-(void)_calendarDirectorySearchReturnedResults:(id)arg1 ;
-(void)_calendarDirectorySearchFinished:(id)arg1 ;
-(char)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(id)currentPolicyKeyForAccountID:(id)arg1 ;
-(void)requestDaemonStartMonitoringAgents;
-(void)requestDaemonStopMonitoringAgents;
-(void)requestDaemonStartMonitoringAgents_Sync;
-(void)_requestDaemonStopMonitoringAgents_Sync;
-(void)removeStoresForAccountWithID:(id)arg1 ;
-(void)requestDaemonShutdown;
-(char)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 ;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 ;
-(id)statusReports;
-(void)handleURL:(id)arg1 ;
-(id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(char)arg3 ;
-(char)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(char)arg3 ;
-(char)registerForInterrogationWithBlock:(/*^block*/id)arg1 ;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 ;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(char)arg3 isUserRequested:(char)arg4 ;
-(char)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)cancelServerContactsSearch:(id)arg1 ;
-(char)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(char)arg3 ;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_dispatchMessage:(id)arg1 ;
-(void)_foldersUpdated:(id)arg1 ;
-(void)fillOutCurrentEASTimeZoneInfo;
-(char)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(char)arg3 ;
-(char)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(char)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(char)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(char)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)reportFolderItemsSyncSuccess:(char)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned)arg3 andAccountWithID:(id)arg4 ;
-(char)requestPolicyUpdateForAccountID:(id)arg1 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(char)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(id)activeSyncDeviceIdentifier;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)respondToSharedCalendarInvite:(int)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

