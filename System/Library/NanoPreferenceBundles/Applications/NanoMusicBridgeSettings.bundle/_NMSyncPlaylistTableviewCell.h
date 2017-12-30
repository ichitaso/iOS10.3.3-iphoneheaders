/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMusicBridgeSettings.bundle/NanoMusicBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIView, UIProgressView, UILabel;

@interface _NMSyncPlaylistTableviewCell : PSTableCell {

	UIView* _progressContainerView;
	char _shouldShowProgressDetails;
	UIProgressView* _progressView;
	UILabel* _trackLabel;
	UILabel* _percentageLabel;

}

@property (nonatomic,retain) UIProgressView * progressView;               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UILabel * trackLabel;                        //@synthesize trackLabel=_trackLabel - In the implementation block
@property (nonatomic,retain) UILabel * percentageLabel;                   //@synthesize percentageLabel=_percentageLabel - In the implementation block
@property (assign,nonatomic) char shouldShowProgressDetails;              //@synthesize shouldShowProgressDetails=_shouldShowProgressDetails - In the implementation block
-(void)setShouldShowProgressDetails:(char)arg1 ;
-(void)setPercentageLabel:(UILabel *)arg1 ;
-(char)shouldShowProgressDetails;
-(UILabel *)percentageLabel;
-(void)setTrackLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)trackLabel;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
