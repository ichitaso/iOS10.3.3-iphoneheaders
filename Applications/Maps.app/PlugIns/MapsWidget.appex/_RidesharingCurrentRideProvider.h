/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INGetRideStatusIntentResponseObserver.h>
#import <libobjc.A.dylib/INIntentResponseObserver.h>
#import <Maps/RidesharingCurrentRideProvider.h>

@protocol _RidesharingOperation;
@class NSMapTable, NSString, INRideStatus, _RidesharingRideChoice, _RidesharingApplication, NSNumber, MKMapItem, NSUserActivity, INGetRideStatusIntent, NSMutableArray, NSTimer, INGetRideStatusIntentResponse, RidesharingErrorAlertProvider, INIntent, INIntentResponse, UIImage, RidesharingAnalyticsBookedSession, NSArray, CLLocation, NSDate, NSDateComponents, CLPlacemark, RidesharingSpecialPricingBadge;

@interface _RidesharingCurrentRideProvider : NSObject <INGetRideStatusIntentResponseObserver, INIntentResponseObserver, RidesharingCurrentRideProvider> {

	char _completed;
	char _alreadyExistingRide;
	char _shouldObserveRide;
	NSMapTable* _observers;
	NSString* _rideIdentifier;
	INRideStatus* _rideStatus;
	_RidesharingRideChoice* _choice;
	_RidesharingApplication* _app;
	NSString* _choiceName;
	NSNumber* _partySize;
	MKMapItem* _originItem;
	MKMapItem* _destinationItem;
	NSString* _formattedPriceRange;
	char _hasSetUpObserving;
	id<_RidesharingOperation> _observingOperation;
	NSUserActivity* _activityToOpenWithForOpenInButton;
	NSUserActivity* _activityToOpenWithForCancelButton;
	NSUserActivity* _activityToOpenWithForRideCompletedButton;
	INGetRideStatusIntent* _liveObservationIntent;
	char _hasAskedToStopObserving;
	NSMutableArray* _stopObservingCompletionHandlers;
	NSTimer* _observationRetryTimer;
	unsigned _countOfShortObservationRetryAttempts;
	unsigned _countOfLongObservationRetryAttempts;
	char _hasSetupOperationInFlight;
	NSTimer* _intentResponseUpdateCoalescingTimer;
	INGetRideStatusIntentResponse* _coalescedIntentResponse;
	NSTimer* _completionTimer;
	char _requesting;
	char _ongoing;
	char _scheduled;
	RidesharingErrorAlertProvider* _bookingErrorAlert;
	INIntent* _intent;
	INIntentResponse* _intentResponse;
	NSString* _appBundleIdentifier;
	UIImage* _trayIcon;
	int _finishingState;
	RidesharingAnalyticsBookedSession* _analyticsBookedSession;
	NSArray* _cardFareLineItems;
	NSArray* _cardActions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isRequesting,nonatomic,readonly) char requesting;                                        //@synthesize requesting=_requesting - In the implementation block
