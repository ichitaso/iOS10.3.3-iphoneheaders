/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsStandingColumnView.h>

@class ACSportsLoadingImageView, SiriUIContentLabel, SASportsTeam;

@interface ACSportsTeamStandingView : ACSportsStandingColumnView {

	ACSportsLoadingImageView* _teamLogoView;
	SiriUIContentLabel* _teamNameLabel;
	SiriUIContentLabel* _clinchedLabel;
	char _needTwoLineForTeamName;
	int _cardinalPosition;

}

@property (nonatomic,retain) SASportsTeam * entity; 
@property (assign,nonatomic) int cardinalPosition;               //@synthesize cardinalPosition=_cardinalPosition - In the implementation block
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(void)setCardinalPosition:(int)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(int)cardinalPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)contentHeight;
@end

