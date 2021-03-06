/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface ISAdvancedLocaleController : PSListController {

	char _automaticLocaleDisabled;

}

@property (assign,nonatomic) char automaticLocaleDisabled;              //@synthesize automaticLocaleDisabled=_automaticLocaleDisabled - In the implementation block
-(void)reloadLocale;
-(char)automaticLocaleDisabled;
-(void)setAutomaticLocaleDisabled:(char)arg1 ;
-(void)setAutomatic:(id)arg1 specifier:(id)arg2 ;
-(id)automatic:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

