/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegatePrivate.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <MobileCal/CalendarDebugViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class ApplicationTester, CLLocationManager, RootNavigationController, MobileCalWindow, CalendarDebugViewController, NSDate, CalendarModel, NSString, UIWindow;

@interface Application : UIApplication <UIApplicationDelegatePrivate, UIApplicationTestingDelegate, CalendarDebugViewControllerDelegate, UIAlertViewDelegate, CLLocationManagerDelegate> {

	ApplicationTester* _tester;
	CLLocationManager* _locationManager;
	char _showingSplashScreen;
	RootNavigationController* _rootNavigationController;
	MobileCalWindow* _mainWindow;
	CalendarDebugViewController* _debugViewController;
	NSDate* _lastActiveTime;
	CalendarModel* _model;
	/*^block*/id _applicationRequestDelayer;

}

@property (nonatomic,retain) MobileCalWindow * mainWindow;                                     //@synthesize mainWindow=_mainWindow - In the implementation block
@property (nonatomic,retain) CalendarDebugViewController * debugViewController;                //@synthesize debugViewController=_debugViewController - In the implementation block
@property (nonatomic,retain) RootNavigationController * rootNavigationController;              //@synthesize rootNavigationController=_rootNavigationController - In the implementation block
@property (nonatomic,retain) NSDate * lastActiveTime;                                          //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (nonatomic,readonly) ApplicationTester * tester; 
@property (nonatomic,retain) CalendarModel * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) id applicationRequestDelayer;                                       //@synthesize applicationRequestDelayer=_applicationRequestDelayer - In the implementation block
@property (assign,nonatomic) char showingSplashScreen;                                         //@synthesize showingSplashScreen=_showingSplashScreen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(char)_diagnosticsAvailable;
-(RootNavigationController *)rootNavigationController;
-(double)_resumeToTodayTimeout;
-(void)_buildCalendarSyncHashesForCalendarIDs:(id)arg1 ;
-(char)showingSplashScreen;
-(void)setApplicationRequestDelayer:(id)arg1 ;
-(id)eventURLFromLaunchURL:(id)arg1 isTravel:(char*)arg2 ;
-(void)_setUpModel;
-(void)_setModelDateForLaunch;
-(void)_setUpSelectedCalendars;
-(void)setRootNavigationController:(RootNavigationController *)arg1 ;
-(void)_constructAndPresentSplashScreen;
-(void)setShowingSplashScreen:(char)arg1 ;
-(id)applicationRequestDelayer;
-(void)requestLocationAuthorization;
-(void)setLastActiveTime:(NSDate *)arg1 ;
-(void)persistActiveViewModeSetting;
-(void)_refreshAccountListAndViewContentsIfNeeded;
-(NSDate *)lastActiveTime;
-(void)_collectStats;
-(void)_showDebugWindow;
-(void)_showDate:(id)arg1 inView:(unsigned)arg2 ;
-(void)_showEvent:(id)arg1 inView:(unsigned)arg2 ;
-(CalendarDebugViewController *)debugViewController;
-(void)setDebugViewController:(CalendarDebugViewController *)arg1 ;
-(id)_calendarSyncHashesForCalendarIDs:(id)arg1 ;
-(void)debugViewControllerDidDismiss;
-(id)init;
-(UIWindow *)window;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(id)_extendLaunchTest;
-(void)applicationWillTerminate;
-(void)applicationOpenURL:(id)arg1 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(CalendarModel *)model;
-(ApplicationTester *)tester;
-(MobileCalWindow *)mainWindow;
-(void)setModel:(CalendarModel *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setMainWindow:(MobileCalWindow *)arg1 ;
@end
