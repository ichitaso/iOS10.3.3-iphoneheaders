/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class HKActivityRingView, HKActivitySummary;

@interface CHFriendDetailThreeRingCell : UIView {

	HKActivityRingView* _ringView;
	HKActivitySummary* _activitySummary;
	char _isFriendHidingDataFromMe;

}
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)preferredHeight;
-(float)preferredWidth;
-(void)_setupCell;
-(void)setActivitySummary:(id)arg1 animated:(char)arg2 ;
@end

