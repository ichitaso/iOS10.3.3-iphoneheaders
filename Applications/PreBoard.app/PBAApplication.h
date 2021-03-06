/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/PreBoard.app/PreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreBoard/PreBoard-Structs.h>
#import <FrontBoard/FBSystemApp.h>

@class NSTimer, PBAIdleSleepController;

@interface PBAApplication : FBSystemApp {

	char _eatMenuUp;
	NSTimer* _lockButtonTimer;
	PBAIdleSleepController* _idleSleepController;

}

@property (nonatomic,retain) NSTimer * lockButtonTimer;                                 //@synthesize lockButtonTimer=_lockButtonTimer - In the implementation block
@property (nonatomic,retain) PBAIdleSleepController * idleSleepController;              //@synthesize idleSleepController=_idleSleepController - In the implementation block
+(char)registerAsSystemApp;
+(char)shouldCheckInWithBackboard;
+(double)systemIdleSleepInterval;
-(char)__handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_lockButtonDown;
-(void)_lockButtonUp;
-(void)_startLockButtonTimer;
-(void)_lockButtonLongPress;
-(void)setLockButtonTimer:(NSTimer *)arg1 ;
-(NSTimer *)lockButtonTimer;
-(void)_cancelLockButtonTimer;
-(void)setIdleSleepController:(PBAIdleSleepController *)arg1 ;
-(void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3 ;
-(void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2 ;
-(PBAIdleSleepController *)idleSleepController;
-(id)init;
-(void)_createStatusBarWithRequestedStyle:(int)arg1 orientation:(int)arg2 hidden:(char)arg3 ;
-(char)_isSpringBoard;
-(char)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)_handleHIDEvent:(IOHIDEventRef)arg1 ;
@end

