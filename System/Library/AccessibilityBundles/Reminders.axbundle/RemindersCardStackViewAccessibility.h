/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/Reminders.axbundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/__RemindersCardStackViewAccessibility_super.h>

@interface RemindersCardStackViewAccessibility : __RemindersCardStackViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(float)_axCardSpacing;
-(void)_tileCardsForState:(int)arg1 eager:(char)arg2 ;
-(int)_accessibilityCardStackViewState;
-(id)_accessibilityFirstViewInPileAtBottom;
-(void)_animateCardView:(id)arg1 toIndex:(int)arg2 referenceView:(id)arg3 orderAbove:(char)arg4 reorderAfter:(double)arg5 ;
-(void)cardViewPanDidBegin:(id)arg1 ;
-(void)cardViewPanDidEnd:(id)arg1 ;
-(float)_axIdealYPositionForCardView:(id)arg1 ;
-(id)_accessibilityPresentedCard;
-(id)_axListControllerForCardController:(id)arg1 ;
-(char)accessibilityScroll:(int)arg1 ;
-(char)accessibilityPerformEscape;
-(char)isAccessibilityOpaqueElementProvider;
-(char)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilityScrollStatus;
-(char)_accessibilityAllowsSiblingsWhenOvergrown;
-(char)_accessibilityScrollingEnabled;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(void)setPresentationState:(int)arg1 animated:(char)arg2 ;
@end