@property (getter=isOngoing,nonatomic,readonly) char ongoing;                                              //@synthesize ongoing=_ongoing - In the implementation block
@property (getter=isScheduled,nonatomic,readonly) char scheduled;                                          //@synthesize scheduled=_scheduled - In the implementation block
@property (nonatomic,readonly) int finishingState;                                                         //@synthesize finishingState=_finishingState - In the implementation block
@property (nonatomic,readonly) RidesharingErrorAlertProvider * bookingErrorAlert;                          //@synthesize bookingErrorAlert=_bookingErrorAlert - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                                          //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentResponse * intentResponse;                                          //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,readonly) char hasValidRideStatus; 
@property (nonatomic,readonly) NSString * rideIdentifier;                                                  //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                                             //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * trayTitle; 
@property (nonatomic,readonly) NSString * traySubtitle; 
@property (nonatomic,readonly) UIImage * trayIcon;                                                         //@synthesize trayIcon=_trayIcon - In the implementation block
@property (nonatomic,readonly) NSString * driverPhoneNumber; 
@property (nonatomic,readonly) CLLocation * vehicleLocation; 
@property (nonatomic,readonly) UIImage * vehicleImage; 
@property (nonatomic,readonly) NSNumber * pickupETAMinutes; 
@property (nonatomic,readonly) NSDate * expectedRideEndDate; 
@property (nonatomic,readonly) NSDate * estimatedPickupDate; 
@property (nonatomic,readonly) NSDateComponents * scheduledPickupWindowStartDateComponents; 
@property (nonatomic,readonly) CLPlacemark * pickupLocation; 
@property (nonatomic,readonly) CLPlacemark * dropoffLocation; 
@property (nonatomic,readonly) NSString * cardHeaderOriginName; 
@property (nonatomic,readonly) NSString * cardHeaderDestinationName; 
@property (nonatomic,readonly) NSString * cardTitle; 
@property (nonatomic,readonly) NSString * cardSubtitle; 
@property (nonatomic,readonly) NSString * cardTertiaryTitle; 
@property (nonatomic,readonly) RidesharingSpecialPricingBadge * cardFormattedPriceRangeBadge; 
@property (nonatomic,readonly) NSArray * cardFareLineItems;                                                //@synthesize cardFareLineItems=_cardFareLineItems - In the implementation block
@property (nonatomic,readonly) NSString * cardDisclaimer; 
@property (nonatomic,readonly) UIImage * cardIcon; 
@property (nonatomic,readonly) NSArray * cardActions;                                                      //@synthesize cardActions=_cardActions - In the implementation block
@property (nonatomic,readonly) NSString * cardRideCompletedActionButtonTitle; 
@property (nonatomic,readonly) UIImage * templatedViewAppIcon; 
@property (nonatomic,readonly) NSString * templatedViewTitle; 
@property (nonatomic,readonly) NSString * templatedViewSubtitle; 
@property (nonatomic,readonly) NSString * bannerAttributionTitle; 
@property (nonatomic,readonly) NSString * cancelCommandTitle; 
@property (nonatomic,readonly) NSString * contactCommandTitle; 
@property (nonatomic,readonly) NSString * openInAppCommandTitle; 
@property (nonatomic,readonly) RidesharingAnalyticsBookedSession * analyticsBookedSession;                 //@synthesize analyticsBookedSession=_analyticsBookedSession - In the implementation block
-(char)isRequesting;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_invokeChangeHandlers;
-(void)getRemoteViewControllerWithDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openInApp;
-(void)openInAppRideCompleted;
-(char)isOngoing;
-(int)finishingState;
-(RidesharingErrorAlertProvider *)bookingErrorAlert;
-(char)hasValidRideStatus;
-(NSString *)trayTitle;
-(NSString *)traySubtitle;
-(UIImage *)trayIcon;
-(NSString *)driverPhoneNumber;
-(CLLocation *)vehicleLocation;
-(UIImage *)vehicleImage;
-(NSNumber *)pickupETAMinutes;
-(NSDate *)expectedRideEndDate;
-(NSDateComponents *)scheduledPickupWindowStartDateComponents;
-(CLPlacemark *)dropoffLocation;
-(NSString *)cardHeaderOriginName;
-(NSString *)cardHeaderDestinationName;
-(NSString *)cardTitle;
-(NSString *)cardSubtitle;
-(NSString *)cardTertiaryTitle;
-(RidesharingSpecialPricingBadge *)cardFormattedPriceRangeBadge;
-(NSArray *)cardFareLineItems;
-(NSString *)cardDisclaimer;
-(UIImage *)cardIcon;
-(NSString *)cardRideCompletedActionButtonTitle;
-(UIImage *)templatedViewAppIcon;
-(NSString *)templatedViewTitle;
-(NSString *)templatedViewSubtitle;
-(NSString *)bannerAttributionTitle;
-(NSString *)cancelCommandTitle;
-(NSString *)contactCommandTitle;
-(NSString *)openInAppCommandTitle;
-(RidesharingAnalyticsBookedSession *)analyticsBookedSession;
-(id)_liveObservationIntent;
-(id)initByRequestingFromPickedDetails:(id)arg1 origin:(id)arg2 destination:(id)arg3 bookingSession:(id)arg4 ;
-(id)initByRequestingWithChoice:(id)arg1 intent:(id)arg2 lastConfirmationResponse:(id)arg3 application:(id)arg4 origin:(id)arg5 destination:(id)arg6 bookingSession:(id)arg7 ;
-(id)initWithAlreadyExistingRideWithApplication:(id)arg1 statusResponse:(id)arg2 ;
-(void)beginObservingAlreadyExistingRide;
-(void)stopObservingRideWithCompletion:(/*^block*/id)arg1 ;
-(void)_intentResponseUpdateCoalescingTimerFired;
-(void)_updateFromResponse:(id)arg1 ;
-(void)_updateFromResponse:(id)arg1 invokingChangeHandlers:(char)arg2 ;
-(void)_finishAfterCompletion;
-(void)setToFinished;
-(char)_shouldHaveOngoingObservation;
-(void)_updateObservingAndInvokeStopCompletionsIfNeeded;
-(void)_trySchedulingObservationRetryAttemptOrEndObservation;
-(id)pickupAddress;
-(id)_receivedTrayTitle;
-(id)_scheduledTrayTitle;
-(id)_confirmedTrayTitle;
-(id)_approachingPickupTrayTitle;
-(id)_pickupTrayTitle;
-(id)_ongoingTrayTitle;
-(id)_completedTrayTitle;
-(id)_scheduledTraySubtitle;
-(id)_completedTraySubtitle;
-(id)_receivedCardSubtitle;
-(id)_scheduledCardSubtitle;
-(id)_confirmedCardSubtitle;
-(id)_approachingPickupCardSubtitle;
-(id)_pickupCardSubtitle;
-(id)_ongoingCardSubtitle;
-(id)_completedCardSubtitle;
-(id)_completedCardTertiaryTitle;
-(char)_shouldShowPayment;
-(id)_receivedTemplatedViewTitle;
-(id)_confirmedTemplatedViewTitle;
-(id)_approachingPickupTemplatedViewTitle;
-(id)_pickupTemplatedViewTitle;
-(id)_ongoingTemplatedViewTitle;
-(id)_completedTemplatedViewTitle;
-(id)_receivedTemplatedViewSubtitle;
-(id)_confirmedTemplatedViewSubtitle;
-(id)_approachingPickupTemplatedViewSubtitle;
-(id)_pickupTemplatedViewSubtitle;
-(id)_ongoingTemplatedViewSubtitle;
-(id)_completedTemplatedViewSubtitle;
-(char)matchesRidesharingExtensionIdentifier:(id)arg1 ;
-(char)matchesApplicationIdentifier:(id)arg1 ;
-(char)shouldReplaceProvider:(id)arg1 ;
-(char)isScheduled;
-(void)cancel;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)_commonInit;
-(NSString *)appBundleIdentifier;
-(INIntent *)intent;
-(INIntentResponse *)intentResponse;
-(NSArray *)cardActions;
-(void)_localeDidChange;
-(NSDate *)estimatedPickupDate;
-(void)_complete;
-(id)destinationAddress;
-(CLPlacemark *)pickupLocation;
-(NSString *)rideIdentifier;
-(void)intentResponseDidUpdate:(id)arg1 ;
-(void)getRideStatusResponseDidUpdate:(id)arg1 ;
@end

