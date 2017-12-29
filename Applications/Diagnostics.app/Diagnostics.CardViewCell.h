/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/Diagnostics.BaseTableViewCell.h>
#import <Diagnostics/DADeviceDelegate.h>

@class UIViewController, DADevice;

@interface Diagnostics.CardViewCell : Diagnostics.BaseTableViewCell <DADeviceDelegate> {

	 cardSpacing;
	 cardOpacity;
	 cardToSwipeButtonGap;
	 swipeButtonSize;
	 swipeButtonFontSizeTitleLabel;
	 swipeButtonImageAndLabelGap;
	 cardSwipeFinalCenterOffset;
	 cardToSwipeButtonOffset;
	 isActiveTint;
	 swipeActionButton.storage;
	 swipeActionButtonLeading;
	 swipeActionButtonMask;
	 stackView;
	 stackViewContainer;
	 deviceInformationView;
	 testRunnerView;
	 historyTableView;
	 promptView;
	 tapGestureRecognizer.storage;
	 swipeEnabled;
	 presentingViewController;
	 translatedCenter;
	 originalCenter;
	 delegate;
	 device;
	 layoutUpdateHandler;

}

@property (assign,nonatomic) char swipeEnabled; 
@property (assign,__weak,nonatomic) UIViewController * presentingViewController; 
@property (retain,nonatomic) DADevice * device; 
@property (copy,nonatomic) id layoutUpdateHandler; 
+(float)cardWidth;
+(float)cardCornerRadius;
+(float)cardHorizontalMargin;
+(float)cardBottomMargin;
-(void)deviceDidShowDeviceIdentifier:(id)arg1 ;
-(void)deviceDidHideDeviceIdentifier:(id)arg1 ;
-(void)device:(id)arg1 didSetDeviceIdentifier:(id)arg2 ;
-(void)deviceDidEnroll:(id)arg1 ;
-(void)device:(id)arg1 shouldStartFullScreenTestSuiteWithName:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)deviceDidArchive:(id)arg1 ;
-(void)device:(id)arg1 didStartTestSuiteWithName:(id)arg2 description:(id)arg3 ;
-(void)device:(id)arg1 didCompleteTestSuiteWithName:(id)arg2 description:(id)arg3 ;
-(void)deviceDidCancelTestSuite:(id)arg1 ;
-(void)device:(id)arg1 didUpdateProgress:(id)arg2 ;
-(void)deviceDidShowNetworkRequired:(id)arg1 ;
-(void)deviceDidHideNetworkRequired:(id)arg1 ;
-(void)device:(id)arg1 didShowWiFiRequiredForTestSuiteWithName:(id)arg2 ;
-(void)deviceDidHideWiFiRequired:(id)arg1 ;
-(void)deviceDidUpdateHistory:(id)arg1 ;
-(void)setupViewAttributes;
-(void)setupViewHierarchy;
-(void)setupViewLayoutConstraints;
-(char)swipeEnabled;
-(void)setSwipeEnabled:(char)arg1 ;
-(id)layoutUpdateHandler;
-(void)setLayoutUpdateHandler:(id)arg1 ;
-(void)startDevice;
-(void)deviceDidIdle:(id)arg1 ;
-(void)swipeGestureBegan;
-(void)moveWithTranslation:(float)arg1 animated:(char)arg2 initialVelocity:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)moveWith:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetCellWithCompletion:(/*^block*/id)arg1 ;
-(void)tapInsideContainerRecognizedWithTap:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)device:(id)arg1 didEncounterError:(int)arg2 ;
-(DADevice *)device;
-(void)setDevice:(DADevice *)arg1 ;
@end
