/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {

	char mStartTimeIsDefined;
	char mDurationIsDefined;
	MCAssetAudio* mAsset;
	float mVolume;
	unsigned mIndex;
	MCAudioPlaylist* mAudioPlaylistIfAudioPlaylistSong;
	MCSlide* mSlideIfSlideSong;
	double mFadeInDuration;
	double mFadeOutDuration;
	double mStartTime;
	double mDuration;

}

@property (assign) MCAudioPlaylist * audioPlaylistIfAudioPlaylistSong; 
@property (assign) MCSlide * slideIfSlideSong; 
@property (retain) MCAssetAudio * asset; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) unsigned index; 
@property (nonatomic,readonly) char startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) char durationIsDefined; 
@property (assign,nonatomic) double duration; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(char)startTimeIsDefined;
-(char)durationIsDefined;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setAudioPlaylistIfAudioPlaylistSong:(MCAudioPlaylist *)arg1 ;
-(void)undefineStartTime;
-(void)undefineDuration;
-(void)setSlideIfSlideSong:(MCSlide *)arg1 ;
-(MCSlide *)slideIfSlideSong;
-(MCAudioPlaylist *)audioPlaylistIfAudioPlaylistSong;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(unsigned)index;
-(MCAssetAudio *)asset;
-(void)setAsset:(MCAssetAudio *)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setIndex:(unsigned)arg1 ;
-(id)imprint;
@end

