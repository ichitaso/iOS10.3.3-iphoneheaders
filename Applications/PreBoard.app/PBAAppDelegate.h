/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/PreBoard.app/PreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreBoard/PreBoard-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIViewController, UIHBClickGestureRecognizer, NSString;

@interface PBAAppDelegate : UIResponder <UIApplicationDelegate> {

	UIViewController* _mainViewController;
	UIWindow* _window;
	UIHBClickGestureRecognizer* _singlePressDownGestureRecognizer;
	UIHBClickGestureRecognizer* _triplePressUpGestureRecognizer;

}

@property (nonatomic,retain) UIViewController * mainViewController;                                      //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * singlePressDownGestureRecognizer;              //@synthesize singlePressDownGestureRecognizer=_singlePressDownGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIHBClickGestureRecognizer * triplePressUpGestureRecognizer;                //@synthesize triplePressUpGestureRecognizer=_triplePressUpGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                          //@synthesize window=_window - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reconfigureHomeButton;
-(void)homeButtonSinglePressDown:(id)arg1 ;
-(void)homeButtonTriplePressUp:(id)arg1 ;
-(void)displayDidBlank:(id)arg1 ;
-(void)displayWillUnblank:(id)arg1 ;
-(UIHBClickGestureRecognizer *)singlePressDownGestureRecognizer;
-(void)setSinglePressDownGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIHBClickGestureRecognizer *)triplePressUpGestureRecognizer;
-(void)setTriplePressUpGestureRecognizer:(UIHBClickGestureRecognizer *)arg1 ;
-(UIWindow *)window;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(UIViewController *)mainViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
@end

