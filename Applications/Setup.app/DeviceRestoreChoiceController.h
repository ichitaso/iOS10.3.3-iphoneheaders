/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>

@class SetupChoice;

@interface DeviceRestoreChoiceController : SetupChoiceController {

	SetupChoice* _otaRestoreChoice;
	SetupChoice* _itunesRestoreChoice;
	SetupChoice* _setUpAsNewChoice;
	SetupChoice* _androidMigrateChoice;

}
+(char)controllerNeedsToRun;
+(void)skip;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithChoiceDelegate:(id)arg1 ;
-(char)wantsNextButton;
-(id)footerDetailText;
-(id)footerIconName;
-(id)footerTitleText;
-(void)viewDidAppear:(char)arg1 ;
-(id)titleText;
-(void)controllerDone;
@end

