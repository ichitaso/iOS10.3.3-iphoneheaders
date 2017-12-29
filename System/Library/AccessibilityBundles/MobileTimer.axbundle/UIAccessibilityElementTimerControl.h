/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementTimerControl : UIAccessibilityElement {

	UILabel* _icon;
	UILabel* _name;

}

@property (nonatomic,retain) UILabel * icon;              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * name;              //@synthesize name=_name - In the implementation block
-(void)setName:(UILabel *)arg1 ;
-(UILabel *)name;
-(void)setIcon:(UILabel *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(UILabel *)icon;
@end

