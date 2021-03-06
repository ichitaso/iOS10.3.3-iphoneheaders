/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersEditorExtension.appex/RemindersEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersEditorExtension/RemindersEditorExtension-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIDatePicker;

@interface _RemindersDatePickerCell : UITableViewCell {

	UIDatePicker* _datePicker;
	int _targetEditorRow;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic) int targetEditorRow;                      //@synthesize targetEditorRow=_targetEditorRow - In the implementation block
-(int)targetEditorRow;
-(void)setTargetEditorRow:(int)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIDatePicker *)datePicker;
@end

