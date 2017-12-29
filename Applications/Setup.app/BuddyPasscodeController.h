/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>
#import <Setup/PSPasscodeCreationDelegate.h>
#import <Setup/BuddyPasscodeInputDelegate.h>

@protocol BuddyControllerDelegate;
@class PSPasscodeCreationManager, NSString;

@interface BuddyPasscodeController : UIViewController <BuddyController, PSPasscodeCreationDelegate, BuddyPasscodeInputDelegate> {

	char _footerButtonIsSkip;
	id<BuddyControllerDelegate> _delegate;
	PSPasscodeCreationManager* _passcodeManager;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PSPasscodeCreationManager * passcodeManager;              //@synthesize passcodeManager=_passcodeManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)forceShowPasscodeController;
+(char)controllerNeedsToRun;
+(void)skip;
-(void)controllerWasPopped;
-(char)controllerAllowsNavigatingBack;
-(void)configurePasscodeTypeUsingAnimations:(char)arg1 ;
-(void)_setupFirstEntry;
-(void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)passcodeInput:(id)arg1 willChangeContents:(id)arg2 ;
-(void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2 ;
-(void)finishedWithPasscode:(id)arg1 ;
-(char)allowsSkip;
-(id)defaultFirstEntryInstructions;
-(void)passcodeManager:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(PSPasscodeCreationManager *)passcodeManager;
-(void)setPasscodeManager:(PSPasscodeCreationManager *)arg1 ;
-(id)_passcodeInputViewForState:(unsigned)arg1 ;
-(void)_updateNextButtonForPasscode:(id)arg1 ;
-(id)passcodeOptionAlertController;
-(id)instructionsForState:(unsigned)arg1 ;
-(void)_animatedPasscodeViewTransitionToState:(unsigned)arg1 animation:(unsigned)arg2 ;
-(void)_showWeakWarningAlert;
-(void)_updateNextButton;
-(void)_showSkipPasscodeAlert;
-(void)_showPasscodeOptionsSheet;
-(void)_commitPasscodeEntryTypeChange;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BuddyControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)titleForState:(unsigned)arg1 ;
-(void)viewDidLoad;
-(void)clear;
-(void)nextButtonPressed;
@end
