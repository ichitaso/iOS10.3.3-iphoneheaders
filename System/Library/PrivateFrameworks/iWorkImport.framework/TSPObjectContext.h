/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileCoordinatorDelegate.h>
#import <iWorkImport/TSPObjectDelegate.h>
#import <iWorkImport/TSPLazyReferenceDelegate.h>
#import <iWorkImport/TSPSupportDirectoryDelegate.h>
#import <iWorkImport/TSPDocumentResourceDownloader.h>
#import <iWorkImport/TSPPassphraseConsumer.h>

@protocol OS_dispatch_queue, OS_dispatch_group, TSPObjectContextDelegate;
@class NSString, NSData, SFUCryptoKey, NSURL, TSPPackage, TSPDocumentProperties, NSMapTable, TSPObjectUUIDMap, TSPDocumentRevision, NSObject, NSRecursiveLock, TSPDocumentResourceDataProvider, NSProgress, TSPDocumentSaveOperationState, TSPPackageWriteCoordinator, NSHashTable, TSUTemporaryDirectory, TSPObject, NSSet, TSPRegistry, TSPComponentManager, TSPDataManager, TSPDataDownloadManager, TSPDocumentResourceManager, TSPSupportManager, TSPObjectContainer, TSPDocumentMetadata, TSPSupportMetadata, NSUUID;

@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer> {

	Aq _lastObjectIdentifier;
	Aq _modifyObjectToken;
	Ai _modifyObjectCount;
	unsigned _mode;
	SFUCryptoKey* _decryptionKey;
	NSURL* _documentURL;
	TSPPackage* _documentPackage;
	TSPPackage* _supportPackage;
	NSURL* _supportURL;
	TSPDocumentProperties* _documentProperties;
	NSMapTable* _objects;
	TSPObjectUUIDMap* _objectUUIDMap;
	TSPDocumentRevision* _documentRevision;
	int _preferredPackageType;
	NSObject*<OS_dispatch_queue> _objectsQueue;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSRecursiveLock* _readLock;
	NSObject*<OS_dispatch_queue> _documentStateQueue;
	NSObject*<OS_dispatch_queue> _dataAttributesQueue;
	NSObject*<OS_dispatch_queue> _loadObserversQueue;
	NSObject*<OS_dispatch_queue> _runLoadObserversQueue;
	NSObject*<OS_dispatch_queue> _runLoadObserversForKnownObjectQueue;
	NSObject*<OS_dispatch_queue> _documentResourceDataProviderQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	TSPDocumentResourceDataProvider* _documentResourceDataProvider;
	NSProgress* _nextSaveProgress;
	TSPDocumentSaveOperationState* _saveOperationState;
	TSPPackageWriteCoordinator* _packageWriteCoordinator;
	NSHashTable* _objectsToIgnoreModifications;
	NSHashTable* _objectModifyDelegates;
	char _isWaitingForEndSave;
	NSObject*<OS_dispatch_group> _pendingEndSaveGroup;
	NSObject*<OS_dispatch_group> _outstandingReadsGroup;
	NSObject*<OS_dispatch_queue> _temporaryDirectoryQueue;
	TSUTemporaryDirectory* _temporaryDirectory;
	unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *> > >* _loadObservers;
	NSObject*<OS_dispatch_queue> _asynchronousObjectModifierQueue;
	int _suspendAsynchronousObjectModifiersCount;
	NSHashTable* _asynchronousObjectModifiers;
	NSHashTable* _suspendedAsynchronousObjectModifiers;
	TSPObject* _supportObject;
	TSPPackageWriteCoordinator* _supportWriteCoordinator;
	struct {
		unsigned delegateRespondsToAdditionalDocumentPropertiesForWrite : 1;
		unsigned delegateRespondsToAdditionalDocumentSupportPropertiesForWrite : 1;
		unsigned delegateRespondsToDocumentPasswordHintForWrite : 1;
		unsigned delegateRespondsToPackageDataForWrite : 1;
		unsigned delegateRespondsToAreNewExternalReferencesToDataAllowed : 1;
		unsigned delegateRespondsToAreExternalReferencesToDataAllowedAtURL : 1;
		unsigned delegateRespondsToBaseUUIDForObjectUUID : 1;
		unsigned delegateRespondsToPreserveDocumentRevisionIdentifierForSaveURL : 1;
		unsigned delegateRespondsToFilePresenter : 1;
		unsigned delegateRespondsToSupportDirectoryURLReturningIsUnique : 1;
		unsigned delegateRespondsToSupportDirectoryURL : 1;
		unsigned delegateRespondsToIgnoreDocumentSupport : 1;
		unsigned delegateRespondsToIsDocumentSupportTemporary : 1;
		unsigned delegateRespondsToNewObjectUUID : 1;
		unsigned delegateRespondsToIsInCollaborationModeForContext : 1;
		unsigned delegateRespondsToIsInReadOnlyModeForContext : 1;
		unsigned skipDocumentUpgrade : 1;
	}  _flags;
	char _losesDataOnWrite;
	NSSet* _unsupportedFeatureIdentifiers;
	NSString* _documentPasswordHint;
	TSPObject* _documentObject;
	id<TSPObjectContextDelegate> _delegate;
	TSPRegistry* _registry;
	TSPComponentManager* _componentManager;
	TSPDataManager* _dataManager;
	TSPDataDownloadManager* _dataDownloadManager;
	TSPDocumentResourceManager* _documentResourceManager;
	TSPSupportManager* _supportManager;
	TSPObjectContainer* _documentObjectContainer;
	TSPObjectContainer* _supportObjectContainer;
	TSPDocumentMetadata* _documentMetadata;
	TSPSupportMetadata* _supportMetadata;
	NSData* _passwordVerifier;
	unsigned long long _saveToken;

}

