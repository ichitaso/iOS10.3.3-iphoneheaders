/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDTimeScopeControl.h>

@class UISegmentedControl;

@interface _WDTimeScopeControlBar : WDTimeScopeControl {

	UISegmentedControl* _segments;

}
-(int)selectedTimeScope;
-(void)setSelectedTimeScope:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 timeScopes:(id)arg2 ;
-(void)_segmentValueChanged:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

