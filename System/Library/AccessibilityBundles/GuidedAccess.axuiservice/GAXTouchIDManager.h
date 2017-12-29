/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol GAXTouchIDManagerDelegate;
@class BiometricKit, AXAccessQueueTimer, NSString;

@interface GAXTouchIDManager : NSObject <BiometricKitDelegate> {

	char _touchIDCurrentlyActive;
	id<GAXTouchIDManagerDelegate> _delegate;
	BiometricKit* _biometricKit;
	AXAccessQueueTimer* _touchIDActiveTimer;

}

@property (nonatomic,retain) BiometricKit * biometricKit;                                              //@synthesize biometricKit=_biometricKit - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * touchIDActiveTimer;                                  //@synthesize touchIDActiveTimer=_touchIDActiveTimer - In the implementation block
@property (assign,getter=isTouchIDCurrentlyActive,nonatomic) char touchIDCurrentlyActive;              //@synthesize touchIDCurrentlyActive=_touchIDCurrentlyActive - In the implementation block
@property (assign,nonatomic) id<GAXTouchIDManagerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)brieflyListenForTouchIDAttemptsShowingAlertOnTimeout:(char)arg1 ;
-(void)setTouchIDActiveTimer:(AXAccessQueueTimer *)arg1 ;
-(void)_updateTouchIDActivationStatus:(char)arg1 ;
-(AXAccessQueueTimer *)touchIDActiveTimer;
-(char)isTouchIDCurrentlyActive;
-(void)setTouchIDCurrentlyActive:(char)arg1 ;
-(void)cancelListeningForTouchIDAttempts;
-(id)init;
-(void)setDelegate:(id<GAXTouchIDManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXTouchIDManagerDelegate>)delegate;
-(char)_loadBiometricKit;
-(BiometricKit *)biometricKit;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)homeButtonPressed;
@end

