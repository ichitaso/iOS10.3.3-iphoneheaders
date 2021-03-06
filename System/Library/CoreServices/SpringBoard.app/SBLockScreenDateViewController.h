/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class _UILegibilitySettings, NSString;

@interface SBLockScreenDateViewController : UIViewController <SBDateTimeOverrideObserver, _UISettingsKeyObserver> {

	NSNumber* _timerToken;
	char _disablesUpdates;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,getter=isSubtitleHidden,nonatomic) char subtitleHidden; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(id)dateViewIfExists;
-(void)_updateLegibilityStrength;
-(void)_updateFormat;
-(void)_setDisablesUpdates:(char)arg1 ;
-(void)_backlightChanged;
-(void)dealloc;
-(NSString *)description;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setCustomSubtitleView:(id)arg1 ;
-(char)isSubtitleHidden;
-(void)setSubtitleHidden:(char)arg1 ;
-(void)setContentAlpha:(float)arg1 withSubtitleVisible:(char)arg2 ;
-(id)dateView;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(void)_addObservers;
@end

