/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockHardwareButtonActions : NSObject {

	char _didPlayLockSound;
	char _dontLockOnNextLockUp;
	char _fadeOutInProgressFromLockButtonWhileUnlocked;
	char _undidFadeOutFromLockButton;
	char _useDashBoard;
	char _sosGestureIsActive;
	char _isButtonDown;

}

@property (nonatomic,readonly) char isButtonDown;              //@synthesize isButtonDown=_isButtonDown - In the implementation block
-(char)isButtonDown;
-(char)performButtonDownPreActions;
-(void)performButtonDownActions;
-(char)performButtonUpPreActions;
-(void)performSinglePressAction;
-(char)reverseFadeOutIfNeeded;
-(void)_playLockSound;
-(void)performSOSGestureBeganActions;
-(void)performSOSGestureEndedActions;
-(void)performLongPressActions;
-(void)performSOSActionsWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

