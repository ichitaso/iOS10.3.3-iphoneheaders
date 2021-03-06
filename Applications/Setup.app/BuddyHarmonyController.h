/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>

@class UILabel, UIView, CBClient;

@interface BuddyHarmonyController : SetupChoiceController {

	UILabel* _label;
	UIView* _button;
	CBClient* _brightnessClient;

}
+(char)controllerNeedsToRun;
+(void)skip;
-(char)wantsNextButton;
-(id)footerDetailText;
-(char)useTableLayout;
-(id)footerIconName;
-(void)_toggleSelection:(char)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)buttonPressed:(id)arg1 ;
-(id)titleText;
-(void)controllerDone;
@end

