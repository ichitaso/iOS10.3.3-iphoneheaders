/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNNavigationServiceObserver.h>
#import <libobjc.A.dylib/MKLocationProvider.h>

@protocol MKLocationProviderDelegate;
@class NSString, NSBundle, CLLocation;

@interface NavigationLocationProvider : NSObject <MNNavigationServiceObserver, MKLocationProvider> {

	id<MKLocationProviderDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) char usesCLMapCorrection; 
@property (nonatomic,readonly) char shouldShiftIfNecessary; 
@property (nonatomic,readonly) char isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
-(id)_console;
-(void)_updateDebugLocationConsoleForLocation:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<MKLocationProviderDelegate>)delegate;
-(int)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)dismissHeadingCalibrationDisplay;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(double)desiredAccuracy;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(double)distanceFilter;
-(char)matchInfoEnabled;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(int)headingOrientation;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(char)usesCLMapCorrection;
-(char)shouldShiftIfNecessary;
-(char)isTracePlayer;
-(double)timeScale;
-(void)requestWhenInUseAuthorization;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setActivityType:(int)arg1 ;
-(void)navigationService:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3 ;
-(void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
@end

