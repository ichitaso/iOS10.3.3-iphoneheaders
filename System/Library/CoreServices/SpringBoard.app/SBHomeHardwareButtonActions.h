/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBNotificationDestinationHomeButtonPressHandler;
@class SBHardwareButtonActionList, SBHardwareButtonService;

@interface SBHomeHardwareButtonActions : NSObject {

	char _screenWasDimOnMenuDown;
	char _dontUnlockOnButtonUp;
	char _isGuidedAccessActive;
	SBHardwareButtonActionList* _buttonUpActions;
	SBHardwareButtonActionList* _buttonUpPostActions;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldStartAbsoluteTime;
	SBHardwareButtonService* _hardwareButtonService;
	char _buttonDown;
	id<SBNotificationDestinationHomeButtonPressHandler> _bannerDestination;
	id<SBNotificationDestinationHomeButtonPressHandler> _notificationCenterDestination;
	double _currentLongPressDuration;

}

@property (assign,getter=isButtonDown,nonatomic) char buttonDown;                                                                   //@synthesize buttonDown=_buttonDown - In the implementation block
@property (assign,nonatomic) double currentLongPressDuration;                                                                       //@synthesize currentLongPressDuration=_currentLongPressDuration - In the implementation block
@property (assign,nonatomic,__weak) id<SBNotificationDestinationHomeButtonPressHandler> bannerDestination;                          //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (assign,nonatomic,__weak) id<SBNotificationDestinationHomeButtonPressHandler> notificationCenterDestination;              //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
-(id<SBNotificationDestinationHomeButtonPressHandler>)bannerDestination;
-(void)setBannerDestination:(id<SBNotificationDestinationHomeButtonPressHandler>)arg1 ;
-(id<SBNotificationDestinationHomeButtonPressHandler>)notificationCenterDestination;
-(void)setNotificationCenterDestination:(id<SBNotificationDestinationHomeButtonPressHandler>)arg1 ;
-(char)isButtonDown;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)performInitialButtonDownActions;
-(void)performFinalButtonUpActions;
-(void)performLongPressActions;
-(void)guidedAccessWasActivated;
-(void)guidedAccessWasDeactivated;
-(void)_cancelPreheatingOfPlugin;
-(char)_shouldIgnorePressesDueToProxOrIdle:(id*)arg1 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(double)currentLongPressDuration;
-(void)_preheatPluginForPresentationAfterInterval:(double)arg1 ;
-(char)_performButtonPreflightActions;
-(void)_logMenuButtonHoldTime;
-(void)performInitialButtonUpActions;
-(void)performDoublePressDownActions;
-(void)performTriplePressUpActions;
-(void)performLongPressCancelledActions;
-(void)performDoubleTapUpActions;
-(void)setCurrentLongPressDuration:(double)arg1 ;
-(id)init;
-(void)setButtonDown:(char)arg1 ;
-(void)performSinglePressUpActions;
@end
