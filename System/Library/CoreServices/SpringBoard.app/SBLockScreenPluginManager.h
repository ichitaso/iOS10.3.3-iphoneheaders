/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenPluginAgent.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBLockScreenActionProvider.h>

@protocol SBLockScreenPluginManagerDelegate;
@class NSMutableDictionary, SBLockScreenPlugin, SBLockScreenTestPluginSettings, NSString;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, _UISettingsKeyObserver, SBLockScreenActionProvider> {

	NSMutableDictionary* _plugins;
	SBLockScreenPlugin* _activePlugin;
	SBLockScreenPlugin* _displayedPlugin;
	id<SBLockScreenPluginManagerDelegate> _delegate;
	SBLockScreenTestPluginSettings* _testSettings;
	char _enabled;

}

@property (nonatomic,readonly) SBLockScreenPlugin * activePlugin;                                //@synthesize activePlugin=_activePlugin - In the implementation block
@property (nonatomic,readonly) SBLockScreenPlugin * displayedPlugin;                             //@synthesize displayedPlugin=_displayedPlugin - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenPluginManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableLockScreenPluginWithContext:(id)arg1 ;
-(char)disableLockScreenPluginWithContext:(id)arg1 ;
-(void)activatePluginController:(id)arg1 ;
-(char)pluginController:(id)arg1 sendAction:(id)arg2 ;
-(id)lockScreenActionContext;
-(void)_handleUIRelock;
-(void)_refreshLockScreenPlugin;
-(char)_loadLockScreenPluginWithContext:(id)arg1 ;
-(char)_handlePluginDisabled:(id)arg1 withContext:(id)arg2 ;
-(char)_sendEventToPlugin:(/*^block*/id)arg1 ;
-(id)_highestPriorityPluginIgnoringViewDisplay:(char)arg1 ;
-(void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2 ;
-(id)_pluginForPluginController:(id)arg1 ;
-(SBLockScreenPlugin *)activePlugin;
-(SBLockScreenPlugin *)displayedPlugin;
-(id)init;
-(void)setDelegate:(id<SBLockScreenPluginManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SBLockScreenPluginManagerDelegate>)delegate;
-(char)handleEvent:(int)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)pluginController:(id)arg1 updateAppearance:(id)arg2 ;
-(void)deactivatePluginController:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

