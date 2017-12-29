/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MessagesNotificationViewService.app/MessagesNotificationViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesNotificationViewService/MessagesNotificationViewService-Structs.h>
#import <NotificationsUI/NCBannerAccessoryViewController.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@class CKAudioMediaObject, CKAudioProgressView, CKAudioController, NSString;

@interface CKBannerPlaybackViewController : NCBannerAccessoryViewController <CKAudioControllerDelegate> {

	CKAudioMediaObject* _mediaObject;
	CKAudioProgressView* _progressView;
	CKAudioController* _audioController;
	double _duration;
	double _currentProgress;
	double _lastProgress;

}

@property (nonatomic,retain) CKAudioMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,retain) CKAudioProgressView * progressView;               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;              //@synthesize audioController=_audioController - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentProgress;                           //@synthesize currentProgress=_currentProgress - In the implementation block
@property (assign,nonatomic) double lastProgress;                              //@synthesize lastProgress=_lastProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSecureForRemoteViewService;
-(void)didPause:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)_disableAutomaticKeyboardBehavior;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)dismiss;
-(void)setContext:(id)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(double)currentProgress;
-(CKAudioProgressView *)progressView;
-(void)setProgressView:(CKAudioProgressView *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setMediaObject:(CKAudioMediaObject *)arg1 ;
-(CKAudioMediaObject *)mediaObject;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)_updateTime:(id)arg1 ;
-(void)didFinish:(id)arg1 ;
-(void)didStop:(id)arg1 ;
-(void)setLastProgress:(double)arg1 ;
-(double)lastProgress;
@end

