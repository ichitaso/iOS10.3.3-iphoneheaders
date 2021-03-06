/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/UMUserSwitchStakeholder.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSLock, NSMutableSet, NSXPCConnection, NSMutableArray, NSCountedSet, ISOperationQueue, NSString;

@interface ApplicationWorkspace : NSObject <UMUserSwitchStakeholder> {

	NSMutableDictionary* _appProgress;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSLock* _lock;
	NSMutableSet* _odrDownloads;
	NSMutableDictionary* _odrProgress;
	NSMutableDictionary* _odrWaitBlocks;
	NSXPCConnection* _odrXPCConnection;
	NSMutableArray* _operations;
	NSCountedSet* _pendingInstalls;
	ISOperationQueue* _placeholderIconOperationQueue;
	NSMutableArray* _syncWaitBlocks;
	NSMutableDictionary* _waitBlocks;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)keepSafeHarborDataForBundleID:(id)arg1 ;
+(id)defaultWorkspace;
-(void)applyWorkspaceChanges:(id)arg1 ;
-(char)shouldModifyQuota:(id)arg1 ;
-(char)isInstalledApp:(id)arg1 ;
-(char)isRemovedSystemApp:(id)arg1 ;
-(char)restoreRemovedSystemApp:(id)arg1 ;
-(void)_stopObservingODRProgress:(id)arg1 ;
-(void)uninstallPlaceholderForApplicationHandle:(id)arg1 ;
-(void)cancelOnDemandResourceDownloadsForApplicationHandle:(id)arg1 ;
-(void)markFailedPlaceholderForApplicationHandle:(id)arg1 ;
-(void)pauseOnDemandResourceDownloadsForApplicationHandle:(id)arg1 ;
-(void)finishInstallOfApplicationHandle:(id)arg1 ;
-(void)installPlaceholderForApplicationHandle:(id)arg1 ;
-(void)updatePlaceholderForApplicationHandle:(id)arg1 ;
-(char)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1 ;
-(void)_incrementPendingInstallsForDownloadIdentifier:(long long)arg1 ;
-(void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1 ;
-(void)_decrementPendingInstallsForDownloadIdentifier:(long long)arg1 ;
-(void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1 ;
-(void)_removeApplicationDownloadProgressForApplicationHandle:(id)arg1 ;
-(void)_removeODRProgressForApplicationHandle:(id)arg1 ;
-(void)_removeOperationsForDownloadIdentifier:(long long)arg1 ;
-(void)_addOperationAtBeginning:(id)arg1 ;
-(void)_performNextOperation;
-(char)_isInstallingForDownloadIdentifier:(long long)arg1 ;
-(id)_copyCombinedApplicationProgress:(id)arg1 andODRProgress:(id)arg2 forApplicationHandle:(id)arg3 ;
-(void)_addProgressOperation:(id)arg1 ;
-(void)_fireWaitBlocksForSyncTermination;
-(void)_addOnDemandOperationWithApplicationHandle:(id)arg1 action:(int)arg2 ;
-(char)_removeODRDownloadsForApplicationHandle:(id)arg1 ;
-(void)_fireODRWaitBlocksForApplicationHandle:(id)arg1 ;
-(char)_isRunningODRDownloadsForApplicationHandle:(id)arg1 ;
-(id)_applicationHandleForODRProgress:(id)arg1 ;
-(void)_cleanupODR;
-(void)_updatePlaceholderWithODRProgressForApplicationHandle:(id)arg1 ;
-(void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_odrXPCConnection;
-(void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2 ;
-(id)_thumbnailDownloadOperationForDownloadID:(long long)arg1 ;
-(void)_observeODRProgress:(id)arg1 forApplicationHandle:(id)arg2 ;
-(void)addPlaceholderThumbnailOperation:(id)arg1 ;
-(void)beginExternalInstallationForDownloadIdentifier:(long long)arg1 ;
-(void)cancelPlaceholderInstallationForDownloadIdentifier:(long long)arg1 ;
-(void)endExternalInstallationForDownloadIdentifier:(long long)arg1 ;
-(char)isDownloadingOrInstallingForItemIdentifier:(id)arg1 ;
-(void)replayIncompleteOperations;
-(void)resetProgressForApplicationHandle:(id)arg1 ;
-(void)restorePlaceholderForApplicationHandle:(id)arg1 ;
-(void)setIconData:(id)arg1 forApplicationHandle:(id)arg2 ;
-(void)suspendQuotas;
-(void)updatePlaceholderWithApplicationProgress:(id)arg1 ;
-(void)waitForSyncBubbleToTerminateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)downloadOnDemandResourceForApplicationHandle:(id)arg1 ;
-(void)onDemandResourceDownloadsCancelledForApplicationHandle:(id)arg1 withError:(id)arg2 ;
-(void)onDemandResourceDownloadsCompletedForApplicationHandle:(id)arg1 withError:(id)arg2 ;
-(void)onDemandResourceDownloadsStartedForApplicationHandle:(id)arg1 ;
-(void)resumeOnDemandResourceDownloadsForApplicationHandle:(id)arg1 ;
-(char)shouldResumeOnDemandResourceDownloadsForApplicationHandle:(id)arg1 ;
-(void)waitForOnDemandResourceDownloadsForApplicationHandle:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)sinfPathForBundleID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resumeQuotas;
-(void)willSwitchUser;
-(char)isMultiUser;
@end

