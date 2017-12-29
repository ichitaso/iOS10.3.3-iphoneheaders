/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class AVAudioPlayer, AVSpeechSynthesizer, NSString;

@interface PHHoldMusicAudioPlayer : NSObject <AVSpeechSynthesizerDelegate> {

	char _shouldBePlaying;
	AVAudioPlayer* _holdMusicAudioPlayer;
	AVSpeechSynthesizer* _holdMessageSpeechSynthesizer;

}

@property (nonatomic,retain) AVAudioPlayer * holdMusicAudioPlayer;                            //@synthesize holdMusicAudioPlayer=_holdMusicAudioPlayer - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * holdMessageSpeechSynthesizer;              //@synthesize holdMessageSpeechSynthesizer=_holdMessageSpeechSynthesizer - In the implementation block
@property (assign,nonatomic) char shouldBePlaying;                                            //@synthesize shouldBePlaying=_shouldBePlaying - In the implementation block
@property (getter=isPlaying,readonly) char playing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVAudioPlayer *)holdMusicAudioPlayer;
-(void)setHoldMusicAudioPlayer:(AVAudioPlayer *)arg1 ;
-(char)shouldBePlaying;
-(void)setShouldBePlaying:(char)arg1 ;
-(char)_playHoldMessageAudio;
-(void)_stopHoldMessageAudio;
-(void)_stopHoldMusicAudio;
-(char)_isPlayingHoldMessage;
-(char)_isPlayingHoldMusic;
-(AVSpeechSynthesizer *)holdMessageSpeechSynthesizer;
-(void)_playHoldMusicAudio;
-(void)setHoldMessageSpeechSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(void)dealloc;
-(void)stop;
-(char)isPlaying;
-(char)play;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
@end

