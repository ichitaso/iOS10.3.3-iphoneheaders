/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PassThroughViewControllerDelegate.h>
#import <Maps/CarRoutePreviewOverlayDelegate.h>
#import <Maps/CarRoutePreviewOverlayDataSource.h>
#import <Maps/SearchSessionObserver.h>
#import <Maps/CarChromeModeController.h>

@class PassThroughViewController, CarRoutePreviewOverlaySign, CustomPOIsController, PersonalizedItemManager, NavigationCustomFeaturesSource, NSArray, SearchSession, CarChromeViewController, NSString, ChromeViewController;

@interface CarNavigationSearchResultsModeController : NSObject <PassThroughViewControllerDelegate, CarRoutePreviewOverlayDelegate, CarRoutePreviewOverlayDataSource, SearchSessionObserver, CarChromeModeController> {

	PassThroughViewController* _viewController;
	CarRoutePreviewOverlaySign* _searchResultsSign;
	unsigned _selectedIndex;
	CustomPOIsController* _customPOIsController;
	PersonalizedItemManager* _itemManager;
	NavigationCustomFeaturesSource* _customFeaturesSource;
	NSArray* _mapItems;
	NSArray* _searchResults;
	SearchSession* _searchSession;
	CarChromeViewController* _chromeViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
-(char)showsMapView;
-(id)overlayItemsForState:(id)arg1 ;
-(int)backButtonUsageActionToMode:(id)arg1 ;
-(int)currentUsageTarget;
-(char)showsNavPanRecenterButton;
-(id)carFocusOrderSequences;
-(id)identifierForFocusItem:(id)arg1 ;
-(id)preferredCarFocusEnvironments;
-(id)focusItemForIdentifier:(id)arg1 ;
-(void)configureNavigationDisplay:(id)arg1 ;
-(ChromeViewController *)chromeViewController;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(id)passThroughView;
-(void)searchSessionWillPerformSearch:(id)arg1 ;
-(void)searchSessionDidFail:(id)arg1 ;
-(void)searchSessionDidChangeSearchFieldItem:(id)arg1 ;
-(void)searchSessionDidChangeSearchResults:(id)arg1 ;
-(void)searchSessionDidInvalidate:(id)arg1 ;
-(id)etaForPreviewSign:(id)arg1 ;
-(unsigned)selectedIndexForPreviewSign:(id)arg1 ;
-(unsigned)numberOfResultsForPreviewSign:(id)arg1 ;
-(id)currentRoutesForPreviewSign:(id)arg1 ;
-(unsigned)selectedRouteIndexForPreviewSign:(id)arg1 ;
-(id)titleForPreviewSign:(id)arg1 ;
-(id)subtitleForPreviewSign:(id)arg1 ;
-(void)routePreviewSignSelectedNext:(id)arg1 ;
-(void)routePreviewSignSelectedPrevious:(id)arg1 ;
-(void)routePreviewSignSelectedStart:(id)arg1 ;
-(void)routePreviewSign:(id)arg1 selectedAlternateRouteAtIndex:(unsigned)arg2 ;
-(void)routePreviewSign:(id)arg1 isShowingAlternates:(char)arg2 ;
-(id)initWithSearchSession:(id)arg1 ;
-(void)setSearchSession:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 selectedDestinationIndex:(unsigned)arg2 ;
-(id)initWithSearchResults:(id)arg1 selectedResultIndex:(unsigned)arg2 ;
-(id)initWithMapItems:(id)arg1 selectedItemIndex:(unsigned)arg2 ;
-(void)setDestinations:(id)arg1 selectedDestinationIndex:(unsigned)arg2 ;
-(void)setSearchResults:(id)arg1 selectedResultIndex:(unsigned)arg2 ;
-(void)setMapItems:(id)arg1 selectedItemIndex:(unsigned)arg2 ;
-(void)_updateSelectedSearchResultAnnotation;
-(void)_updateContext;
-(void)_updateContextAndDisplay;
-(unsigned)_validateSelectedIndex:(unsigned)arg1 forCount:(unsigned)arg2 ;
-(double)_detourDistanceToMapItem:(id)arg1 ;
-(id)init;
-(id)viewController;
-(void)_updateDisplay;
-(void)_cancelButtonTapped:(id)arg1 ;
-(char)showsNavigationBar;
@end

