/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureView_Phone.h>

@class UIView, UIDatePicker, NSLayoutConstraint, UIAccessibilityElement;

@interface TimeRestrictionFeatureView : GAXFeatureView_Phone {

	UIView* _topShelfContainer;
	UIDatePicker* _datePicker;
	NSLayoutConstraint* _detailTextZeroHeightConstraint;
	UIAccessibilityElement* _topShelfAXElement;
	int _durationInMinutes;

}

@property (nonatomic,retain) UIView * topShelfContainer;                                       //@synthesize topShelfContainer=_topShelfContainer - In the implementation block
@property (nonatomic,retain) UIAccessibilityElement * topShelfAXElement;                       //@synthesize topShelfAXElement=_topShelfAXElement - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                        //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailTextZeroHeightConstraint;              //@synthesize detailTextZeroHeightConstraint=_detailTextZeroHeightConstraint - In the implementation block
@property (assign,nonatomic) int durationInMinutes;                                            //@synthesize durationInMinutes=_durationInMinutes - In the implementation block
-(void)setDetailTextZeroHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopShelfContainer:(UIView *)arg1 ;
-(void)setTopShelfAXElement:(UIAccessibilityElement *)arg1 ;
-(void)_handleDatePickerValueDidChange:(id)arg1 ;
-(UIAccessibilityElement *)topShelfAXElement;
-(UIView *)topShelfContainer;
-(void)_setDatePickerVisible:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)_datePickerWithInitialEnabledState:(char)arg1 initialDurationInMinutes:(int)arg2 ;
-(NSLayoutConstraint *)detailTextZeroHeightConstraint;
-(void)_constructViewHierarchyWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(char)arg6 styleProvider:(id)arg7 ;
-(void)_applyAutolayoutConstraintsWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(char)arg6 styleProvider:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 type:(int)arg2 icon:(id)arg3 text:(id)arg4 textOffset:(UIOffset)arg5 detailText:(id)arg6 detailTextOffset:(UIOffset)arg7 initialState:(char)arg8 initialDuration:(int)arg9 styleProvider:(id)arg10 ;
-(void)resetCountDownDurationForDatePicker;
-(void)dealloc;
-(id)accessibilityElements;
-(int)durationInMinutes;
-(void)setDurationInMinutes:(int)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(id)accessibilityLabel:(id)arg1 ;
-(id)accessibilityHint:(id)arg1 ;
-(CGRect)accessibilityFrame:(id)arg1 ;
-(id)accessibilityValue:(id)arg1 ;
-(unsigned long long)accessibilityTraits:(id)arg1 ;
-(void)_handleValueChanged:(id)arg1 ;
-(UIDatePicker *)datePicker;
@end

