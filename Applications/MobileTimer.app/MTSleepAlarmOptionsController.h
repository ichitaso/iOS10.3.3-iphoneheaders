/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileTimer/MTSleepAlarmOptionsCellDelegate.h>
#import <MobileTimer/MTEditAlarmVolumeCellDelegate.h>
#import <MobileTimer/TKTonePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>

@protocol MTSleepAlarmOptionsControllerDelegate;
@class MTSleepAlarm, TKTonePickerViewController, TLAlert, NSString;

@interface MTSleepAlarmOptionsController : UITableViewController <MTSleepAlarmOptionsCellDelegate, MTEditAlarmVolumeCellDelegate, TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {

	MTSleepAlarm* _sleepAlarm;
	id<MTSleepAlarmOptionsControllerDelegate> _optionsDelegate;
	MTSleepAlarm* _sourceSleepAlarm;
	TKTonePickerViewController* _tonePickerViewController;
	TLAlert* _previewAlert;

}

@property (nonatomic,copy) MTSleepAlarm * sourceSleepAlarm;                                                 //@synthesize sourceSleepAlarm=_sourceSleepAlarm - In the implementation block
@property (nonatomic,copy) MTSleepAlarm * sleepAlarm;                                                       //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) TKTonePickerViewController * tonePickerViewController;                         //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (nonatomic,retain) TLAlert * previewAlert;                                                        //@synthesize previewAlert=_previewAlert - In the implementation block
@property (assign,nonatomic,__weak) id<MTSleepAlarmOptionsControllerDelegate> optionsDelegate;              //@synthesize optionsDelegate=_optionsDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateDoneButtonEnabled;
-(void)setSleepAlarm:(MTSleepAlarm *)arg1 ;
-(void)cellDidEditAlarmVolume:(id)arg1 ;
-(void)cell:(id)arg1 didModifyAlarm:(id)arg2 ;
-(void)handleSuspend;
-(id)tonePickerCellForTableView:(id)arg1 ;
-(id)initWithSleepAlarm:(id)arg1 ;
-(void)setOptionsDelegate:(id<MTSleepAlarmOptionsControllerDelegate>)arg1 ;
-(void)setSourceSleepAlarm:(MTSleepAlarm *)arg1 ;
-(TLAlert *)previewAlert;
-(void)setPreviewAlert:(TLAlert *)arg1 ;
-(MTSleepAlarm *)sourceSleepAlarm;
-(void)didFinishPlayingAlarmToneForPreviewAlert:(id)arg1 ;
-(id)recurrenceScheduleCellForTableView:(id)arg1 ;
-(id)bedtimeReminderCellForTableView:(id)arg1 ;
-(id)volumeSliderCellForTableView:(id)arg1 ;
-(void)showReminderIntervalPickerForCell:(id)arg1 ;
-(void)showTonePicker;
-(void)playAlarmTone;
-(id)tonePickerController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(void)cancelEditing;
-(MTSleepAlarm *)sleepAlarm;
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
-(id<MTSleepAlarmOptionsControllerDelegate>)optionsDelegate;
-(void)finishEditing;
@end
