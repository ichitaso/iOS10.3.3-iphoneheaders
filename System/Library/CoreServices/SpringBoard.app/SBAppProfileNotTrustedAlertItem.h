/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplicationIcon;

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem {

	SBApplicationIcon* _icon;
	char _launchApp;

}
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(void)didDeactivateForReason:(int)arg1 ;
-(id)initWithIcon:(id)arg1 ;
@end

