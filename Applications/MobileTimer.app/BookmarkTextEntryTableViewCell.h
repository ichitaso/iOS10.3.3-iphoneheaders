/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BookmarkTextEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithText:(id)arg1 autoCapsType:(int)arg2 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(void)layoutSubviews;
-(char)textFieldShouldReturn:(id)arg1 ;
-(id)textField;
@end

