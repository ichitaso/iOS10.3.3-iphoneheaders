/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationWorkspaceRemoteObserver, NSMutableDictionary, LSInstallProgressList, LSInstallProgressDelegate, NSXPCConnection;

@interface LSApplicationWorkspace : NSObject {

	char _enhancedAppValidationEnabled;
	LSApplicationWorkspaceRemoteObserver* _remoteObserver;
	NSMutableDictionary* _createdInstallProgresses;
	LSInstallProgressList* _observedInstallProgresses;
	LSInstallProgressDelegate* _delegateProxy;
	NSXPCConnection* _connection;

}

@property (readonly) NSXPCConnection * connection;                                       //@synthesize connection=_connection - In the implementation block
@property (readonly) LSInstallProgressDelegate * delegateProxy;                          //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (readonly) LSInstallProgressList * observedInstallProgresses;                  //@synthesize observedInstallProgresses=_observedInstallProgresses - In the implementation block
@property (readonly) NSMutableDictionary * createdInstallProgresses;                     //@synthesize createdInstallProgresses=_createdInstallProgresses - In the implementation block
@property (readonly) LSApplicationWorkspaceRemoteObserver * remoteObserver;              //@synthesize remoteObserver=_remoteObserver - In the implementation block
+(id)activeManagedConfigurationRestrictionUUIDs;
+(id)defaultWorkspace;
+(id)callbackQueue;
-(char)establishConnection;
-(id)applicationProxiesWithPlistFlags:(unsigned long)arg1 bundleFlags:(unsigned long long)arg2 ;
-(id)applicationsForUserActivityType:(id)arg1 limit:(unsigned)arg2 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(char)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 ;
-(void)enumerateBundlesOfType:(unsigned)arg1 legacySPI:(char)arg2 block:(/*^block*/id)arg3 ;
-(void)enumerateApplicationsOfType:(unsigned)arg1 legacySPI:(char)arg2 block:(/*^block*/id)arg3 ;
-(char)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)installProgressForApplication:(id)arg1 withPhase:(unsigned)arg2 ;
-(char)installPhaseFinishedForProgress:(id)arg1 ;
-(void)sendNotificationForApp:(id)arg1 withExtensions:(id)arg2 OperationType:(unsigned)arg3 success:(char)arg4 ;
-(char)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)uninstallSystemApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)clearCreatedProgressForBundleID:(id)arg1 ;
-(char)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2 ;
-(char)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 error:(id*)arg4 ;
-(void)removeInstallProgressForBundleID:(id)arg1 ;
-(LSInstallProgressDelegate *)delegateProxy;
-(void)enumerateApplicationsOfType:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)sendApplicationStateChangedNotificationsFor:(id)arg1 ;
-(char)enhancedAppLoggingEnabled;
-(void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2 ;
-(id)directionsApplications;
-(id)applicationsWithAudioComponents;
-(id)applicationsWithVPNPlugins;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)applicationForUserActivityType:(id)arg1 ;
-(id)applicationForUserActivityDomainName:(id)arg1 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(/*^block*/id)arg4 ;
-(void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)pluginsMatchingQuery:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(void)enumerateApplicationsForSiriWithBlock:(/*^block*/id)arg1 ;
-(char)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2 ;
-(void)sendInstallNotificationForApp:(id)arg1 withPlugins:(id)arg2 ;
-(void)sendUninstallNotificationForApp:(id)arg1 withPlugins:(id)arg2 ;
-(char)installApplication:(id)arg1 withOptions:(id)arg2 ;
-(char)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)registerApplicationDictionary:(id)arg1 ;
-(char)registerApplication:(id)arg1 ;
-(char)unregisterApplication:(id)arg1 ;
-(char)registerPlugin:(id)arg1 ;
-(char)unregisterPlugin:(id)arg1 ;
-(char)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(char)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(char)invalidateIconCache:(id)arg1 ;
-(id)deviceIdentifierForAdvertising;
-(id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2 ;
-(char)_LSPrivateRebuildApplicationDatabasesForSystemApps:(char)arg1 internal:(char)arg2 user:(char)arg3 ;
-(void)_LSPrivateSyncWithMobileInstallation;
-(char)_LSPrivateDatabaseNeedsRebuild;
-(void)_LSSendApplicationIconDidChangeForBundleID:(id)arg1 ;
-(void)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2 ;
-(void)scanForApplicationStateChangesWithWhitelist:(id)arg1 ;
-(NSMutableDictionary *)createdInstallProgresses;
-(LSInstallProgressList *)observedInstallProgresses;
-(id)legacyApplicationProxiesListWithType:(unsigned)arg1 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(/*^block*/id)arg4 ;
-(id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 ;
-(id)applicationsOfType:(unsigned)arg1 ;
-(id)unrestrictedApplications;
-(id)allApplications;
-(id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(char)arg2 ;
-(char)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(char)arg2 error:(id*)arg3 ;
-(char)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2 ;
-(id)URLSchemesOfType:(int)arg1 ;
-(id)publicURLSchemes;
-(id)privateURLSchemes;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(id)URLOverrideForURL:(id)arg1 ;
-(char)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(char)arg2 error:(id*)arg3 ;
-(char)openURL:(id)arg1 ;
-(char)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)allowsAlternateIcons;
-(void)removeObserver:(id)arg1 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5 ;
-(id)deviceIdentifierForVendor;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(char)arg4 userInfo:(id)arg5 delegate:(id)arg6 ;
-(NSXPCConnection *)connection;
-(void)enumerateBundlesOfType:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(char)openSensitiveURL:(id)arg1 withOptions:(id)arg2 ;
-(id)applicationsAvailableForOpeningDocument:(id)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3 ;
-(char)openURL:(id)arg1 withOptions:(id)arg2 ;
-(LSApplicationWorkspaceRemoteObserver *)remoteObserver;
-(id)applicationForOpeningResource:(id)arg1 ;
-(void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2 ;
-(id)placeholderApplications;
-(char)uninstallApplication:(id)arg1 withOptions:(id)arg2 ;
-(char)openApplicationWithBundleID:(id)arg1 ;
-(id)installedPlugins;
-(void)_LSClearSchemaCaches;
-(void)clearAdvertisingIdentifier;
-(id)allInstalledApplications;
-(id)applicationsWithUIBackgroundModes;
-(char)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(char)restoreSystemApplication:(id)arg1 ;
-(void)enumerateBundlesOfType:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)applicationIsInstalled:(id)arg1 ;
-(id)removedSystemApplications;
-(id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2 ;
-(id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)applicationsAvailableForOpeningURL:(id)arg1 ;
@end

