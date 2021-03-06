/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SettingsTableViewControllerDelegate <NSObject>
@required
-(id)disallowedViewModes;
-(char)isTrafficDisplayed;
-(char)showsEnvironments;
-(char)showsRadarComposer;
-(char)canShow3DMode;
-(char)is3DModeEnabled;
-(void)toggle3D;
-(char)canShowLabels;
-(char)viewModeSwitchingAvailable;
-(char)canDisplayTraffic;
-(void)setTrafficDisplayed:(char)arg1;
-(void)setShouldChangeViewModeForTraffic:(char)arg1;
-(void)markMyLocation;
-(void)proceedToAddAPlace;
-(void)proceedToReportAProblem;
-(void)proceedToEnvironmentsSelector;
-(void)presentAttributions;
-(void)presentWeatherAttribution;
-(int)viewMode;
-(id)mapAttribution;
-(void)setViewMode:(int)arg1;

@end

