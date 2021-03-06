/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/VoiceMemos.syncBundle/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirFair/ATClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface VoiceMemosSyncClient : NSObject <ATClient> {

	NSObject*<OS_dispatch_queue> _recordingsModelQueue;
	NSMutableArray* _pendingAssets;
	NSMutableDictionary* _reconciledInsertOperationInfoByITunesPID;
	NSMutableDictionary* _reconciledUpdatedLabelsByITunesPID;
	NSMutableSet* _reconciledClientPIDsToDelete;
	NSMutableSet* _resetSyncClientPIDsToDelete;
	NSMutableSet* _downloadedAssets;
	NSMutableArray* _preparedCompositionControllers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_disableOrphanRecovery;
-(void)_generateAssetManifestPlist;
-(void)_enableAndPerformOrphanRecovery;
-(void)_onQueueProcessSyncManifest;
-(void)_updateReconciledOperationsByProcessingSyncOperation:(id)arg1 ;
-(id)_displayedCreationDateForInsertingAsset:(id)arg1 ;
-(id)_modificationDateForInsertingAsset:(id)arg1 ;
-(id)init;
-(id)supportedDataclasses;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(char)arg2 withError:(id)arg3 ;
-(void)syncEndedWithSuccess:(char)arg1 ;
-(char)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)restoreEndedWithError:(id)arg1 ;
-(id)currentSyncAnchor;
-(char)reconcileRestoreWithError:(id*)arg1 ;
-(void)assetTransferEndedWithSuccess:(char)arg1 ;
-(char)shouldBackgroundRestorePath:(id)arg1 backupManager:(id)arg2 ;
-(void)clearSyncData;
-(id)installedAssetMetrics;
@end

