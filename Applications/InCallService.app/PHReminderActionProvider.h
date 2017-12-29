/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class TUCall, CLLocationManager, NSString;

@interface PHReminderActionProvider : NSObject <CLLocationManagerDelegate> {

	TUCall* _call;
	/*^block*/id _locationAuthorizationStatusCallback;
	CLLocationManager* _locationManager;

}

@property (retain) TUCall * call;                                              //@synthesize call=_call - In the implementation block
@property (copy) id locationAuthorizationStatusCallback;                       //@synthesize locationAuthorizationStatusCallback=_locationAuthorizationStatusCallback - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)reminderActionsForAlertController:(id)arg1 ;
-(void)createReminderForWhenILeave;
-(void)performLocationReminderAction:(/*^block*/id)arg1 ifAuthorizedForStatus:(int)arg2 ;
-(void)createReminderForLocation:(id)arg1 ;
-(void)createReminderWithDurationInMinutes:(int)arg1 ;
-(id)locationAuthorizationStatusCallback;
-(void)setLocationAuthorizationStatusCallback:(id)arg1 ;
-(id)reminderText;
-(id)reminderAction;
-(id)reminderActivity;
-(id)numberForReminder;
-(id)init;
-(id)displayName;
-(TUCall *)call;
-(id)initWithCall:(id)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)addressBookIdentifier;
-(void)setCall:(TUCall *)arg1 ;
-(id)destinationID;
@end
