/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DownloadHandle, DownloadHandlerSession, NSError, NSString;

@interface FinishDownloadResponse : NSObject {

	int _assetBlockedReason;
	long long _assetID;
	DownloadHandle* _downloadHandle;
	DownloadHandlerSession* _downloadHandlerSession;
	long long _downloadID;
	NSError* _error;
	NSString* _mediaAssetInstallPath;
	int _result;

}

@property (nonatomic,retain) DownloadHandle * downloadHandle;                            //@synthesize downloadHandle=_downloadHandle - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                               //@synthesize downloadID=_downloadID - In the implementation block
@property (assign,nonatomic) long long mediaAssetIdentifier;                             //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) int assetBlockedReason;                                     //@synthesize assetBlockedReason=_assetBlockedReason - In the implementation block
@property (nonatomic,copy) DownloadHandlerSession * downloadHandlerSession;              //@synthesize downloadHandlerSession=_downloadHandlerSession - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * mediaAssetInstallPath;                             //@synthesize mediaAssetInstallPath=_mediaAssetInstallPath - In the implementation block
@property (assign,nonatomic) int result;                                                 //@synthesize result=_result - In the implementation block
-(int)assetBlockedReason;
-(void)setAssetBlockedReason:(int)arg1 ;
-(DownloadHandle *)downloadHandle;
-(void)setDownloadHandle:(DownloadHandle *)arg1 ;
-(DownloadHandlerSession *)downloadHandlerSession;
-(void)setDownloadHandlerSession:(DownloadHandlerSession *)arg1 ;
-(long long)mediaAssetIdentifier;
-(void)setMediaAssetIdentifier:(long long)arg1 ;
-(NSString *)mediaAssetInstallPath;
-(void)setMediaAssetInstallPath:(NSString *)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(int)result;
-(long long)downloadIdentifier;
-(void)setResult:(int)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
