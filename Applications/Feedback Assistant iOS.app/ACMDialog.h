/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface ACMDialog : UIViewController {

	int _savedStatusBarStyle;

}

@property (readonly) int statusBarStyle; 
@property (assign) int savedStatusBarStyle;                       //@synthesize savedStatusBarStyle=_savedStatusBarStyle - In the implementation block
@property (readonly) NSString * backgroundImageName; 
+(id)dialog;
-(id)init;
-(void)dealloc;
-(int)statusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)modalTransitionStyle;
-(NSString *)backgroundImageName;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)setSavedStatusBarStyle:(int)arg1 ;
-(int)savedStatusBarStyle;
-(void)disableControls:(char)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)shouldManuallyChangeStatusBarStyle;
@end

