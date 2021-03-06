/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, CLLocation, NSDate, UIImage, NSDictionary, NSURL, PHLivePhoto, AVAsset, AVAudioMix, PFAssetAdjustments;


@protocol PUCAMReviewAsset <PUDisplayAsset>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned mediaType; 
@property (nonatomic,readonly) unsigned mediaSubtypes; 
@property (nonatomic,readonly) unsigned pixelWidth; 
@property (nonatomic,readonly) unsigned pixelHeight; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (getter=isFavorite,nonatomic,readonly) char favorite; 
@property (getter=isHDR,nonatomic,readonly) char HDR; 
@property (nonatomic,readonly) double duration; 
@property (getter=isLivePhoto,nonatomic,readonly) char livePhoto; 
@property (getter=isLivePhotoPlaceholder,nonatomic,readonly) char livePhotoPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_AE1 livePhotoSynchronizedDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_AE1 livePhotoDuration; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) char representsBurst; 
@property (nonatomic,readonly) unsigned numberOfRepresentedAssets; 
@property (nonatomic,readonly) UIImage * providedPreviewImage; 
@property (nonatomic,readonly) NSDictionary * providedImageMetadata; 
@property (nonatomic,readonly) NSURL * providedFullsizeImageURL; 
@property (nonatomic,readonly) NSURL * providedFullsizeRenderImageURL; 
@property (nonatomic,readonly) PHLivePhoto * providedLivePhoto; 
@property (nonatomic,readonly) AVAsset * providedAVAsset; 
@property (nonatomic,readonly) AVAudioMix * providedAudioMix; 
@property (nonatomic,readonly) NSURL * providedVideoURL; 
@property (nonatomic,readonly) NSURL * providedFullsizeRenderVideoURL; 
@property (nonatomic,readonly) PFAssetAdjustments * assetAdjustments; 
@required
-(double)duration;
-(NSString *)identifier;
-(CLLocation *)location;
-(unsigned)mediaType;
-(unsigned)pixelWidth;
-(unsigned)pixelHeight;
-(char)representsBurst;
-(char)isHDR;
-(NSString *)burstIdentifier;
-(unsigned)numberOfRepresentedAssets;
-(NSDate *)creationDate;
-(char)isFavorite;
-(PFAssetAdjustments *)assetAdjustments;
-(char)isLivePhoto;
-(UIImage *)providedPreviewImage;
-(double)aspectRatio;
-(unsigned)mediaSubtypes;
-(NSDate *)modificationDate;
-(char)isLivePhotoPlaceholder;
-(SCD_Struct_AE1)livePhotoSynchronizedDisplayTime;
-(SCD_Struct_AE1)livePhotoDuration;
-(NSDictionary *)providedImageMetadata;
-(NSURL *)providedFullsizeImageURL;
-(NSURL *)providedFullsizeRenderImageURL;
-(PHLivePhoto *)providedLivePhoto;
-(AVAsset *)providedAVAsset;
-(AVAudioMix *)providedAudioMix;
-(NSURL *)providedVideoURL;
-(NSURL *)providedFullsizeRenderVideoURL;

@end

