/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UIImageView, UIImage;

@interface UIAlertMediaButton : UIAlertButton {

	UIImageView* _checkmarkView;
	UIImage* _tableIcon;
	UIImage* _highlightedTableIcon;

}

@property (nonatomic,readonly) UIImageView * checkmarkView; 
@property (nonatomic,retain) UIImage * tableIcon;                         //@synthesize tableIcon=_tableIcon - In the implementation block
@property (nonatomic,retain) UIImage * highlightedTableIcon;              //@synthesize highlightedTableIcon=_highlightedTableIcon - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(UIImageView *)checkmarkView;
-(UIImage *)tableIcon;
-(void)setTableIcon:(UIImage *)arg1 ;
-(UIImage *)highlightedTableIcon;
-(void)setHighlightedTableIcon:(UIImage *)arg1 ;
@end

