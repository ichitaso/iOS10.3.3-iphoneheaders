/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIRemoveControl, UIControl, UIView;

@interface _UITableViewCellOldEditingData : NSObject {

	UIRemoveControl* _removeControl;
	UIControl* _grabber;
	UIView* _separator;

}

@property (nonatomic,retain) UIControl * reorderControl;              //@synthesize grabber=_grabber - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                  //@synthesize separator=_separator - In the implementation block
-(UIView *)separatorView;
-(char)dataRequired;
-(UIControl *)reorderControl;
-(void)setReorderControl:(UIControl *)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

