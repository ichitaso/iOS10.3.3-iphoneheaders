/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {

	UITapGestureRecognizer* _tap;
	UIPickerTableView* pickerTable;

}

@property (assign,nonatomic) UIPickerTableView * pickerTable; 
+(id)_modernCenterCellFont;
+(id)_modernNonCenterCellFont;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)_setIsCenterCell:(char)arg1 shouldModifyAlphaOfView:(char)arg2 ;
-(UIPickerTableView *)pickerTable;
-(void)setPickerTable:(UIPickerTableView *)arg1 ;
@end

