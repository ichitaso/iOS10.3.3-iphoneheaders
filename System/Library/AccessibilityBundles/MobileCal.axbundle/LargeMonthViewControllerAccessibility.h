/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/__LargeMonthViewControllerAccessibility_super.h>

@interface LargeMonthViewControllerAccessibility : __LargeMonthViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)showDate:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_axTopWeekViewWithTopPoint:(CGPoint)arg1 ;
-(void)_updateDraggingOffsetTimesForPoint:(CGPoint)arg1 ;
-(char)_axIsCommittingTimeAdjustment;
-(void)_axSetIsCommittingTimeAdjustment:(char)arg1 ;
-(id)eventGestureController:(id)arg1 setUpAtPoint:(CGPoint)arg2 withOccurrence:(id)arg3 ;
-(void)eventGestureController:(id)arg1 commitToPoint:(CGPoint)arg2 ;
@end

