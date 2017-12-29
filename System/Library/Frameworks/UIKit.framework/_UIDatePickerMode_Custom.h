/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString, NSArray;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode {

	NSString* _originalFormat;
	NSArray* _components;
	NSArray* _sortedComponents;
	int _displayedUnits;
	int _desiredUnits;

}
-(unsigned)numberOfComponents;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(void)noteCalendarChanged;
-(int)displayedCalendarUnits;
-(int)componentForCalendarUnit:(unsigned)arg1 ;
-(unsigned)calendarUnitForComponent:(int)arg1 ;
-(void)resetComponentWidths;
-(id)initWithFormatString:(id)arg1 datePickerView:(id)arg2 ;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(unsigned)extractableCalendarUnits;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(int)valueForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(id)dateForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(int)titleAlignmentForCalendarUnit:(unsigned)arg1 ;
-(id)components;
-(id)_componentForCalendarUnit:(unsigned)arg1 ;
@end

