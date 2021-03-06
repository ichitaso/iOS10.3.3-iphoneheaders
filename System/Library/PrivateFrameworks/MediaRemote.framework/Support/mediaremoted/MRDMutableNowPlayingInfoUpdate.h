/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDNowPlayingInfoUpdate.h>

@class NSDictionary, NSData, MRNowPlayingArtwork, MRDMediaRemoteClient;

@interface MRDMutableNowPlayingInfoUpdate : MRDNowPlayingInfoUpdate

@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,retain) NSData * serializedNowPlayingInfo; 
@property (nonatomic,retain) MRNowPlayingArtwork * artwork; 
@property (assign,nonatomic) MROriginRef origin; 
@property (nonatomic,retain) MRDMediaRemoteClient * originatingClient; 
@property (assign,nonatomic) unsigned char mergePolicy; 
-(void)setSerializedNowPlayingInfo:(NSData *)arg1 ;
-(void)setOriginatingClient:(MRDMediaRemoteClient *)arg1 ;
-(void)setOrigin:(MROriginRef)arg1 ;
-(void)setArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)setMergePolicy:(unsigned char)arg1 ;
@end

