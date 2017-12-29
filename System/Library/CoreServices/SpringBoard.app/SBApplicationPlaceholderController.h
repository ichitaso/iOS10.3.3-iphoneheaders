/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBApplicationPlaceholderLifecycleObserver.h>
#import <SpringBoard/SBApplicationPlaceholderDelegate.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate> {

	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSMutableSet* _removingPlaceholderProxies;
	char _hasDownloadedFromStore;
	char _usingNetwork;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)placeholderForDisplayID:(id)arg1 ;
-(id)placeholdersByDisplayID;
-(char)hasDownloadedStoreApplication;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(char)arg1 ;
-(char)placeholderShouldAllowPausing:(id)arg1 ;
-(void)_processPendingProxies;
-(void)_addPlaceholders:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(char)arg2 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 placeholderProxy:(id)arg3 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)_removeDownloadingIcons:(id)arg1 saveState:(char)arg2 ;
-(void)_downloadsEnded;
-(void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isUsingNetwork;
@end

