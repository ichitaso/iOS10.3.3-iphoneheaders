/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {

	AVAssetReaderOutputInternal* _internal;

}

@property (getter=_weakReferenceToAssetReader,nonatomic,readonly) AVWeakReference * weakReferenceToAssetReader; 
@property (assign,setter=_setExtractionID:,getter=_extractionID,nonatomic) int extractionID; 
@property (getter=_figAssetReaderExtractionOptions,nonatomic,readonly) NSDictionary * figAssetReaderExtractionOptions; 
@property (getter=_trimsSampleDurations,nonatomic,readonly) char trimsSampleDurations; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (assign,nonatomic) char alwaysCopiesSampleData; 
+(void)initialize;
+(id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)_errorForOSStatus:(long)arg1 ;
-(void)_attachToWeakReferenceToAssetReader:(id)arg1 ;
-(char)_prepareForReadingReturningError:(id*)arg1 ;
-(void)_cancelReading;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(char)alwaysCopiesSampleData;
-(char)supportsRandomAccess;
-(id)currentTimeRanges;
-(void)_setFigAssetReader:(OpaqueFigAssetReaderRef)arg1 ;
-(id)_weakReferenceToAssetReader;
-(char)_trimsSampleDurations;
-(int)_extractionID;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(void)_markAsFinished;
-(void)markConfigurationAsFinal;
-(char)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1 ;
-(void)setSupportsRandomAccess:(char)arg1 ;
-(void)_setExtractionID:(int)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1 ;
-(void)resetForReadingTimeRanges:(id)arg1 ;
-(void)_figAssetReaderDecodeError;
-(void)_figAssetReaderFailed;
-(NSString *)mediaType;
-(id)_asset;
-(int)_status;
-(void)setAlwaysCopiesSampleData:(char)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(char)_isFinished;
-(void)finalize;
@end

