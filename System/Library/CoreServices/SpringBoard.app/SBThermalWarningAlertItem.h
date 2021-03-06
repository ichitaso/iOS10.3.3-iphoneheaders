/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBThermalWarningAlertItemDelegate;
@interface SBThermalWarningAlertItem : SBAlertItem {

	id<SBThermalWarningAlertItemDelegate> _delegate;
	int _actionTaken;

}

@property (getter=isWaitingForResponse,nonatomic,readonly) char waitingForResponse; 
-(void)_tryToSendAction:(int)arg1 ;
-(void)dismissAlertCooldown:(int)arg1 ;
-(void)_autoCoolDown;
-(void)_playPresentationSound;
-(id)initWithDelegate:(id)arg1 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)undimsScreen;
-(char)unlocksScreen;
-(void)didDeactivateForReason:(int)arg1 ;
-(char)isWaitingForResponse;
-(void)willActivate;
@end

