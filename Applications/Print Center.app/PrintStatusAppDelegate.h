/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Print Center.app/Print Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Print Center/Print Center-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PrintStatusViewController, NSString;

@interface PrintStatusAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	PrintStatusViewController* _viewController;

}

@property (nonatomic,retain) UIWindow * window;                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) PrintStatusViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setViewController:(PrintStatusViewController *)arg1 ;
-(PrintStatusViewController *)viewController;
@end
