/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/SharingViewService.axbundle/SharingViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharingViewService/__ProximityStatusViewControllerAccessibility_super.h>

@interface ProximityStatusViewControllerAccessibility : __ProximityStatusViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_axLeftDevice;
-(id)_axRightDevice;
-(void)_accessibilityUpdateAccessibilityElements;
-(void)_updateBatteryLevelLeft:(double)arg1 levelRight:(double)arg2 levelCase:(double)arg3 ;
-(void)_axSetLeftDevice:(id)arg1 ;
-(void)_axSetRightDevice:(id)arg1 ;
-(void)_axSetCombinedDevice:(id)arg1 ;
-(void)_axSetCaseDevice:(id)arg1 ;
-(id)_axCombinedDevice;
-(id)_axCaseDevice;
-(id)_axCreateAggregateStatusView:(id)arg1 primaryTitle:(id)arg2 batteryLevelLabel:(id)arg3 chargingImage:(id)arg4 warningImage:(id)arg5 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)accessibilityPerformEscape;
-(void)_accessibilityLoadAccessibilityInformation;
@end

