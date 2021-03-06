/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:34:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPCompanionAppServer;

@interface SPGizmoCacheManager : NSObject {

	SPCompanionAppServer* _companionAppServer;

}

@property (__weak) SPCompanionAppServer * companionAppServer;              //@synthesize companionAppServer=_companionAppServer - In the implementation block
+(id)sharedInstance;
-(id)cacheDirectoryWithCacheIdentifier:(id)arg1 ;
-(void)processCacheMessage:(id)arg1 connectionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setupCacheWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getData:(id)arg1 cacheIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addData:(id)arg1 cacheIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteData:(id)arg1 cacheIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearAllCachedImages:(id)arg1 cacheIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)assetPath:(id)arg1 cacheIdentifier:(id)arg2 cacheType:(unsigned)arg3 ;
-(void)sendCacheReply:(id)arg1 cacheIdentifier:(id)arg2 ;
-(id)cacheDirectoryWithCacheIdentifier:(id)arg1 cacheType:(unsigned)arg2 ;
-(id)cacheAssets:(id)arg1 cacheType:(unsigned)arg2 cacheIdentifier:(id)arg3 ;
-(void)deleteCache:(id)arg1 ;
-(void)processCacheMessageData:(id)arg1 connectionIdentifier:(id)arg2 ;
-(void)processCacheDictionary:(id)arg1 connectionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SPCompanionAppServer *)companionAppServer;
-(void)setCompanionAppServer:(SPCompanionAppServer *)arg1 ;
-(id)init;
-(id)cacheDirectory;
@end

