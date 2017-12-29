/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface RemindersListColorPickerView : UIView {

	NSMutableArray* _colorControls;
	id _target;
	SEL _selector;

}
-(id)initWithFrame:(CGRect)arg1 customColor:(id)arg2 ;
-(void)selectColor:(int)arg1 ;
-(void)configureButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAlpha:(float)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
@end

