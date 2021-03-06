/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileAsset/MobileAsset-Structs.h>
@class NSString, NSDictionary, NSDate, NSURL;

@interface ASAsset : NSObject {

	NSString* _assetType;
	NSDictionary* _attributes;
	NSDictionary* _downloadOptions;
	NSString* _clientName;
	NSString* _identifier;
	/*^block*/id _progressHandler;
	_MobileAsset* _cfAsset;
	char _userInitiatedDownload;

}

@property (nonatomic,retain) NSString * clientName; 
@property (nonatomic,readonly) NSDictionary * fullAttributes; 
@property (nonatomic,retain) NSDictionary * downloadOptions;               //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                       //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) NSDate * installDate; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (assign,nonatomic) int garbageCollectionBehavior; 
@property (nonatomic,copy) id progressHandler;                             //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) char userInitiatedDownload;                   //@synthesize userInitiatedDownload=_userInitiatedDownload - In the implementation block
+(char)nonUserInitiatedDownloadsAllowed;
-(int)_formatVersion;
-(int)_contentVersion;
-(void)setGarbageCollectionBehavior:(int)arg1 ;
-(id)_getLocalAttribute:(id)arg1 ;
-(int)assetStateForStateString:(id)arg1 ;
-(_MobileAsset*)mobileAsset;
-(char)userInitiatedDownload;
-(void)_downloadWithOptions:(id)arg1 shouldFireCallback:(char)arg2 ;
-(char)pauseDownloadAndReturnError:(id*)arg1 ;
-(char)resumeDownloadAndReturnError:(id*)arg1 ;
-(int)garbageCollectionBehavior;
-(id)initWithAssetType:(id)arg1 attributes:(id)arg2 ;
-(NSDictionary *)fullAttributes;
-(char)isPresentOnDisk;
-(NSDate *)installDate;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(id)identifier;
-(NSDictionary *)attributes;
-(NSURL *)localURL;
-(void)beginDownloadWithOptions:(id)arg1 ;
-(void)resumeDownload:(/*^block*/id)arg1 ;
-(void)adjustDownloadOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setProgressHandler:(id)arg1 ;
-(char)purgeAndReturnError:(id*)arg1 ;
-(NSDictionary *)downloadOptions;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)clientName;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(id)progressHandler;
-(void)setDownloadOptions:(NSDictionary *)arg1 ;
-(char)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3 ;
-(NSString *)assetType;
-(char)cancelDownloadAndReturnError:(id*)arg1 ;
-(void)pauseDownload:(/*^block*/id)arg1 ;
-(void)purge:(/*^block*/id)arg1 ;
-(char)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2 ;
-(void)setUserInitiatedDownload:(char)arg1 ;
@end

