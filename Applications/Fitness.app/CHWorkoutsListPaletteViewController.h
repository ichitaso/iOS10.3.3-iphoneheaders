/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIViewController.h>

@class UILabel, FIUIWorkoutStatistics;

@interface CHWorkoutsListPaletteViewController : UIViewController {

	UILabel* _leftLabel;
	FIUIWorkoutStatistics* _statistics;

}
-(void)_setLabelTextWithStats:(id)arg1 workoutActivityType:(unsigned)arg2 indoor:(char)arg3 ;
-(void)setWorkoutStatistics:(id)arg1 workoutActivityType:(unsigned)arg2 indoor:(char)arg3 animated:(char)arg4 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)_layoutLabels;
-(void)_configureLabel:(id)arg1 ;
@end

