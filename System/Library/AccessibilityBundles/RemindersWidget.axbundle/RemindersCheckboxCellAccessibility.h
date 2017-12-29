/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/RemindersWidget.axbundle/RemindersWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersWidget/RemindersWidget-Structs.h>
#import <Reminders-Assistant/__RemindersCheckboxCellAccessibility_super.h>

@interface RemindersCheckboxCellAccessibility : __RemindersCheckboxCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_axAnnotateTextView;
-(id)_axTextView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned)arg4 deadlinePosition:(unsigned)arg5 width:(float)arg6 ;
-(char)_accessibilityIsCheckbox:(id)arg1 ;
-(char)_axInNotificationCenter;
-(int)_accessibilityIndexOfCheckbox;
-(char)_accessibilityIsNewReminderCell;
-(char)accessibilityIsEditingReminder;
-(char)_accessibilityIsSearchReminderCell;
-(void)accessibilityUpdateChildren;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setAccessoryType:(int)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(id)accessibilityCustomActions;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(char)_accessibilityCanDeleteTableViewCell;
-(void)_accessibilityLoadAccessibilityInformation;
-(char)_accessibilityIsSpeakThisElement;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(char)_accessibilityTableViewCellSubclassShouldExist;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
@end

