/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RidesharingErrorAlertProvider, INIntent, INIntentResponse, NSString, UIImage, CLLocation, NSNumber, NSDate, NSDateComponents, CLPlacemark, RidesharingSpecialPricingBadge, NSArray, RidesharingAnalyticsBookedSession;


@protocol RidesharingCurrentRideProvider <NSObject>
@property (getter=isRequesting,nonatomic,readonly) char requesting; 
@property (getter=isOngoing,nonatomic,readonly) char ongoing; 
@property (getter=isScheduled,nonatomic,readonly) char scheduled; 
@property (nonatomic,readonly) int finishingState; 
@property (nonatomic,readonly) RidesharingErrorAlertProvider * bookingErrorAlert; 
@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) INIntentResponse * intentResponse; 
@property (nonatomic,readonly) char hasValidRideStatus; 
@property (nonatomic,readonly) NSString * rideIdentifier; 
@property (nonatomic,readonly) NSString * appBundleIdentifier; 
@property (nonatomic,readonly) NSString * trayTitle; 
@property (nonatomic,readonly) NSString * traySubtitle; 
@property (nonatomic,readonly) UIImage * trayIcon; 
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
@property (nonatomic,readonly) NSArray * cardFareLineItems; 
@property (nonatomic,readonly) NSString * cardDisclaimer; 
@property (nonatomic,readonly) UIImage * cardIcon; 
@property (nonatomic,readonly) NSArray * cardActions; 
@property (nonatomic,readonly) NSString * cardRideCompletedActionButtonTitle; 
@property (nonatomic,readonly) UIImage * templatedViewAppIcon; 
@property (nonatomic,readonly) NSString * templatedViewTitle; 
@property (nonatomic,readonly) NSString * templatedViewSubtitle; 
@property (nonatomic,readonly) NSString * bannerAttributionTitle; 
@property (nonatomic,readonly) NSString * cancelCommandTitle; 
@property (nonatomic,readonly) NSString * contactCommandTitle; 
@property (nonatomic,readonly) NSString * openInAppCommandTitle; 
@property (nonatomic,readonly) RidesharingAnalyticsBookedSession * analyticsBookedSession; 
@required
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2;
-(void)getRemoteViewControllerWithDelegate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)openInApp;
-(void)openInAppRideCompleted;
-(char)isRequesting;
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
-(char)isScheduled;
-(void)cancel;
-(void)removeObserver:(id)arg1;
-(NSString *)appBundleIdentifier;
-(INIntent *)intent;
-(INIntentResponse *)intentResponse;
-(NSArray *)cardActions;
-(NSDate *)estimatedPickupDate;
-(CLPlacemark *)pickupLocation;
-(NSString *)rideIdentifier;

@end

