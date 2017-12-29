/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsMatchupScheduleTeamView, UIScrollView, NSMutableArray, ACSportsMatchupScheduleLineScoreView, UILabel, SiriUIKeyline, SASportsMatchup, SASportsLeague;

@interface ACSportsMatchupScheduleView : ACSportsEntityView {

	ACSportsMatchupScheduleTeamView* _firstTeamView;
	ACSportsMatchupScheduleTeamView* _secondTeamView;
	UIScrollView* _lineScoreScrollView;
	NSMutableArray* _lineScoreViews;
	ACSportsMatchupScheduleLineScoreView* _totalLineScoreView;
	char _hasGameTimeAndDate;
	UILabel* _scheduleStatusLabel;
	UILabel* _seriesDescriptionLabel;
	UILabel* _tvLabel;
	SiriUIKeyline* _middleKeyline;
	SiriUIKeyline* _seriesDescriptionKeyline;
	SiriUIKeyline* _firstTeamKeyline;
	char _isFirstHeaderGroup;
	char _isMultiLine;
	SASportsMatchup* _matchup;
	SASportsLeague* _league;

}

@property (nonatomic,readonly) SASportsMatchup * matchup;              //@synthesize matchup=_matchup - In the implementation block
@property (nonatomic,readonly) SASportsLeague * league;                //@synthesize league=_league - In the implementation block
@property (assign,nonatomic) char isFirstHeaderGroup;                  //@synthesize isFirstHeaderGroup=_isFirstHeaderGroup - In the implementation block
@property (assign,nonatomic) char isMultiLine;                         //@synthesize isMultiLine=_isMultiLine - In the implementation block
+(id)viewWithMatchup:(id)arg1 league:(id)arg2 frame:(CGRect)arg3 ;
-(void)prepareForAppearance;
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(void)setIsFirstHeaderGroup:(char)arg1 ;
-(void)setMatchup:(id)arg1 league:(id)arg2 ;
-(void)setIsMultiLine:(char)arg1 ;
-(float)_legendHeight;
-(char)isFirstHeaderGroup;
-(float)_seriesDescriptionHeight;
-(float)_secondLineHeight;
-(float)_unlocalizedHeaderHeight;
-(float)_seriesDescriptionBaselineAdjust;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SASportsLeague *)league;
-(SASportsMatchup *)matchup;
-(char)isMultiLine;
-(float)contentHeight;
-(float)_headerHeight;
@end

