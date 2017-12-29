/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIAlertControllerSystemProvidedPresentationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <Maps/BinaryTakeOneZipDelegate.h>

@protocol OS_dispatch_group, QuickActionMenuPresenterDelegate, PersonalizedItem, GEOTransitLineItem;
@class VKLabelMarker, SearchResult, MKMapItem, UIAlertController, UIGestureRecognizer, UIView, GEOPlaceActionDetails, QuickActionMenuAnchorView, UITapGestureRecognizer, UIAlertAction, MapsTheme, NSObject, BinaryTakeOneZip, CLLocation, UIViewController, NSString;

@interface QuickActionMenuPresenter : NSObject <UIAlertControllerSystemProvidedPresentationDelegate, UIGestureRecognizerDelegatePrivate, BinaryTakeOneZipDelegate> {

	VKLabelMarker* _labelMarker;
	SearchResult* _searchResult;
	MKMapItem* _resolvedMapItem;
	UIAlertController* _alertController;
	UIGestureRecognizer* _orbGesture;
	unsigned _resetCounter;
	CGPoint _gestureLocationInMap;
	UIView* _gestureSourceView;
	CGRect _gestureSourceRect;
	int _uiTarget;
	GEOPlaceActionDetails* _actionDetails;
	UIView* _gestureView;
	UIView* _anchorViewContainer;
	QuickActionMenuAnchorView* _anchorView;
	UITapGestureRecognizer* _tapGesture;
	UIAlertAction* _directionsAction;
	UIAlertAction* _callAction;
	UIAlertAction* _webAction;
	UIAlertAction* _shareAction;
	UIAlertAction* _removeDroppedPinAction;
	UIAlertAction* _cancelAction;
	UIAlertAction* _sendMyLocationAction;
	UIAlertAction* _transitLineViewOnMapAction;
	UIAlertAction* _transitLineDirectionsAction;
	char _haveNearestStation;
	MapsTheme* _mapsThemeForOrb;
	NSObject*<OS_dispatch_group> _resolveGroup;
	BinaryTakeOneZip* _showPlaceCardZip;
	char _didBeginPreviewAnimation;
	char _didCompletePresentation;
	char _didBeginDismissal;
	/*^block*/id _deferredHeaderUpdateBlock;
	char _enabled;
	id<QuickActionMenuPresenterDelegate> _delegate;
	id<PersonalizedItem> _place;
	id<GEOTransitLineItem> _transitLineItem;
	CLLocation* _lastValidLocation;
	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIAlertAction * directionsAction; 
@property (nonatomic,readonly) UIAlertAction * callAction; 
@property (nonatomic,readonly) UIAlertAction * webAction; 
@property (nonatomic,readonly) UIAlertAction * shareAction; 
@property (nonatomic,readonly) UIAlertAction * removeDroppedPinAction; 
@property (nonatomic,readonly) UIAlertAction * cancelAction; 
@property (nonatomic,readonly) UIAlertAction * sendMyLocationAction; 
@property (nonatomic,readonly) UIAlertAction * transitLineViewOnMapAction; 
@property (nonatomic,readonly) UIAlertAction * transitLineDirectionsAction; 
@property (assign,nonatomic,__weak) id<QuickActionMenuPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                       //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) VKLabelMarker * labelMarker;                                       //@synthesize labelMarker=_labelMarker - In the implementation block
@property (nonatomic,retain) MKMapItem * resolvedMapItem;                                       //@synthesize resolvedMapItem=_resolvedMapItem - In the implementation block
@property (nonatomic,retain) id<PersonalizedItem> place;                                        //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> transitLineItem;                            //@synthesize transitLineItem=_transitLineItem - In the implementation block
@property (nonatomic,readonly) CLLocation * lastValidLocation;                                  //@synthesize lastValidLocation=_lastValidLocation - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageForStyleAttributes:(id)arg1 ;
-(VKLabelMarker *)labelMarker;
-(void)binaryTakeOneZipDidReceiveBothSignals:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 inView:(id)arg2 ;
-(void)createAlertControllerIfNeeded;
-(UIAlertAction *)directionsAction;
-(UIAlertAction *)callAction;
-(UIAlertAction *)webAction;
-(UIAlertAction *)removeDroppedPinAction;
-(UIAlertAction *)shareAction;
-(UIAlertAction *)sendMyLocationAction;
-(UIAlertAction *)transitLineDirectionsAction;
-(UIAlertAction *)transitLineViewOnMapAction;
-(id)anchorContentView;
-(void)_setupAnchorView;
-(id)mapsThemeForOrb;
-(id)anchorBackgroundColor;
-(void)updateForSearchResult:(id)arg1 ;
-(void)updateForParkedCar:(id)arg1 ;
-(void)_updateSearchResultWithMapItemIfNeeded:(id)arg1 ;
-(void)updateForLabelMarker:(id)arg1 ;
-(void)updateForPlace:(id)arg1 ;
-(void)_whenItIsSafeToUpdateHeader:(/*^block*/id)arg1 ;
-(void)setLabelMarker:(VKLabelMarker *)arg1 ;
-(void)setResolvedMapItem:(MKMapItem *)arg1 ;
-(void)updateActionEnableStates;
-(void)handleTapInAnchorView:(id)arg1 ;
-(void)_handleTapInAnchorView;
-(char)shouldDismissAlertController;
-(void)_willDismissAlertController;
-(char)_shouldBeginOrbGestureAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)cancelPresentationGesture;
-(void)resolveNearestTransitStation;
-(void)actionMenuDidFinish;
-(MKMapItem *)resolvedMapItem;
-(id)init;
-(char)enabled;
-(void)setDelegate:(id<QuickActionMenuPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<QuickActionMenuPresenterDelegate>)delegate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(UIAlertAction *)cancelAction;
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(char)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2 ;
-(void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(char)arg2 ;
-(SearchResult *)searchResult;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(id<PersonalizedItem>)place;
-(void)setPlace:(id<PersonalizedItem>)arg1 ;
-(void)dismissAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performAction:(id)arg1 ;
-(void)setTransitLineItem:(id<GEOTransitLineItem>)arg1 ;
-(id<GEOTransitLineItem>)transitLineItem;
-(CLLocationCoordinate2D)coordinate;
-(CLLocation *)lastValidLocation;
@end

