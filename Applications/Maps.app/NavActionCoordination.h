/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SearchInfo;


@protocol NavActionCoordination <NSObject,AppCoordination,ContaineeViewControllerDelegate>
@property (nonatomic,readonly) id<NavTrafficIncidentAlertCoordination> trafficIncidentAlertCoordinator; 
@property (nonatomic,retain) SearchInfo * currentSearchInfo; 
@property (nonatomic,readonly) unsigned currentMapViewZoom; 
@property (assign,getter=isNavCameraPanned,nonatomic) char navCameraPanned; 
@property (getter=isSearchingAlongTheRoute,nonatomic,readonly) char searchingAlongTheRoute; 
@property (assign,nonatomic) unsigned defaultContaineeViewControllerType; 
@required
-(char)canSelectVKLabelMarker:(id)arg1;
-(void)viewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;
-(id<NavTrafficIncidentAlertCoordination>)trafficIncidentAlertCoordinator;
-(void)updateCameraForTraits:(id)arg1 containerStyle:(unsigned)arg2;
-(void)detourToMapItem:(id)arg1;
-(void)presentWithContainerViewController:(id)arg1;
-(void)viewControllerOpenListStep:(id)arg1;
-(void)viewControllerOpenSearch:(id)arg1;
-(void)viewControllerEndNavigation:(id)arg1;
-(void)viewControllerOpenAudioSettings:(id)arg1;
-(void)viewController:(id)arg1 switchToOverview:(char)arg2;
-(void)viewController:(id)arg1 updateMapRect:(SCD_Struct_RA12)arg2;
-(void)viewController:(id)arg1 endRouteConfirmRequired:(char)arg2;
-(void)recenterNavigation;
-(void)mapViewDidSelectLabelMarker:(id)arg1;
-(void)selectMapItem:(id)arg1;
-(void)repeatGuidanceInstruction;
-(void)toggleTemporaryStatusBar;
-(char)shouldShowNavRecenterButton;
-(void)dismissPlacecard;
-(void)dismissSearchAlongRoute;
-(void)dismissModalContainee;
-(void)dismissTray;
-(void)presentTray;
-(SearchInfo *)currentSearchInfo;
-(void)setCurrentSearchInfo:(id)arg1;
-(unsigned)currentMapViewZoom;
-(char)isNavCameraPanned;
-(void)setNavCameraPanned:(char)arg1;
-(char)isSearchingAlongTheRoute;
-(unsigned)defaultContaineeViewControllerType;
-(void)setDefaultContaineeViewControllerType:(unsigned)arg1;

@end

