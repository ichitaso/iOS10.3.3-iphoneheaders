/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <Fitness/PlatterTableViewCell.h>

@class NSDate, UILabel, HKRingsView;

@interface ActivityThreeRingCell : PlatterTableViewCell {

	NSDate* _date;
	double _energyPercentage;
	double _briskPercentage;
	double _activeHoursPercentage;
	UILabel* _dateLabel;
	HKRingsView* _ringsView;

}
-(void)setRingsToZero;
-(void)updateDateTitleTextWithCurrentDate;
-(void)setRingsToCurrentValuesAnimated:(char)arg1 ;
-(void)setActivitySummaryData:(id)arg1 withDelay:(float)arg2 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_todayChanged:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
@end
