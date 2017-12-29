/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSString;

@interface CloudTabHeaderView : UIView {

	UILabel* _label;
	UIImageView* _icon;
	UIView* _separatorView;
	int _style;
	float _bottomPadding;
	float _paddingBetweenIconAndLabel;
	float _iconVerticalAdjustment;
	float _leftEdgeInset;

}

@property (nonatomic,copy) NSString * text; 
+(float)defaultHeightForStyle:(int)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithStyle:(int)arg1 ;
@end

