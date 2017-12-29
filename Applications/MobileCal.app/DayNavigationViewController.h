/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/DayNavigationViewDelegate.h>

@protocol DayNavigationViewControllerDelegate, DayNavigationViewCellFactory;
@class CalendarModel, DayNavigationView, NSObject, DayNavigationWeekScrollView, DayTwoPartLabel, UILabel, NSString;

@interface DayNavigationViewController : UIViewController <DayNavigationViewDelegate> {

	CalendarModel* _model;
	DayNavigationView* _navigationView;
	char _showWeekdayLabel;
	NSObject*<DayNavigationViewControllerDelegate> _delegate;
	NSObject*<DayNavigationViewCellFactory> _cellFactory;

}

@property (assign,nonatomic,__weak) NSObject*<DayNavigationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) DayNavigationWeekScrollView * weekScrollView; 
@property (nonatomic,readonly) DayTwoPartLabel * weekdayLabel; 
@property (nonatomic,readonly) UILabel * weekNumberLabel; 
@property (nonatomic,retain) NSObject*<DayNavigationViewCellFactory> cellFactory;                         //@synthesize cellFactory=_cellFactory - In the implementation block
@property (assign,nonatomic) char showWeekdayLabel;                                                       //@synthesize showWeekdayLabel=_showWeekdayLabel - In the implementation block
@property (assign,nonatomic) float sideMargin; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pulseToday;
-(NSObject*<DayNavigationViewCellFactory>)cellFactory;
-(char)showWeekdayLabel;
-(UILabel *)weekNumberLabel;
-(void)setSelectedDate:(id)arg1 animated:(char)arg2 ;
-(float)sideMargin;
-(void)dayNavigationView:(id)arg1 selectedDateChanged:(id)arg2 ;
-(char)dayNavigationViewAllowedToChangeSelectedDate;
-(void)dayNavigationViewFailedToSelectDate;
-(char)canAnimateToDate:(id)arg1 ;
-(DayNavigationWeekScrollView *)weekScrollView;
-(void)setSideMargin:(float)arg1 ;
-(void)_showWeekNumbersPrefChanged;
-(void)_overlayCalendarPrefChanged;
-(void)setCellFactory:(NSObject*<DayNavigationViewCellFactory>)arg1 ;
-(void)setShowWeekdayLabel:(char)arg1 ;
-(void)setDelegate:(NSObject*<DayNavigationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<DayNavigationViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setVisible:(char)arg1 ;
-(DayTwoPartLabel *)weekdayLabel;
-(void)_localeChanged:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)_timeZoneChanged:(id)arg1 ;
@end