@property (nonatomic,readonly) TSPRegistry * registry;                                            //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) char ignoreDocumentSupport; 
@property (nonatomic,readonly) char isDocumentSupportTemporary; 
@property (nonatomic,readonly) char ignoreUnknownContentWhileReading; 
@property (nonatomic,readonly) char ignoreVersionCheckingWhileReading; 
@property (nonatomic,readonly) char ignoreDocumentResourcesWhileReading; 
@property (nonatomic,readonly) char shouldLoadAllComponents; 
@property (nonatomic,readonly) TSPComponentManager * componentManager;                            //@synthesize componentManager=_componentManager - In the implementation block
@property (nonatomic,readonly) TSPDataManager * dataManager;                                      //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,readonly) TSPDataDownloadManager * dataDownloadManager;                      //@synthesize dataDownloadManager=_dataDownloadManager - In the implementation block
@property (nonatomic,readonly) TSPDocumentResourceManager * documentResourceManager;              //@synthesize documentResourceManager=_documentResourceManager - In the implementation block
@property (nonatomic,readonly) TSPSupportManager * supportManager;                                //@synthesize supportManager=_supportManager - In the implementation block
@property (nonatomic,readonly) TSPPackage * documentPackage; 
@property (nonatomic,readonly) TSPPackage * supportPackage; 
@property (nonatomic,retain) TSPObjectContainer * documentObjectContainer;                        //@synthesize documentObjectContainer=_documentObjectContainer - In the implementation block
@property (nonatomic,retain) TSPObjectContainer * supportObjectContainer;                         //@synthesize supportObjectContainer=_supportObjectContainer - In the implementation block
@property (nonatomic,readonly) TSPDocumentMetadata * documentMetadata;                            //@synthesize documentMetadata=_documentMetadata - In the implementation block
@property (nonatomic,readonly) TSPSupportMetadata * supportMetadata;                              //@synthesize supportMetadata=_supportMetadata - In the implementation block
@property (assign,nonatomic) long long lastObjectIdentifier; 
@property (nonatomic,readonly) unsigned long long saveToken;                                      //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,readonly) NSData * passwordVerifier;                                         //@synthesize passwordVerifier=_passwordVerifier - In the implementation block
@property (nonatomic,readonly) char areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * documentUUID; 
@property (nonatomic,readonly) NSUUID * versionUUID; 
@property (nonatomic,retain) TSPObject * supportObject; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@property (nonatomic,readonly) NSURL * documentURL; 
@property (nonatomic,readonly) char losesDataOnWrite;                                             //@synthesize losesDataOnWrite=_losesDataOnWrite - In the implementation block
@property (nonatomic,readonly) NSSet * unsupportedFeatureIdentifiers;                             //@synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers - In the implementation block
@property (nonatomic,readonly) char isDocumentModified; 
@property (nonatomic,readonly) char isSupportModified; 
@property (nonatomic,readonly) char isPasswordProtected; 
@property (nonatomic,readonly) NSString * documentPasswordHint;                                   //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,readonly) char isInReadOnlyMode; 
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) TSPObject * documentObject;                                        //@synthesize documentObject=_documentObject - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectContextDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int packageType; 
@property (assign) int preferredPackageType; 
@property (nonatomic,readonly) unsigned long long documentSize; 
@property (nonatomic,readonly) unsigned long long documentDataSize; 
@property (retain) TSPDocumentRevision * documentRevision; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) char needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) char isEstimatedDownloadSizePrecise; 
@property (nonatomic,readonly) NSString * lastPasswordAttempted; 
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
+(char)isNativeDirectoryFormatURL:(id)arg1 ;
+(char)isTangierEditingFormatURL:(id)arg1 ;
+(id)releaseQueue;
+(id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2 ;
+(void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2 ;
+(char)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 usingDataProvider:(id)arg3 ;
+(char)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 ;
+(void)waitForPendingEndSaveGroup:(id)arg1 ;
+(char)isNativeOrTangierEditingFormatURL:(id)arg1 ;
+(id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3 ;
+(void)removeDefaultSupportDirectory;
+(id)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 ;
-(long long)modifyObjectTokenForNewObject;
-(id)newObjectUUIDForObject:(id)arg1 ;
-(void)setDocumentObject:(TSPObject *)arg1 ;
-(void)beginIgnoringModificationsForObject:(id)arg1 ;
-(void)endIgnoringModificationsForObject:(id)arg1 ;
-(void)willModifyObject:(id)arg1 duringReadOperation:(char)arg2 ;
-(char)canSetObjectUUIDForObject:(id)arg1 ;
-(id)objectUUIDMap;
-(long long)newObjectIdentifier;
-(NSUUID *)versionUUID;
-(void)createInternalMetadataIfNeeded;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(char)arg5 error:(id*)arg6 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 documentResourceManager:(id)arg4 mode:(unsigned)arg5 passphrase:(id)arg6 skipDocumentUpgrade:(char)arg7 error:(id*)arg8 ;
-(id)initWithDelegate:(id)arg1 registry:(id)arg2 documentResourceManager:(id)arg3 ;
-(NSData *)passwordVerifier;
-(char)readDocumentObjectFromPackageURL:(id)arg1 error:(id*)arg2 ;
-(char)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id*)arg2 ;
-(void)setSupportObjectImpl:(id)arg1 ;
-(char)areNewExternalReferencesToDataAllowed;
-(char)areExternalReferencesToDataAllowedAtURL:(id)arg1 ;
-(id)baseUUIDForObjectUUID;
-(id)supportDirectoryURLReturningIsBundleURL:(char*)arg1 ;
-(char)ignoreDocumentSupport;
-(char)isDocumentSupportTemporary;
-(void)beginSaveToURL:(id)arg1 updateType:(int)arg2 packageType:(int)arg3 documentUUID:(id)arg4 ;
-(void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2 ;
-(void)beginWriteOperation;
-(void)suspendAsynchronousModificationsForObjectTargetType:(unsigned)arg1 ;
-(long long)updateModifyObjectToken;
-(NSUUID *)documentUUID;
-(void)setDocumentRevision:(TSPDocumentRevision *)arg1 ;
-(char)isInCollaborationMode;
-(void)performReadOperationOnDataAttributes:(/*^block*/id)arg1 ;
-(unsigned long long)saveToken;
-(void)setSupportObject:(TSPObject *)arg1 ;
-(TSPObject *)supportObject;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(char)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id*)arg6 ;
-(unsigned long long)estimatedDocumentSize;
-(int)packageType;
-(NSString *)documentPasswordHint;
-(void)performAsynchronousWriteOperationOnDocumentState:(/*^block*/id)arg1 ;
-(char)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
-(char)endWriteWithSuccess:(char)arg1 error:(id*)arg2 ;
-(void)resumeAsynchronousModifications;
-(void)prepareForDocumentReplacementWithSuccess:(char)arg1 forSafeSave:(char)arg2 ;
-(void)endWriteOperation;
-(void)resumeLoadingModifiedFlushedComponents;
-(TSPDocumentRevision *)documentRevision;
-(SFUCryptoKey *)decryptionKey;
-(void)beginSaveToURL:(id)arg1 updateType:(int)arg2 packageType:(int)arg3 ;
-(void)beginWriteWithOriginalURL:(id)arg1 ;
-(void)endSaveWithSuccess:(char)arg1 ;
-(void)suspendAutosaveWithReason:(id)arg1 ;
-(void)resumeAutosaveWithReason:(id)arg1 ;
-(void)requestAutosave;
-(char)setDecryptionKey:(SFUCryptoKey *)arg1 ;
-(NSData *)keychainGenericItem;
-(void)performReadOperationOnDocumentState:(/*^block*/id)arg1 ;
-(unsigned long long)documentObjectSize;
-(unsigned long long)documentDataSize;
-(TSPPackage *)documentPackage;
-(id)newDocumentResourceDataProvider;
-(char)continueReadingDocumentObjectFromPackageURL:(id)arg1 documentResourceDataProvider:(id)arg2 areExternalDataReferencesAllowed:(char)arg3 error:(id*)arg4 ;
-(void)prepareToReadSupportObjectWithDocumentResourceDataProvider:(id)arg1 areExternalDataReferencesAllowed:(char)arg2 accessor:(/*^block*/id)arg3 ;
-(void)checkforDataWarningsWithPackageURL:(id)arg1 ;
-(void)didFinishUsingDocumentResourceDataProvider:(id)arg1 withSuccess:(char)arg2 ;
-(void)performReadOperation:(/*^block*/id)arg1 ;
-(int)preferredPackageType;
-(char)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id*)arg3 error:(id*)arg4 readCompletion:(/*^block*/id)arg5 ;
-(char)losesDataOnWrite;
-(NSSet *)unsupportedFeatureIdentifiers;
-(void)didReadDocumentObject:(id)arg1 ;
-(void)didReadSupportObject:(id)arg1 ;
-(char)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3 ;
-(id)addLoadedObjectsAndEnqueueNotifications:(id)arg1 ;
-(void)beginIgnoringCachedObjectEviction;
-(void)endIgnoringCachedObjectEviction;
-(char)areExternalReferencesSupported;
-(char)readComponent:(id)arg1 isWeakReference:(char)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id*)arg5 allObjects:(id*)arg6 error:(id*)arg7 ;
-(void)performReadUsingAccessorImpl:(/*^block*/id)arg1 ;
-(char)readObjectForIdentifier:(long long)arg1 isWeakReference:(char)arg2 rootObjectComponent:(id)arg3 object:(id*)arg4 error:(id*)arg5 ;
-(char)readComponent:(id)arg1 isWeakReference:(char)arg2 rootObject:(id*)arg3 allObjects:(id*)arg4 error:(id*)arg5 ;
-(char)ignoreUnknownContentWhileReading;
-(char)ignoreDocumentResourcesWhileReading;
-(long long)estimatedDownloadSize;
-(char)isEstimatedDownloadSizePrecise;
-(void)waitForSaveToFinishIfNeeded;
-(id)objectWithUUID:(id)arg1 onlyIfLoaded:(char)arg2 validateNewObjects:(char)arg3 identifier:(long long*)arg4 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(char)isObjectInDocument:(id)arg1 ;
-(char)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3 ;
-(id)downloadWithDelegate:(id)arg1 description:(id)arg2 ;
-(NSString *)lastPasswordAttempted;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 skipDocumentUpgrade:(char)arg4 error:(id*)arg5 ;
-(void)performAsynchronousWriteOperationOnDataAttributes:(/*^block*/id)arg1 ;
-(id)prepareSaveProgress;
-(id)currentPackageDataWriter;
-(char)saveToURL:(id)arg1 packageType:(int)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id*)arg5 ;
-(void)replaceDocumentObject:(id)arg1 ;
-(void)beginAssertOnModify;
-(void)endAssertOnModify;
-(unsigned long long)documentSize;
-(void)performReadOperationOnKnownObjects:(/*^block*/id)arg1 ;
-(id)dataWithContentsOfPackagePath:(id)arg1 ;
-(void)didMoveToURL:(id)arg1 ;
-(void)didMoveSupportToURL:(id)arg1 ;
-(id)incrementDocumentRevisionWithIdentifier:(id)arg1 ;
-(void)resetDocumentRevision;
-(void)setPreferredPackageType:(int)arg1 ;
-(char)isDocumentModified;
-(char)isSupportModified;
-(id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(char)arg2 componentIdentifier:(long long)arg3 ;
-(void)enumerateDocumentResourcesUsingBlock:(/*^block*/id)arg1 ;
-(char)isInReadOnlyMode;
-(char)containsDataConformingToUTI:(id)arg1 ;
-(void)addObjectModifyDelegate:(id)arg1 ;
-(void)removeObjectModifyDelegate:(id)arg1 ;
-(void)registerAsynchronousObjectModifier:(id)arg1 ;
-(id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 error:(id*)arg4 ;
-(id)initForQuickLookWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 registry:(id)arg4 delegate:(id)arg5 passphrase:(id)arg6 error:(id*)arg7 ;
-(void)prepareForDocumentReplacement;
-(char)ignoreVersionCheckingWhileReading;
-(char)shouldLoadAllComponents;
-(TSPPackage *)supportPackage;
-(char)updateDocumentUUIDPreserveOriginalDocumentSupport:(char)arg1 preserveShareUUID:(char)arg2 error:(id*)arg3 ;
-(long long)lastObjectIdentifier;
-(void)setLastObjectIdentifier:(long long)arg1 ;
-(long long)incrementLastObjectIdentifier:(long long)arg1 ;
-(TSPComponentManager *)componentManager;
-(TSPDataDownloadManager *)dataDownloadManager;
-(TSPDocumentResourceManager *)documentResourceManager;
-(TSPSupportManager *)supportManager;
-(TSPObjectContainer *)documentObjectContainer;
-(void)setDocumentObjectContainer:(TSPObjectContainer *)arg1 ;
-(TSPObjectContainer *)supportObjectContainer;
-(void)setSupportObjectContainer:(TSPObjectContainer *)arg1 ;
-(TSPDocumentMetadata *)documentMetadata;
-(TSPSupportMetadata *)supportMetadata;
-(id)dataWithDigest:(id)arg1 preferredFilename:(id)arg2 canDownload:(char)arg3 downloadPriority:(int)arg4 ;
-(void)proxyObjectMapping:(id)arg1 willProxyReferencedObject:(id)arg2 ;
-(id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 ;
-(id)objectWithUUID:(id)arg1 ;
-(id)dataWithDigest:(id)arg1 ;
-(id)objectWithUUIDIfAvailable:(id)arg1 ;
-(id)objectWithUUIDIfAvailableAndLoaded:(id)arg1 ;
-(id)objectWithUUIDPath:(id)arg1 ;
-(id)objectsFromUUIDs:(id)arg1 ;
-(id)UUIDsFromObjects:(id)arg1 ;
-(id)deterministicObjectUUIDRelativeToObject:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)dataWithLegacyDataIdentifier:(long long)arg1 ;
-(id)objectLocale;
-(id<NSFilePresenter>)filePresenter;
-(id)init;
-(void)setDelegate:(id<TSPObjectContextDelegate>)arg1 ;
-(void)dealloc;
-(id<TSPObjectContextDelegate>)delegate;
-(TSPObjectContext *)context;
-(id)initWithDelegate:(id)arg1 ;
-(void)close;
-(NSURL *)documentURL;
-(void)cancelDownloads;
-(id)objectForIdentifier:(long long)arg1 ;
-(char)needsDownload;
-(TSPObject *)documentObject;
-(char)isPasswordProtected;
-(TSPDataManager *)dataManager;
-(NSString *)service;
-(TSPDocumentProperties *)documentProperties;
-(char)setPassphrase:(id)arg1 ;
-(NSString *)passphraseHint;
-(id)temporaryDirectory;
-(id)documentRoot;
-(TSPRegistry *)registry;
@end

