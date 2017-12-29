/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBProcessObserver.h>
#import <SpringBoard/SBLockScreenPluginAgent.h>
#import <libobjc.A.dylib/SBLockScreenPluginController.h>

@protocol SBLockScreenPluginController, SBLockScreenPluginAgent, SBLockScreenPluginDelegate;
@class SBLockScreenPluginAction, BSPluginBundle, NSString, FBProcess, SBLockScreenPluginAppearanceContext, NSMutableArray, SBLockOverlayContext, SBDashBoardAppearance, SBDashBoardBehavior, _UILegibilitySettings;

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController> {

	BSPluginBundle* _bundle;
	NSString* _bundleName;
	FBProcess* _process;
	id<SBLockScreenPluginController> _controller;
	id<SBLockScreenPluginAgent> _agent;
	SBLockScreenPluginAppearanceContext* _appearance;
	NSMutableArray* _lifecycleObservers;
	SBLockOverlayContext* _overlay;
	/*^block*/id _auxiliaryActivationAnimationBlock;
	/*^block*/id _auxiliaryDeactivationAnimationBlock;
	id<SBLockScreenPluginDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenPluginDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                  //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,readonly) id<SBLockScreenPluginController> controller;                                           //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> viewController; 
@property (nonatomic,readonly) SBLockScreenPluginAppearanceContext * appearance; 
@property (nonatomic,readonly) SBLockScreenPluginAction * unlockAction; 
@property (nonatomic,readonly) SBDashBoardAppearance * dashBoardAppearance; 
@property (nonatomic,readonly) SBDashBoardBehavior * dashBoardBehavior; 
@property (nonatomic,retain) SBLockOverlayContext * overlay;                                                          //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,copy) id auxiliaryActivationAnimationBlock;                                                      //@synthesize auxiliaryActivationAnimationBlock=_auxiliaryActivationAnimationBlock - In the implementation block
@property (nonatomic,copy) id auxiliaryDeactivationAnimationBlock;                                                    //@synthesize auxiliaryDeactivationAnimationBlock=_auxiliaryDeactivationAnimationBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent;                                          //@synthesize agent=_agent - In the implementation block
@property (nonatomic,readonly) int pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
+(id)_pluginBundleForPluginWithName:(id)arg1 ;
+(id)pluginWithName:(id)arg1 activationContext:(id)arg2 ;
-(SBDashBoardAppearance *)dashBoardAppearance;
-(SBDashBoardBehavior *)dashBoardBehavior;
-(char)isCapabilityRestricted:(unsigned)arg1 ;
-(char)handleDashBoardEvent:(id)arg1 ;
-(id)auxiliaryDeactivationAnimationBlock;
-(void)setAuxiliaryDeactivationAnimationBlock:(id)arg1 ;
-(id)auxiliaryActivationAnimationBlock;
-(void)setAuxiliaryActivationAnimationBlock:(id)arg1 ;
-(id)initWithBundle:(id)arg1 activationContext:(id)arg2 ;
-(void)activatePluginController:(id)arg1 ;
-(char)pluginController:(id)arg1 sendAction:(id)arg2 ;
-(SBLockScreenPluginAction *)unlockAction;
-(char)isElementHidden:(int)arg1 ;
-(void)addLifecycleObserver:(id)arg1 ;
-(void)removeLifecycleObserver:(id)arg1 ;
-(void)enumerateLifecycleObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<SBLockScreenPluginDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SBLockScreenPluginDelegate>)delegate;
-(NSString *)name;
-(SBLockScreenPluginAppearanceContext *)appearance;
-(UIViewController*<SBLockScreenPluginViewController>)viewController;
-(SBLockOverlayContext *)overlay;
-(id<SBLockScreenPluginController>)controller;
-(id)overrideForElement:(int)arg1 ;
-(void)pluginController:(id)arg1 updateAppearance:(id)arg2 ;
-(void)setPluginAgent:(id<SBLockScreenPluginAgent>)arg1 ;
-(void)deactivatePluginController:(id)arg1 ;
-(void)pluginWillActivateWithContext:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg1 ;
-(char)pluginHandleEvent:(int)arg1 ;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(int)pluginPriority;
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;
-(SBLockScreenPluginAction *)pluginUnlockAction;
-(void)_updateAppearance:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)processDidExit:(id)arg1 ;
-(void)setOverlay:(SBLockOverlayContext *)arg1 ;
@end

