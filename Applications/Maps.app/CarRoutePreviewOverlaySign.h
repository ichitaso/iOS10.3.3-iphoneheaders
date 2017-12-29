/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Maps/CarRoutePreviewPlacePickingOverlayDelegate.h>
#import <Maps/CarRoutePreviewAlternatesOverlayDelegate.h>
#import <Maps/CarRoutePreviewAlternatesOverlayDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <Maps/CarFocusOrderCollection.h>

@protocol CarRoutePreviewSign, CarRoutePreviewOverlayDelegate, CarRoutePreviewOverlayDataSource;
@class CarRoutePreviewPlacePickingOverlaySign, CarRoutePreviewAlternatesOverlaySign, UIView, CarFocusableImageButton, NSString;

@interface CarRoutePreviewOverlaySign : UIView <CarRoutePreviewPlacePickingOverlayDelegate, CarRoutePreviewAlternatesOverlayDelegate, CarRoutePreviewAlternatesOverlayDelegate, CAAnimationDelegate, CarFocusOrderCollection> {

	CarRoutePreviewPlacePickingOverlaySign* _placePicker;
	CarRoutePreviewAlternatesOverlaySign* _routePicker;
	UIView*<CarRoutePreviewSign> _subsign;
	UIView* _signContainer;
	CarFocusableImageButton* _startButton;
	UIView* _keyline;
	char _showingAlternateRoutes;
	id<CarRoutePreviewOverlayDelegate> _delegate;
	id<CarRoutePreviewOverlayDataSource> _dataSource;
	int _style;

}

@property (assign,getter=isShowingAlternateRoutes,nonatomic) char showingAlternateRoutes;              //@synthesize showingAlternateRoutes=_showingAlternateRoutes - In the implementation block
@property (nonatomic,__weak,readonly) id<CarRoutePreviewOverlayDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<CarRoutePreviewOverlayDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int style;                                                                //@synthesize style=_style - In the implementation block
@property (assign,getter=isStartButtonEnabled,nonatomic) char startButtonEnabled; 
@property (nonatomic,readonly) char wantsFocus; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)focusOrderSubItems;
-(id)identifierForFocusItem:(id)arg1 ;
-(id)focusItemForIdentifier:(id)arg1 ;
-(void)selectedRouteAtIndex:(unsigned)arg1 ;
-(void)nextRoute;
-(void)previousRoute;
-(void)showAlternateRoutes;
-(void)hideAlternateRoutes;
-(void)handoffDestination;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(void)_startButtonTapped:(id)arg1 ;
-(void)setShowingAlternateRoutes:(char)arg1 ;
-(void)_updateSignVisibility;
-(void)setCurrentSign:(id)arg1 animated:(char)arg2 ;
-(void)setStartButtonEnabled:(char)arg1 ;
-(char)isStartButtonEnabled;
-(char)_placePickerWantsFocus;
-(char)isShowingAlternateRoutes;
-(void)layoutSubviews;
-(void)reloadData;
-(id<CarRoutePreviewOverlayDataSource>)dataSource;
-(id<CarRoutePreviewOverlayDelegate>)delegate;
-(int)style;
-(id)preferredFocusEnvironments;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(char)wantsFocus;
-(void)_updateStyling;
@end
