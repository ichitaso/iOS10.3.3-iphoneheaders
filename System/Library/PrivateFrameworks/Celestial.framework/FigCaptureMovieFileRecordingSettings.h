/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureRecordingSettings.h>

@class NSDictionary, NSArray;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings {

	NSDictionary* _videoSettings;
	NSDictionary* _audioSettings;
	char _videoMirrored;
	int _videoOrientation;
	char _recordVideoOrientationAndMirroringChanges;
	SCD_Struct_BW2 _movieFragmentInterval;
	NSArray* _movieLevelMetadata;
	char _sendPreviewIOSurface;
	char _irisRecording;
	int _bravoCameraSelectionBehavior;

}

@property (nonatomic,copy) NSDictionary * videoSettings;                                  //@synthesize videoSettings=_videoSettings - In the implementation block
@property (nonatomic,copy) NSDictionary * audioSettings;                                  //@synthesize audioSettings=_audioSettings - In the implementation block
@property (assign,nonatomic) char videoMirrored;                                          //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                        //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) char recordVideoOrientationAndMirroringChanges;              //@synthesize recordVideoOrientationAndMirroringChanges=_recordVideoOrientationAndMirroringChanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieFragmentInterval;                        //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadata;                                  //@synthesize movieLevelMetadata=_movieLevelMetadata - In the implementation block
@property (assign,nonatomic) char sendPreviewIOSurface;                                   //@synthesize sendPreviewIOSurface=_sendPreviewIOSurface - In the implementation block
@property (assign,getter=isIrisRecording,nonatomic) char irisRecording;                   //@synthesize irisRecording=_irisRecording - In the implementation block
@property (assign,nonatomic) int bravoCameraSelectionBehavior;                            //@synthesize bravoCameraSelectionBehavior=_bravoCameraSelectionBehavior - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isIrisRecording;
-(NSArray *)movieLevelMetadata;
-(char)sendPreviewIOSurface;
-(char)videoMirrored;
-(char)recordVideoOrientationAndMirroringChanges;
-(NSDictionary *)audioSettings;
-(SCD_Struct_BW2)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_BW2)arg1 ;
-(int)videoOrientation;
-(void)setVideoMirrored:(char)arg1 ;
-(void)setBravoCameraSelectionBehavior:(int)arg1 ;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(void)setMovieLevelMetadata:(NSArray *)arg1 ;
-(void)setSendPreviewIOSurface:(char)arg1 ;
-(void)setRecordVideoOrientationAndMirroringChanges:(char)arg1 ;
-(void)setIrisRecording:(char)arg1 ;
-(void)setVideoOrientation:(int)arg1 ;
-(int)bravoCameraSelectionBehavior;
-(NSDictionary *)videoSettings;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
@end

