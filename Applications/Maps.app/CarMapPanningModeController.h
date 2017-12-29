/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/CarMapPanningViewControllerDelegate.h>
#import <Maps/CarUIBarButtonItemsControllerDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/CarChromeModeController.h>

@class CarMapPanningViewController, CarChromeViewController, CarUIBarButtonItemsController, NSString, MKMapView, CarMapTrackingController, ChromeViewController;

@interface CarMapPanningModeController : NSObject <CarMapPanningViewControllerDelegate, CarUIBarButtonItemsControllerDelegate, MKMapViewDelegatePrivate, CarChromeModeController> {

	CarMapPanningViewController* _viewController;
	char _scrollWasEnabled;
	char _mapWasPanned;
	CarChromeViewController* _chromeViewController;
	CarUIBarButtonItemsController* _buttonController;

}

@property (nonatomic,retain) CarUIBarButtonItemsController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (nonatomic,readonly) char mapWasPanned;                                           //@synthesize mapWasPanned=_mapWasPanned - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) MKMapView * mapView; 
@property (readonly) char showUserTrackingButtonItem; 
@property (readonly) char showToggle3DButtonItem; 
@property (readonly) char showVolumeControlButtonItem; 
@property (readonly) char showSearchButton; 
@property (readonly) CarMapTrackingController * trackingController; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
-(void)layoutForUnobscuredBoundsChange;
-(char)showsMapView;
-(int)currentUsageTarget;
-(char)showsZoomControls;
-(char)showsExplicitPanButton;
-(char)showsSpeedLimit;
-(char)showsHeadingIndicator;
-(id)carFocusOrderSequences;
-(char)allowKnobNudgeMapPanning;
-(void)configureNavigationDisplay:(id)arg1 ;
-(char)allowMapZoomAndRecentering;
-(char)shouldTopBarModifyMapInsets;
-(char)shouldEmulateOverlayInset;
-(char)invalidAfterDisconnect;
-(ChromeViewController *)chromeViewController;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(void)doneButtonItemPressed;
-(char)showUserTrackingButtonItem;
-(char)showToggle3DButtonItem;
-(id)passThroughView;
-(CarUIBarButtonItemsController *)buttonController;
-(void)setButtonController:(CarUIBarButtonItemsController *)arg1 ;
-(void)carMapPanningViewControllerDidPan:(id)arg1 inDirection:(int)arg2 ;
-(char)mapWasPanned;
-(id)init;
-(id)navigationItem;
-(id)viewController;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(char)arg3 ;
-(MKMapView *)mapView;
-(void)_updateNavigationItemAnimated:(char)arg1 ;
@end

