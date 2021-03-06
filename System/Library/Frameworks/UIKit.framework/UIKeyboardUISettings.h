/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface UIKeyboardUISettings : _UISettings {

	int _lastVolume;
	char _nextPage;
	char _didShowHUD;

}
+(id)sharedInstance;
+(char)enabled;
+(void)loadSettings;
+(void)hideViaNotification;
-(void)pressRingerButton;
-(void)hide;
-(id)_sharedHUD;
-(char)_isShowingHUD;
-(id)initWithDefaultValues;
-(void)saveSettings;
-(void)cancel;
-(void)next;
-(void)show;
-(void)show:(char)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)settingsHUDConfiguration;
-(void)previous;
@end

