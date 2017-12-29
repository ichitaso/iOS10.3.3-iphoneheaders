/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class RestaurantReservationAnalyticsBookingSession;

@interface ReservationErrorAlertController : UIAlertController {

	RestaurantReservationAnalyticsBookingSession* _bookingSession;
	int _displayView;

}

@property (nonatomic,retain) RestaurantReservationAnalyticsBookingSession * bookingSession;              //@synthesize bookingSession=_bookingSession - In the implementation block
@property (assign,nonatomic) int displayView;                                                            //@synthesize displayView=_displayView - In the implementation block
-(RestaurantReservationAnalyticsBookingSession *)bookingSession;
-(void)setBookingSession:(RestaurantReservationAnalyticsBookingSession *)arg1 ;
-(void)setDisplayView:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(int)displayView;
@end

