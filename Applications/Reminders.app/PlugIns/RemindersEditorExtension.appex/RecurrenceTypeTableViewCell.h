/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersEditorExtension.appex/RemindersEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface RecurrenceTypeTableViewCell : UITableViewCell {

	UIView* _checkmarkView;
	char _checked;

}

@property (assign,getter=isChecked,nonatomic) char checked;              //@synthesize checked=_checked - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(char)isChecked;
@end

