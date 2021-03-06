/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol AirTrafficSettingsDataSourceDelegate;
@class ATConnection, NSString, NSMutableSet, NSTimer, NSDictionary, ATHostBrowser;

@interface AirTrafficSettingsDataSource : NSObject <ATConnectionDelegate> {

	ATConnection* _connection;
	NSString* _libraryIdentifier;
	NSMutableSet* _connectedLibraries;
	NSMutableSet* _wakeableLibraries;
	NSMutableSet* _wakingLibraries;
	NSMutableSet* _librariesWaitingToSync;
	NSMutableSet* _syncingLibraries;
	NSTimer* _waitingForSyncTimer;
	unsigned _backgroundTaskIdentifier;
	char _registered;
	NSDictionary* _lastProgressDict;
	ATHostBrowser* _hostBrowser;
	id<AirTrafficSettingsDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AirTrafficSettingsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char connected; 
@property (nonatomic,readonly) char syncing; 
@property (nonatomic,readonly) char waitingToSync; 
@property (nonatomic,readonly) char waitingToWake; 
@property (getter=isWifiEnabled,nonatomic,readonly) char wifiEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSource;
-(id)initWithLibraryIdentifier:(id)arg1 ;
-(char)waitingToSync;
-(id)hostIdentifiers;
-(char)waitingToWake;
-(char)syncing;
-(id)hostForIdentifier:(id)arg1 ;
-(id)hostsWaitingToWake;
-(void)scanWakeableLibraries;
-(void)registerForProgressWithLibraryIdentifier:(id)arg1 ;
-(void)unregisterForProgress;
-(void)stopScanningWakeableLibraries;
-(void)unregisterConnectionIfUnused;
-(void)syncTimeoutExpired;
-(id)init;
-(void)setDelegate:(id<AirTrafficSettingsDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<AirTrafficSettingsDataSourceDelegate>)delegate;
-(id)connection;
-(void)requestSync;
-(char)connected;
-(char)isWifiEnabled;
-(void)cancelSync;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
@end

