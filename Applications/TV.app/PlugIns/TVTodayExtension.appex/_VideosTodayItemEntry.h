/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/PlugIns/TVTodayExtension.appex/TVTodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, WLKContinuationMetadata, NSURL, TVImageProxy, MPArtworkCatalog;

@interface _VideosTodayItemEntry : NSObject <NSCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _context;
	WLKContinuationMetadata* _playableMetadata;
	NSURL* _playbackURL;
	TVImageProxy* _imageProxy;
	MPArtworkCatalog* _artworkCatalog;
	unsigned long long _mediaItemID;

}

@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) WLKContinuationMetadata * playableMetadata;              //@synthesize playableMetadata=_playableMetadata - In the implementation block
@property (nonatomic,copy) NSURL * playbackURL;                                       //@synthesize playbackURL=_playbackURL - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                               //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) unsigned long long mediaItemID;                          //@synthesize mediaItemID=_mediaItemID - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;                       //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(void)setMediaItemID:(unsigned long long)arg1 ;
-(void)setPlaybackURL:(NSURL *)arg1 ;
-(void)setPlayableMetadata:(WLKContinuationMetadata *)arg1 ;
-(NSURL *)playbackURL;
-(WLKContinuationMetadata *)playableMetadata;
-(unsigned long long)mediaItemID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)context;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setContext:(NSString *)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
@end

