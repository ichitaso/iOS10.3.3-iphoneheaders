/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UITableViewCellDeleteConfirmationControl_Legacy, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	int _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UITableViewCellDeleteConfirmationControl_Legacy* _deleteConfirmationControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) char dataRequired; 
@property (nonatomic,readonly) char wantsMaskingWhileAnimatingDisabled; 
-(void)dealloc;
-(id)editControl:(char)arg1 ;
-(id)deleteConfirmationControl:(char)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2 ;
-(char)wantsMaskingWhileAnimatingDisabled;
-(id)reorderControl:(char)arg1 ;
-(id)reorderSeparatorView:(char)arg1 ;
-(char)isDataRequired;
@end

