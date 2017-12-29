/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICMovieAttachmentView, ICAVPlayerViewController;

@interface ICMovieController : NSObject {

	char _playbackForPreview;
	ICMovieAttachmentView* _activeMovieAttachmentView;
	ICAVPlayerViewController* _moviePlayerController;

}

@property (nonatomic,retain) ICAVPlayerViewController * moviePlayerController;               //@synthesize moviePlayerController=_moviePlayerController - In the implementation block
@property (assign,nonatomic) char playbackForPreview;                                        //@synthesize playbackForPreview=_playbackForPreview - In the implementation block
@property (nonatomic,retain) ICMovieAttachmentView * activeMovieAttachmentView;              //@synthesize activeMovieAttachmentView=_activeMovieAttachmentView - In the implementation block
+(void)stopIfPlaying;
+(void)pauseIfPlaying;
+(id)sharedController;
-(void)setActiveMovieAttachmentView:(ICMovieAttachmentView *)arg1 ;
-(void)setPlaybackForPreview:(char)arg1 ;
-(void)moviePlayerTapped;
-(void)stopIfPlaying;
-(void)updatePlayer;
-(void)pauseIfPlaying;
-(ICMovieAttachmentView *)activeMovieAttachmentView;
-(char)playbackForPreview;
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)play;
-(void)setMoviePlayerController:(ICAVPlayerViewController *)arg1 ;
-(ICAVPlayerViewController *)moviePlayerController;
-(char)prepareForPlayback;
@end

