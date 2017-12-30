/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppStoreUtility : NSObject
+(void)checkClaimsEstablishingActiveAccounts:(char)arg1 ignoringPreviousClaimAttempts:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)installManagedAppWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 manifestType:(int)arg3 ;
+(void)checkDownloadQueue;
+(void)checkFirstPartyClaimsWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)repairAppWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)restoreDemotedAppsWithBundleIDs:(id)arg1 ;
+(void)checkFirstPartyClaimsWithAuditTokenData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)claimAppsWithPurchase:(id)arg1 ;
+(void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 ;
+(void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 ;
+(void)_checkClaimsForAccountID:(id)arg1 claimStyle:(int)arg2 clientAuditTokenData:(id)arg3 establishActiveAccounts:(char)arg4 ignoresPreviousClaimAttempts:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
+(void)sendSoftwareDownloads:(id)arg1 withReason:(id)arg2 forClientID:(id)arg3 manifestType:(int)arg4 ;
+(id)_newManifestWithManifestType:(int)arg1 ;
+(void)_addDownloads:(id)arg1 toManifest:(id)arg2 forClientID:(id)arg3 ;
+(void)_sendSoftwareManifest:(id)arg1 withReason:(id)arg2 ;
+(id)_newRequestWithManifest:(id)arg1 ;
+(void)hidePendingUpdatesBadge;
+(void)reloadUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
@end
