/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Maps/RestaurantReservationsConfirmationHeaderCellDelegate.h>
#import <Maps/ExtensionFlowViewControllerChildController.h>

@protocol RestaurantReservationConfirmationViewControllerDelegate;
@class INRestaurantReservationUserBooking, UITableView, ExtensionsPrimaryDetailsView, ExtensionsSecondaryDetailsView, ExtensionsActionsFooterView, NSDateFormatter, NSNumberFormatter, MKMapItem, ReservationAnalyticsCaptor, NSString, NSArray;

@interface RestaurantReservationConfirmationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RestaurantReservationsConfirmationHeaderCellDelegate, ExtensionFlowViewControllerChildController> {

	INRestaurantReservationUserBooking* _userBooking;
	id<RestaurantReservationConfirmationViewControllerDelegate> _reservationDelegate;
	UITableView* _tableView;
	ExtensionsPrimaryDetailsView* _primaryDetailsView;
	ExtensionsSecondaryDetailsView* _secondaryDetailsView;
	ExtensionsActionsFooterView* _openAppView;
	NSDateFormatter* _dateFormatter;
	NSNumberFormatter* _numberFormatter;
	MKMapItem* _mapItem;
	ReservationAnalyticsCaptor* _analyticsCaptor;
	NSString* _appName;
	NSArray* _buttons;
	NSArray* _sections;

}

@property (nonatomic,retain) UITableView * tableView;                                                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) ExtensionsPrimaryDetailsView * primaryDetailsView;                                                   //@synthesize primaryDetailsView=_primaryDetailsView - In the implementation block
@property (nonatomic,retain) ExtensionsSecondaryDetailsView * secondaryDetailsView;                                               //@synthesize secondaryDetailsView=_secondaryDetailsView - In the implementation block
@property (nonatomic,retain) ExtensionsActionsFooterView * openAppView;                                                           //@synthesize openAppView=_openAppView - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                                                     //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                                                                 //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) ReservationAnalyticsCaptor * analyticsCaptor;                                                        //@synthesize analyticsCaptor=_analyticsCaptor - In the implementation block
@property (nonatomic,copy) NSString * appName;                                                                                    //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                                                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) INRestaurantReservationUserBooking * userBooking;                                                    //@synthesize userBooking=_userBooking - In the implementation block
@property (assign,nonatomic,__weak) id<RestaurantReservationConfirmationViewControllerDelegate> reservationDelegate;              //@synthesize reservationDelegate=_reservationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureTableView;
-(void)updateTheme;
-(char)useExtensionFlowHeader;
-(void)reservationConfirmationHeaderCellAccessoryButtonWasTapped:(id)arg1 ;
-(id)initWithUserBooking:(id)arg1 mapItem:(id)arg2 appName:(id)arg3 analyticsCaptor:(id)arg4 ;
-(void)registerCellClasses;
-(void)configureHeaderCell:(id)arg1 ;
-(id)headerTextForUserBookingStatus:(unsigned)arg1 ;
-(id)userInfoStringForGuest:(id)arg1 ;
-(id)confirmationSubtitleTextForUserBooking:(id)arg1 ;
-(id)timeAndTableDescriptionForUserBooking:(id)arg1 ;
-(id)dayAndRestaurantDescriptionForUserBooking:(id)arg1 ;
-(id)tableDescriptionForUserBooking:(id)arg1 ;
-(void)checkUserBookingForRefresh:(id)arg1 ;
-(char)useAvailableHeight;
-(void)setReservationDelegate:(id<RestaurantReservationConfirmationViewControllerDelegate>)arg1 ;
-(ExtensionsPrimaryDetailsView *)primaryDetailsView;
-(void)setPrimaryDetailsView:(ExtensionsPrimaryDetailsView *)arg1 ;
-(ExtensionsSecondaryDetailsView *)secondaryDetailsView;
-(void)setSecondaryDetailsView:(ExtensionsSecondaryDetailsView *)arg1 ;
-(ExtensionsActionsFooterView *)openAppView;
-(void)setOpenAppView:(ExtensionsActionsFooterView *)arg1 ;
-(ReservationAnalyticsCaptor *)analyticsCaptor;
-(void)setAnalyticsCaptor:(ReservationAnalyticsCaptor *)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(NSArray *)buttons;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)requestRefresh;
-(NSString *)appName;
-(id<RestaurantReservationConfirmationViewControllerDelegate>)reservationDelegate;
-(void)setButtons:(NSArray *)arg1 ;
-(void)buildSections;
-(void)setupConstraints;
-(NSDateFormatter *)dateFormatter;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(INRestaurantReservationUserBooking *)userBooking;
-(void)setUserBooking:(INRestaurantReservationUserBooking *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

