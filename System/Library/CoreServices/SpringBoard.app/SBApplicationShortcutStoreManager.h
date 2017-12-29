/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {

	NSLock* _stateLock;
	NSMutableDictionary* _storesKeyedByBundleIdentifier;

}
+(id)sharedManager;
-(void)saveSynchronously;
-(id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned)arg2 ;
-(void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned)arg3 ;
-(id)_stateLock_storeForBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)invalidateCache;
@end

