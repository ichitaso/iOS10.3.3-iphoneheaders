/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Music.app/PlugIns/MusicMessagesApp.appex/MusicMessagesApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicMessagesApp/MusicMessagesApp-Structs.h>
#import <UIKit/UIView.h>

@interface MusicMessagesApp.NowPlayingIndicatorView : UIView {

	 interLevelSpacing;
	 levelWidth;
	 minimumLevelHeight;
	 maximumLevelHeight;
	 isStopped;
	 showsIdealizedLevelPositionsWhenStopped;
	 _levelViews;

}

@property (assign,nonatomic) float interLevelSpacing; 
@property (assign,nonatomic) float levelWidth; 
@property (assign,nonatomic) float minimumLevelHeight; 
@property (assign,nonatomic) float maximumLevelHeight; 
@property (assign,nonatomic) char isStopped; 
@property (assign,nonatomic) char showsIdealizedLevelPositionsWhenStopped; 
-(void)setIsStopped:(char)arg1 ;
-(char)showsIdealizedLevelPositionsWhenStopped;
-(void)setShowsIdealizedLevelPositionsWhenStopped:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)_removeAllAnimations:(char)arg1 ;
-(char)isStopped;
-(void)setLevelWidth:(float)arg1 ;
-(void)setMinimumLevelHeight:(float)arg1 ;
-(float)interLevelSpacing;
-(void)setInterLevelSpacing:(float)arg1 ;
-(float)levelWidth;
-(float)maximumLevelHeight;
-(float)minimumLevelHeight;
-(void)setMaximumLevelHeight:(float)arg1 ;
@end

