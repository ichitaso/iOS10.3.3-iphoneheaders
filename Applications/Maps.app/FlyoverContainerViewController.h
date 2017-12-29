/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/OverlayContainerViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Maps/PassThroughViewControllerDelegate.h>
#import <Maps/MapViewResponderHandling.h>

@class MKMapItem, FlyoverActionCoordinator, BlurredStatusBar, UILabel, MKMapView, NSString;

@interface FlyoverContainerViewController : OverlayContainerViewController <MKMapViewDelegate, PassThroughViewControllerDelegate, MapViewResponderHandling> {

	MKMapItem* _mapItem;
	FlyoverActionCoordinator* _flyoverActionCoordinator;
	BlurredStatusBar* _blurredStatusBar;
	int _tourStartViewMode;
	UILabel* _tourLabel;

}

@property (nonatomic,retain) BlurredStatusBar * blurredStatusBar;                              //@synthesize blurredStatusBar=_blurredStatusBar - In the implementation block
@property (nonatomic,readonly) MKMapView * mapView; 
@property (assign,nonatomic) int tourStartViewMode;                                            //@synthesize tourStartViewMode=_tourStartViewMode - In the implementation block
@property (nonatomic,retain) UILabel * tourLabel;                                              //@synthesize tourLabel=_tourLabel - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem;                                            //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) FlyoverActionCoordinator * flyoverActionCoordinator;              //@synthesize flyoverActionCoordinator=_flyoverActionCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)originalLayoutForViewController:(id)arg1 ;
-(id)passThroughView;
-(void)updateMapEdgeInsets;
-(void)didTapMapView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(FlyoverActionCoordinator *)flyoverActionCoordinator;
-(unsigned)thresholdLayoutForDimming;
-(void)hideChrome:(char)arg1 animated:(char)arg2 ;
-(void)_transparencyStatusDidChange:(id)arg1 ;
-(void)setFlyoverActionCoordinator:(FlyoverActionCoordinator *)arg1 ;
-(BlurredStatusBar *)blurredStatusBar;
-(void)setBlurredStatusBar:(BlurredStatusBar *)arg1 ;
-(int)tourStartViewMode;
-(void)setTourStartViewMode:(int)arg1 ;
-(UILabel *)tourLabel;
-(void)setTourLabel:(UILabel *)arg1 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)viewDidLoad;
-(id)initWithMapItem:(id)arg1 ;
-(void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(char)arg2 ;
-(void)mapViewWillStartFlyoverTour:(id)arg1 ;
-(MKMapItem *)mapItem;
-(MKMapView *)mapView;
-(void)_setupViews;
-(void)_setupConstraints;
@end

