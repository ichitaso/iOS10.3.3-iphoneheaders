/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface _UITableViewCellBadgeNeue : UIView {

	char _selected;
	UILabel* _badgeTextLabel;

}

@property (assign,getter=isSelected,nonatomic) char selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UILabel * badgeTextLabel;                     //@synthesize badgeTextLabel=_badgeTextLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setBadgeTextLabel:(UILabel *)arg1 ;
-(UILabel *)badgeTextLabel;
-(float)minHeight;
-(void)_sizeToFit;
@end

