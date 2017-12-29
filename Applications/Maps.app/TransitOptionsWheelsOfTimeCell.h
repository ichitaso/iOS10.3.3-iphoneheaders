/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISegmentedControl, UIDatePicker, RoutePlanningTiming;

@interface TransitOptionsWheelsOfTimeCell : UITableViewCell {

	UISegmentedControl* _arriveDepartSegmentedControl;
	UIDatePicker* _datePicker;
	char _compact;
	char _showArriveBy;
	/*^block*/id _userSelectionDidChange;
	RoutePlanningTiming* _originalTiming;

}

@property (nonatomic,copy) id userSelectionDidChange;                              //@synthesize userSelectionDidChange=_userSelectionDidChange - In the implementation block
@property (nonatomic,copy) RoutePlanningTiming * originalTiming;                   //@synthesize originalTiming=_originalTiming - In the implementation block
@property (nonatomic,readonly) RoutePlanningTiming * displayedTiming; 
@property (getter=isCompact,nonatomic,readonly) char compact;                      //@synthesize compact=_compact - In the implementation block
@property (nonatomic,readonly) char showArriveBy;                                  //@synthesize showArriveBy=_showArriveBy - In the implementation block
-(id)_initialConstraints;
-(id)initShowingArriveBy:(char)arg1 compact:(char)arg2 ;
-(void)_setDatePickerBoundaries;
-(void)setOriginalTiming:(RoutePlanningTiming *)arg1 ;
-(void)resetUIToOriginalTiming;
-(RoutePlanningTiming *)displayedTiming;
-(char)selectedArriveByOption;
-(void)_selectedDateDidChange;
-(void)_selectedModeDidChange;
-(id)userSelectionDidChange;
-(void)setUserSelectionDidChange:(id)arg1 ;
-(RoutePlanningTiming *)originalTiming;
-(char)showArriveBy;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)_createSubviews;
-(char)isCompact;
@end

