/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CarKitSettings/CarKitSettings-Structs.h>
@class UIViewController, UIAlertController;

@interface CRRadiosAvailabilityPrompt : NSObject {

	WiFiManagerClientRef _wifiManager;
	char _needsPresentationConsideration;
	UIViewController* _presentingController;
	UIAlertController* _presentedAlertController;

}

@property (assign,nonatomic) char needsPresentationConsideration;                              //@synthesize needsPresentationConsideration=_needsPresentationConsideration - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * presentedAlertController;              //@synthesize presentedAlertController=_presentedAlertController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingController;                   //@synthesize presentingController=_presentingController - In the implementation block
-(void)_teardownWiFi;
-(void)_setupWiFi;
-(void)setWiFiPowered:(char)arg1 ;
-(void)setNeedsPresentationConsideration:(char)arg1 ;
-(void)handleBluetoothPowerChanged:(id)arg1 ;
-(char)needsPresentationConsideration;
-(char)updateRadiosAvailabilityAlertPresentation;
-(char)shouldPromptBluetoothPower;
-(char)shouldPromptWiFiPower;
-(UIViewController *)presentingController;
-(UIAlertController *)presentedAlertController;
-(void)setBluetoothPowered:(char)arg1 ;
-(void)setPresentedAlertController:(UIAlertController *)arg1 ;
-(void)handleWifiPowerChanged;
-(id)init;
-(void)dealloc;
-(void)setPresentingController:(UIViewController *)arg1 ;
@end

