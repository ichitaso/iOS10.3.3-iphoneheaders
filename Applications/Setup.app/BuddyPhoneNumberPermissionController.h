/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>

@class SetupChoice;

@interface BuddyPhoneNumberPermissionController : SetupChoiceController {

	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;

}

@property (nonatomic,retain) SetupChoice * enableChoice;               //@synthesize enableChoice=_enableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * disableChoice;              //@synthesize disableChoice=_disableChoice - In the implementation block
+(void)registerPhoneNumberPermissionEnabled:(char)arg1 ;
+(char)controllerNeedsToRun;
+(void)skip;
-(char)wantsNextButton;
-(id)footerDetailText;
-(char)useTableLayout;
-(id)footerIconName;
-(void)setEnableChoice:(SetupChoice *)arg1 ;
-(void)setDisableChoice:(SetupChoice *)arg1 ;
-(SetupChoice *)enableChoice;
-(SetupChoice *)disableChoice;
-(id)init;
-(id)titleText;
-(void)controllerDone;
@end

