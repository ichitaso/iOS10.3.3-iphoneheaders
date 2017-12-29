/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper
+(id)keyPathsForValuesAffectingCanPerformMultiplePasses;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(int)arg1 ;
-(int)status;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(void)setSourcePixelBufferAttributes:(id)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(char)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(char)arg1 ;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV2)arg1 ;
-(void)setPreferredMediaChunkAlignment:(int)arg1 ;
-(void)setPreferredMediaChunkSize:(int)arg1 ;
-(void)setWritesMediaDataToBeginningOfFile:(char)arg1 ;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(char)canPerformMultiplePasses;
-(char)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(char)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(char)_validateLanguageCode:(id)arg1 ;
-(char)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id*)arg3 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
@end

