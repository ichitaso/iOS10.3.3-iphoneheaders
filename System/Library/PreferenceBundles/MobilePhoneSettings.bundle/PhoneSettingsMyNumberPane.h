/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface PhoneSettingsMyNumberPane : PSTextEditingPane {

	NSString* _previousValue;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(SCD_Struct_Ph3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)navigationTitle;
-(char)handlesDoneButton;
-(void)_textDidChange:(id)arg1 ;
-(void)setMyNumberText:(id)arg1 ;
-(char)drawLabel;
@end

