/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@class VideosDownloadMetadata, NSNumber;

@interface VideosPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {

	char _videosAllowsCellularNetworking;
	VideosDownloadMetadata* _downloadMetadata;

}

@property (nonatomic,readonly) NSNumber * rentalID; 
@property (nonatomic,retain) VideosDownloadMetadata * downloadMetadata;              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
-(VideosDownloadMetadata *)downloadMetadata;
-(void)setDownloadMetadata:(VideosDownloadMetadata *)arg1 ;
-(void)dealloc;
-(int)endpointType;
-(id)initWithMediaItem:(id)arg1 ;
-(id)iTunesStoreContentID;
-(id)_storeRedownloadProductItem;
-(id)_rentalIdentifier;
-(id)iTunesStoreContentDownloadParameters;
-(NSNumber *)rentalID;
-(char)_calculateAllowsCellularNetworking;
-(void)_videosPlaybackSettingsChanged:(id)arg1 ;
@end

