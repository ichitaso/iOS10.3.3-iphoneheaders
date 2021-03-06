/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TransitSteppingAnalyticsDelegate;


@protocol StepActionCoordination <AppCoordination,ContaineeViewControllerDelegate>
@property (nonatomic,readonly) TransitSteppingAnalyticsDelegate * analyticsDelegate; 
@required
-(unsigned)originalLayoutForViewController:(id)arg1;
-(void)viewControllerPresentTray:(id)arg1;
-(void)viewControllerEndStepping:(id)arg1;
-(void)viewController:(id)arg1 presentIncidents:(id)arg2;
-(void)viewController:(id)arg1 presentClusteredOptionsOfLeg:(id)arg2 fromView:(id)arg3;
-(void)viewControllerShowRouteDetails:(id)arg1;
-(void)viewController:(id)arg1 showOverview:(char)arg2 zoomToMapRegion:(char)arg3;
-(void)viewController:(id)arg1 updateLocation:(id)arg2;
-(void)viewController:(id)arg1 updateStepIndex:(unsigned)arg2;
-(void)selectVKLabelMarker:(id)arg1;
-(char)canSelectVKLabelMarker:(id)arg1;
-(TransitSteppingAnalyticsDelegate *)analyticsDelegate;

@end

