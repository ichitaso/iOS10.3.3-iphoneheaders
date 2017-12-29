/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ContaineeViewController.h>
#import <Maps/HeaderViewDelegate.h>

@class TrafficIncidentsViewController, ContainerHeaderView, TrafficIncidentTitleView, VKTrafficIncident, NSString;

@interface TrafficIncidentContaineeViewController : ContaineeViewController <HeaderViewDelegate> {

	/*^block*/id _dismissHandler;
	TrafficIncidentsViewController* _incidentsViewController;
	ContainerHeaderView* _headerView;
	TrafficIncidentTitleView* _titleView;

}

@property (nonatomic,readonly) TrafficIncidentsViewController * incidentsViewController;              //@synthesize incidentsViewController=_incidentsViewController - In the implementation block
@property (nonatomic,retain) ContainerHeaderView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) TrafficIncidentTitleView * titleView;                                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) VKTrafficIncident * incident; 
@property (nonatomic,copy) id dismissHandler;                                                         //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (assign,nonatomic) char visualEffectsDisabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(void)headerViewButtonTapped:(id)arg1 ;
-(void)headerViewTapped:(id)arg1 ;
-(void)setIncident:(VKTrafficIncident *)arg1 ;
-(char)visualEffectsDisabled;
-(void)setVisualEffectsDisabled:(char)arg1 ;
-(TrafficIncidentsViewController *)incidentsViewController;
-(id)init;
-(TrafficIncidentTitleView *)titleView;
-(void)setTitleView:(TrafficIncidentTitleView *)arg1 ;
-(void)viewDidLoad;
-(ContainerHeaderView *)headerView;
-(void)setHeaderView:(ContainerHeaderView *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(VKTrafficIncident *)incident;
-(void)_updateHeaderView;
@end

