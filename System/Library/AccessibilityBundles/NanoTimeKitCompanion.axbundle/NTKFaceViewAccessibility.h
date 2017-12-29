/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/__NTKFaceViewAccessibility_super.h>

@interface NTKFaceViewAccessibility : __NTKFaceViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_axSetIsDoneAnnouncing:(char)arg1 ;
-(void)_axSetIsWaitingToAnnounce:(char)arg1 ;
-(char)_axIsDoneAnnouncing;
-(char)_axIsWaitingToAnnounce;
-(void)_axMakeTimeViewFirstElement;
-(id)_accessibilityNotificationObserver;
-(void)_accessibilitySetNotificationObserver:(id)arg1 ;
-(char)_accessibilityCanStartTimeTravel;
-(id)_accessibilityScrubTimer;
-(void)_accessibilitySetTimeTravelDate:(id)arg1 ;
-(void)_accessibilityAnnounceScrub;
-(void)_accessibilitySetScrubTimer:(id)arg1 ;
-(id)_accessibilityTimeTravelDate;
-(void)_accessibilityTimeAnnouncementDidFinish;
-(char)_accessibilityTimeTravelEnabled;
-(void)dealloc;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)setTimeView:(id)arg1 ;
-(void)endScrubbingAnimated:(char)arg1 ;
-(void)scrubToDate:(id)arg1 animated:(char)arg2 ;
-(void)startScrubbingAnimated:(char)arg1 ;
@end

