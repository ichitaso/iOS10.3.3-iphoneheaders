/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, UIColor, NSString;

@interface CHFriendDetailActionCell : UIView {

	UIView* _actionTitleView;
	UILabel* _actionTitleLabel;
	UIView* _bottomSeparator;
	UIColor* _backgroundColor;
	UIColor* _highlightedColor;
	char _showSeparator;
	int _actionType;

}

@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) char showSeparator;              //@synthesize showSeparator=_showSeparator - In the implementation block
@property (assign,nonatomic) int actionType;                  //@synthesize actionType=_actionType - In the implementation block
+(float)preferredHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setActionType:(int)arg1 ;
-(void)setShowSeparator:(char)arg1 ;
-(char)showSeparator;
-(int)actionType;
-(void)_setupCell;
@end

