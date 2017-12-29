/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol TimerControlsTarget;
@class TimerTimeView, UIDatePicker, UITableView, MTTimerPickerCell, UITableViewCell, UIButton, NSString, MTTimerButtonsController;

@interface TimerControlsView : UIView <UITableViewDataSource, UITableViewDelegate> {

	TimerTimeView* _timeView;
	UIDatePicker* _timePicker;
	UITableView* _tableView;
	MTTimerPickerCell* _pickerCell;
	UITableViewCell* _toneChooserCell;
	UIButton* _toneButton;
	NSString* _toneName;
	MTTimerButtonsController* _buttonsController;
	int _style;
	id<TimerControlsTarget> _delegate;
	int _state;
	float _topLayoutGuideLength;
	float _bottomLayoutGuideLength;

}

@property (assign,nonatomic) int state;                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double countDownDuration; 
@property (assign,nonatomic) float topLayoutGuideLength;                 //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) float bottomLayoutGuideLength;              //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimerToneName:(id)arg1 ;
-(void)setTopLayoutGuideLength:(float)arg1 ;
-(void)setBottomLayoutGuideLength:(float)arg1 ;
-(id)initWithDelegate:(id)arg1 style:(int)arg2 ;
-(void)setState:(int)arg1 animate:(char)arg2 ;
-(void)_configureAndAddButton:(id)arg1 ;
-(float)topLayoutGuideLength;
-(float)bottomLayoutGuideLength;
-(void)layoutSubviews;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)setButtonSize:(unsigned)arg1 ;
-(void)handleLocaleChange;
@end

