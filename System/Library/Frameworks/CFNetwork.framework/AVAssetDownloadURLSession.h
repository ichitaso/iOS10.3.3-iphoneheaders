/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSession.h>

@interface AVAssetDownloadURLSession : NSURLSession
+(id)sessionWithConfiguration:(id)arg1 assetDownloadDelegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
@end

