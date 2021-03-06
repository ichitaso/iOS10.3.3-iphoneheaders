/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IMAVVideoViewDelegate;
@class UIView, UIImageView, UILabel, NSString, IMAVPlayerLayerView, IMAVPlayer, UIImage, AVPlayerLayer;

@interface IMAVVideoView : UIView {

	UIView* _airplayBackground;
	UIImageView* _airplayTVImage;
	UILabel* _airplayLabel;
	UILabel* _airplayRouteLabel;
	NSString* _airplayRouteName;
	char _airplayActive;
	char _externalDisplay;
	id<IMAVVideoViewDelegate> _delegate;
	IMAVPlayerLayerView* _videoLayerView;
	IMAVPlayer* _player;
	UIImage* _customAirplayTVImage;

}

@property (assign,nonatomic,__weak) id<IMAVVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char airplayActive;                                     //@synthesize airplayActive=_airplayActive - In the implementation block
@property (assign,nonatomic) char externalDisplay;                                   //@synthesize externalDisplay=_externalDisplay - In the implementation block
@property (nonatomic,readonly) char smallAirplayBackground; 
@property (nonatomic,retain) IMAVPlayerLayerView * videoLayerView;                   //@synthesize videoLayerView=_videoLayerView - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
@property (nonatomic,retain) NSString * airplayRouteName;                            //@synthesize airplayRouteName=_airplayRouteName - In the implementation block
@property (assign,nonatomic,__weak) IMAVPlayer * player;                             //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIImage * customAirplayTVImage;                         //@synthesize customAirplayTVImage=_customAirplayTVImage - In the implementation block
-(void)setVideoLayerView:(IMAVPlayerLayerView *)arg1 ;
-(void)setAirplayActive:(char)arg1 ;
-(void)setAirplayRouteName:(NSString *)arg1 ;
-(void)updateAirplayNoContentView;
-(IMAVPlayerLayerView *)videoLayerView;
-(void)layout:(char)arg1 ;
-(char)smallAirplayBackground;
-(char)airplayActive;
-(char)externalDisplay;
-(UIImage *)customAirplayTVImage;
-(void)setExternalDisplay:(char)arg1 ;
-(NSString *)airplayRouteName;
-(void)setCustomAirplayTVImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<IMAVVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IMAVVideoViewDelegate>)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVPlayerLayer *)videoLayer;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
@end

