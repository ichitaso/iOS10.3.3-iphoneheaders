/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAuthUI/TransitionViewController.h>
#import <CoreAuthUI/SBUIPasscodeLockViewDelegate.h>

@protocol SBUIPasscodeLockView;
@class UIView, UILabel, UIButton, NSTimer, NSNumberFormatter, NSNumber, NSDate, NSString;

@interface PasscodeViewController : TransitionViewController <SBUIPasscodeLockViewDelegate> {

	UIView*<SBUIPasscodeLockView> passcodeLockView;
	UIView* _lockoutView;
	UILabel* _lockoutTimerLabel;
	UILabel* _promptLabel;
	UILabel* _deviceLockedLabel;
	UIButton* _cancelButton;
	NSTimer* _updateTimer;
	NSNumberFormatter* _decimalFormatter;
	unsigned _failures;
	NSNumber* _failureLimit;
	NSDate* _blockedUntilDate;
	BOOL _isLockoutActive;
	BOOL _firstTime;
	BOOL _isBlocked;
	BOOL _whitePasscodeScreen;
	char _passcodeEntered;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAuthenticationData;
-(char)isFullScreenController;
-(void)setupLockScreen;
-(void)adjustColors;
-(void)adjustCancelColor;
-(int)passcodeLockStyle;
-(void)_switchToBackoffScreen:(id)arg1 ;
-(void)_processPasscodeEntryResult:(int)arg1 ;
-(void)_scheduleTimerIfNecessaryAndUpdateSubtitle;
-(id)formattedDecimalStringForNumber:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_clearTimer;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
@end

