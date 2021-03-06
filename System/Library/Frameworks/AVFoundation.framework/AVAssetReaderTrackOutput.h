/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (assign,nonatomic) char appliesPreferredTrackTransform; 
@property (getter=_isAttachedToAdaptor,nonatomic,readonly) char attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)outputSettings;
-(char)appliesPreferredTrackTransform;
-(char)_isAttachedToAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(AVAssetTrack *)track;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(char)_trimsSampleDurations;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_formatDescriptions;
-(unsigned long)_getUniformMediaSubtypeIfExists;
-(id)_attachedAdaptor;
-(id)mediaType;
-(id)_asset;
-(void)setAppliesPreferredTrackTransform:(char)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)finalize;
@end

