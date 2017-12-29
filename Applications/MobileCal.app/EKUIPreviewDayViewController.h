/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIPreviewViewController.h>

@class CompactDayViewController, DayNavigationViewController, PaletteView, UIView, EKCalendarDate, CalendarModel;

@interface EKUIPreviewDayViewController : EKUIPreviewViewController {

	CompactDayViewController* _dayViewController;
	DayNavigationViewController* _dayScrubberViewController;
	PaletteView* _paletteView;
	UIView* _lineView;
	EKCalendarDate* _displayedDate;
	CalendarModel* _model;

}

@property (nonatomic,retain) CalendarModel * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) EKCalendarDate * displayedDate;              //@synthesize displayedDate=_displayedDate - In the implementation block
-(id)_paletteView;
-(EKCalendarDate *)displayedDate;
-(void)setDisplayedDate:(EKCalendarDate *)arg1 ;
-(id)initWithModel:(id)arg1 displayedDate:(id)arg2 ;
-(id)_dayView;
-(id)_currentDateComponents;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CalendarModel *)model;
-(void)setModel:(CalendarModel *)arg1 ;
-(id)_now;
@end

