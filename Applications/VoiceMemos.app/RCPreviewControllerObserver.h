/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCPreviewControllerObserver <NSObject>
@optional
-(void)previewControllerDidChangePreparingState:(id)arg1;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;

@required
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;

@end

