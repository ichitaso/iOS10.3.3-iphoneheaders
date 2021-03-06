/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSFetchController.h>
#import <Tips/TPSXPCClientInterface.h>
#import <Tips/TPSCollectionsControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSArray, NSMutableSet, NSDictionary, NSMutableDictionary, TPSTip, TPSCollectionsController, NSXPCConnection;

@interface TPSTipsController : TPSFetchController <TPSXPCClientInterface, TPSCollectionsControllerDelegate> {

	char _currentPrefetchOrientationIsCompact;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;
	NSString* _lastModifiedDate;
	NSString* _prefetchTipIdentifier;
	NSArray* _lastVisibleTipsIDs;
	NSMutableSet* _prefetchMediaForTipSet;
	NSDictionary* _pendingFeedFromDaemon;
	NSMutableDictionary* _prefetchMediaForTipMap;
	NSMutableDictionary* _visibleTimestampForIDMap;
	NSMutableDictionary* _targetingMatchTimestampForIDMap;
	TPSTip* _introTip;
	TPSCollectionsController* _collectionsController;
	NSArray* _currentPrefetchTipsArray;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) TPSTip * introTip;                                             //@synthesize introTip=_introTip - In the implementation block
@property (nonatomic,retain) TPSCollectionsController * collectionsController;              //@synthesize collectionsController=_collectionsController - In the implementation block
@property (nonatomic,retain) NSArray * currentPrefetchTipsArray;                            //@synthesize currentPrefetchTipsArray=_currentPrefetchTipsArray - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAllMediaForTipPrefetch;
-(void)updateDataArrayWithFormattedData:(id)arg1 lastModifiedDate:(id)arg2 cacheData:(char)arg3 ;
-(int)collectionsControllerCollectionCount:(id)arg1 collection:(id)arg2 ;
-(id)initWithAppController:(id)arg1 ;
-(char)fetchFromOrigin:(char)arg1 ;
-(TPSTip *)introTip;
-(void)setIntroTip:(TPSTip *)arg1 ;
-(void)setCurrentPrefetchTipsArray:(NSArray *)arg1 ;
-(void)prefetchMediaFromTip:(id)arg1 compact:(char)arg2 ;
-(void)requestDidFinishLoading;
-(void)removeAllData;
-(TPSCollectionsController *)collectionsController;
-(void)clearBulletin;
-(void)fetchCollectionsWithCachePolicy:(unsigned)arg1 ;
-(char)updateTipsFromJSON:(id)arg1 sourceFromDaemon:(char)arg2 lastModifiedDate:(id)arg3 cacheData:(char)arg4 ;
-(void)updateDaemonMeta;
-(void)prefetchMediaForTipDelay:(id)arg1 ;
-(char)needPrefetchForTipAtIndex:(int)arg1 ;
-(char)heroImageCacheValidForTip:(id)arg1 ;
-(id)relatedAppToPrefetchForObject:(id)arg1 ;
-(void)createMediaFetchForTip:(id)arg1 path:(id)arg2 isTypeImage:(char)arg3 ;
-(id)heroImagePathToPrefetchForObject:(id)arg1 ;
-(id)heroVideoPathToPrefetchForObject:(id)arg1 ;
-(char)heroVideoCacheValidForTip:(id)arg1 ;
-(void)removePrefetchForTip:(id)arg1 path:(id)arg2 ;
-(oneway void)latestFeedFetchedByDaemon:(id)arg1 ;
-(void)latestFeedFetchedByDaemonDelay;
-(id)tipsWithCollectionID:(id)arg1 ;
-(void)removeURLSessionForPath:(id)arg1 ;
-(void)setCollectionsController:(TPSCollectionsController *)arg1 ;
-(NSArray *)currentPrefetchTipsArray;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)_destroyXPCConnection;
-(id)currentXPCConnection;
-(char)fetch;
-(void)resetData;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

